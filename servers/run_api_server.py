import json
import pickle
import argparse

import uvicorn

from fastapi import Depends, FastAPI, HTTPException, status, Header, File
from fastapi.security import HTTPBasic, HTTPBasicCredentials

from utils.database.DBConnection import DBConnection

from classes.IcicleSpyPackage import IcicleSpyPackage

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--port', type=int, default=8000)
    parser.add_argument('--config', type=str, required=True)

    args = parser.parse_args()
    print(args)

    cfg = json.loads(open(args.config, 'r').read())

    app = FastAPI()
    security = HTTPBasic()
    db = DBConnection(cfg['mysql']['host'], cfg['mysql']['port'], cfg['mysql']['user'], cfg['mysql']['password'])


    def user_http_auth(credentials: HTTPBasicCredentials = Depends(security)):
        if not (db.user_auth_check(credentials.username, credentials.password)):
            raise HTTPException(
                status_code=status.HTTP_401_UNAUTHORIZED,
                detail="Incorrect email or password",
                headers={"WWW-Authenticate": "Basic"},
            )

        return True


    def device_http_auth(credentials: HTTPBasicCredentials = Depends(security)):
        # if not (db.user_auth_check(credentials.username, credentials.password)):
        #     raise HTTPException(
        #         status_code=status.HTTP_401_UNAUTHORIZED,
        #         detail="Incorrect email or password",
        #         headers={"WWW-Authenticate": "Basic"},
        #     )

        return True


    @app.get("/get_data")
    def get_data(_=Depends(user_http_auth), id: int = Header(None), fields: str = Header(None)):
        if id > 0 and fields != '':
            fields = json.loads(fields)
            data = db.get_data_by_id(id, fields)
            return {'status': True, 'data': data}
        else:
            return {'status': False, 'data': []}


    @app.post("/save_data_from_device")
    def save_data_from_device(_=Depends(device_http_auth), data: bytes = File(...)):
        isp = pickle.loads(data)

        if type(isp) == IcicleSpyPackage:
            if not db.device_auth_check(isp.device_id):
                raise HTTPException(
                    status_code=status.HTTP_403_FORBIDDEN,
                    detail="Forbidden"
                )

            db.save_device_package(isp)
            return {'status': True}
        else:
            raise HTTPException(
                status_code=status.HTTP_422_UNPROCESSABLE_ENTITY,
                detail="IcicleSpyPackage required"
            )

    uvicorn.run(app, port=args.port)
