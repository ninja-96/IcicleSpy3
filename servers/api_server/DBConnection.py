import hashlib

import mysql.connector as sql
from mysql.connector import MySQLConnection

from servers.utils.DBConnectionEngine import DBConnectionEngine

from servers.utils.IcicleSpyPackage import IcicleSpyPackage, IcicleSpyPackageMobile
from Queries import Queries


class DBConnection(DBConnectionEngine):
    def __init__(self, host, port, user, password, database):
        super().__init__()

        self.db = MySQLConnection()
        self.__connect(host, port, user, password, database)

    def __connect(self, host, port, user, password, database):
        try:
            self.db.connect(host=host, port=port, user=user, passwd=password, database=database)
            return True
        except sql.errors.InterfaceError:
            return False

    def __reconnect(self):
        try:
            self.db.reconnect()
            return True
        except sql.errors.InterfaceError:
            return False

    def auth_check(self, login, password):
        if not self.db.is_connected():
            self.__reconnect()

        if self.db.is_connected():
            query = Queries.AUTH_CHECK
            answer = self.execute(self.db,
                                  query,
                                  [login,
                                   hashlib.md5(bytes(password, 'utf-8')).hexdigest()])[0][0]

            return bool(answer)
        else:
            return False

    def save_device_package(self, data: IcicleSpyPackage):
        if not self.db.is_connected():
            self.__reconnect()

        if self.db.is_connected():
            query = Queries.SAVE_DEVICE_PACKAGE
            self.execute(self.db,
                         query,
                         [data.time,
                          data.temperature,
                          data.air_humidity,
                          data.count,
                          data.bbox,
                          data.device_id,
                          data.camera_id],
                         set=True)

            return True
        else:
            return False

    def save_mobile_package(self, data: IcicleSpyPackageMobile):
        if not self.db.is_connected():
            self.__reconnect()

        if self.db.is_connected():
            query = Queries.SAVE_MOBILE_PACKAGE
            self.execute(self.db,
                         query,
                         [data.time,
                          data.count,
                          data.bbox,
                          data.latitude,
                          data.longitude,
                          data.device_id,
                          data.camera_id],
                         set=True)
            return True
        else:
            return False


if __name__ == '__main__':
    login = 'test@mail.ru'
    password = 'icicle'

    db = DBConnection('localhost', 3306, 'iciclespy3_server', 'is_server3_password', 'IcicleSpy3')
    auth = db.auth_check(login, password)
    print(f'Data correct : {auth}')

    # isp = IcicleSpyPackage()
    # isp.time = '2020-02-20 12:12:12'
    # isp.temperature = -22
    # isp.air_humidity = 53
    # isp.count = 1
    # isp.bbox = '[]'
    # isp.img = bytes([0])
    # isp.camera_id = 1
    # isp.device_id = 1
    #
    # db = DBConnection('localhost', 3306, 'iciclespy3_server', 'is_server3_password', 'IcicleSpy3')
    # db.save_device_package(isp)

    # ispm = IcicleSpyPackageMobile()
    # ispm.time = '2020-02-20 12:12:12'
    # ispm.count = 1
    # ispm.bbox = '[]'
    # ispm.img = bytes([0])
    # ispm.latitude = 0.0
    # ispm.longitude = 0.0
    # ispm.camera_id = 1
    # ispm.device_id = 2
    #
    # db = DBConnection('localhost', 3306, 'iciclespy3_server', 'is_server3_password', 'IcicleSpy3')
    # db.save_mobile_package(ispm)