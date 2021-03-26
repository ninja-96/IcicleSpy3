from fastapi import Depends, FastAPI, HTTPException, status
from fastapi.security import HTTPBasic, HTTPBasicCredentials

from Auth import Auth

app = FastAPI()
security = HTTPBasic()
auth = Auth({'oleg': 'oleg'})


def get_current_username(credentials: HTTPBasicCredentials = Depends(security)):
    if not (auth.check(credentials.username, credentials.password)):
        raise HTTPException(
            status_code=status.HTTP_401_UNAUTHORIZED,
            detail="Incorrect email or password",
            headers={"WWW-Authenticate": "Basic"},
        )

    return credentials.username


@app.get("/")
def read_current_user(username: str = Depends(get_current_username)):
    return {"username": username}
