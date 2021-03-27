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

    def auth_check(self, username, password):
        pass

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

    ispm = IcicleSpyPackageMobile()
    ispm.time = '2020-02-20 12:12:12'
    ispm.count = 1
    ispm.bbox = '[]'
    ispm.img = bytes([0])
    ispm.latitude = 0.0
    ispm.longitude = 0.0
    ispm.camera_id = 1
    ispm.device_id = 2

    db = DBConnection('localhost', 3306, 'iciclespy3_server', 'is_server3_password', 'IcicleSpy3')
    db.save_mobile_package(ispm)