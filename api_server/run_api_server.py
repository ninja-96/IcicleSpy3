import json
import pickle
import argparse

import uvicorn

from fastapi import Depends, FastAPI, HTTPException, status, Header, File
from fastapi.security import HTTPBasic, HTTPBasicCredentials

from utils import DeviceAuth
from database.MySQL import MySQL
from database.Influx import Influx

from classes.IcicleSpyPackage import IcicleSpyPackage

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--port', type=int, default=8000)
    parser.add_argument('--config', type=str, required=True)

    args = parser.parse_args()
    print(args)

    cfg = json.loads(open(args.config, 'r').read())

    app = FastAPI()
    user_security = HTTPBasic()

    device_auth = DeviceAuth(cfg['device_security']['login'], cfg['device_security']['password'])
    device_security = HTTPBasic()

    influx_db = Influx(host=cfg['influx']['url'],
                       token=cfg['influx']['token'],
                       org=cfg['influx']['org'],
                       bucket=cfg['influx']['bucket'])

    mysql_db = MySQL(host=cfg['mysql']['host'],
                     port=cfg['mysql']['port'],
                     user=cfg['mysql']['user'],
                     password=cfg['mysql']['password'])


    def user_http_auth(credentials: HTTPBasicCredentials = Depends(user_security)):
        if not (mysql_db.user_auth_check(credentials.username, credentials.password)):
            raise HTTPException(
                status_code=status.HTTP_401_UNAUTHORIZED,
                detail="Incorrect email or password",
                headers={"WWW-Authenticate": "Basic"},
            )

        return True


    def device_http_auth(credentials: HTTPBasicCredentials = Depends(device_security)):
        if not (device_auth.check(credentials.username, credentials.password)):
            raise HTTPException(
                status_code=status.HTTP_401_UNAUTHORIZED,
                detail="Auth failed",
                headers={"WWW-Authenticate": "Basic"},
            )

        return True


    @app.get("/get_data")
    def get_data(_=Depends(user_http_auth), id: int = Header(None), fields: str = Header(None)):
        if id > 0 and fields != '':
            fields: list = json.loads(fields)
            data = mysql_db.get_data_by_id(id, fields)
            return {'status': True, 'data': data}
        else:
            return {'status': False, 'data': []}

    @app.get('/get_icicle_count')
    def get_icicle_count(_=Depends(device_http_auth), token: str = Header(None)):
        if not mysql_db.device_in_db(token):
            raise HTTPException(
                status_code=status.HTTP_403_FORBIDDEN,
                detail="Forbidden"
            )

        count = mysql_db.get_icicle_count_by_token(token)
        return {'status': True, 'count': count}

    @app.post("/save_data_from_device")
    def save_data_from_device(_=Depends(device_http_auth), data: bytes = File(...)):
        isp = pickle.loads(data)

        if type(isp) == IcicleSpyPackage:
            if not (mysql_db.device_in_db(isp.device_token) and mysql_db.camera_in_db(isp.camera_token)):
                raise HTTPException(
                    status_code=status.HTTP_403_FORBIDDEN,
                    detail="Forbidden"
                )

            mysql_db.save_device_package(data=isp, influx_db=influx_db)
            return {'status': True}
        else:
            raise HTTPException(
                status_code=status.HTTP_422_UNPROCESSABLE_ENTITY,
                detail="IcicleSpyPackage required"
            )

    uvicorn.run(app, port=args.port)
