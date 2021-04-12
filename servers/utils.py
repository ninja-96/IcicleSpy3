import hashlib


class DeviceAuth:
    def __init__(self, login: str, password: str):
        self.__login = login
        self.__password = password

    def check(self, login: str, password: str) -> bool:
        login = hashlib.sha256(login.encode()).hexdigest()
        password = hashlib.sha256(password.encode()).hexdigest()

        if login == self.__login and password == self.__password:
            return True
        else:
            return False
