import json
import pickle
import argparse

import uvicorn

from fastapi import Depends, FastAPI, HTTPException, status, Header, File
from fastapi.security import HTTPBasic, HTTPBasicCredentials

from utils.database.DBConnection import DBConnection

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


    def http_auth(credentials: HTTPBasicCredentials = Depends(security)):
        if not (db.auth_check(credentials.username, credentials.password)):
            raise HTTPException(
                status_code=status.HTTP_401_UNAUTHORIZED,
                detail="Incorrect email or password",
                headers={"WWW-Authenticate": "Basic"},
            )

        return True


    @app.get("/get_data")
    def get_data(_=Depends(http_auth), id: int = Header(None), fields: str = Header(None)):
        if id > 0 and fields != '':
            fields = json.loads(fields)
            data = db.get_data_by_id(id, fields)
            return {'status': True, 'data': data}
        else:
            return {'status': False, 'data': []}


    @app.post("/save_data_from_device/{device_id}")
    def create_upload_file(device_id: str, file: bytes = File(...)):
        print(device_id)
        print(pickle.loads(file))
        return {"filename": 'ok'}


    uvicorn.run(app, port=args.port)
