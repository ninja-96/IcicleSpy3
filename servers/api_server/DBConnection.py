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
        else:
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

    def save_mobile_package(self, data: IcicleSpyPackageMobile):
        pass


if __name__ == '__main__':
    isp = IcicleSpyPackage()
    isp.time = '2020-02-20 12:12:12'

    db = DBConnection('localhost', 3306, 'iciclespy3_server', 'is_server3_password', 'IcicleSpy3')
    db.save_device_package(isp)
