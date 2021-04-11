import hashlib

import mysql.connector as sql
from mysql.connector import MySQLConnection

from .DBConnectionEngine import DBConnectionEngine
from classes.IcicleSpyPackage import IcicleSpyPackage, IcicleSpyPackageMobile
from .Queries import Queries


class DBConnection(DBConnectionEngine):
    def __init__(self, host, port, user, password):
        super().__init__()

        self.__db = MySQLConnection()
        self.__devices_data_fields = ['id', 'time', 'temperature', 'air_humidity', 'count', 'bbox', 'img', 'device_id', 'camera_id']
        self.__users_data_fields = ['id', 'time', 'count', 'bbox', 'img', 'coorinates']

        self.__connect(host, port, user, password)

    def __connect(self, host, port, user, password):
        try:
            self.__db.connect(host=host, port=port, user=user, passwd=password)
            return True
        except sql.errors.InterfaceError:
            return False

    def __reconnect(self):
        try:
            self.__db.reconnect()
            return True
        except sql.errors.InterfaceError:
            return False

    def user_auth_check(self, login, password):
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            if self.sql_check(login):
                query = Queries.USER_AUTH_CHECK
                answer = self.execute(self.__db,
                                      query,
                                      [login,
                                       hashlib.md5(bytes(password, 'utf-8')).hexdigest()])[0][0]
                return bool(answer)
            else:
                return False
        else:
            return False

    def device_auth_check(self, device_id):
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            if self.sql_check(device_id):
                query = Queries.DEVICE_AUTH_CHECK
                answer = self.execute(self.__db,
                                      query,
                                      [device_id])[0][0]
                return bool(answer)
            else:
                return False
        else:
            return False

    def save_device_package(self, data: IcicleSpyPackage):
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            query = Queries.DEVICE_RECORD_ID_EXISTS
            result = self.execute(self.__db,
                                  query,
                                  [data.device_id,
                                   data.camera_id])

            if len(result) == 0:
                query = Queries.SAVE_DEVICE_PACKAGE
                self.execute(self.__db,
                             query,
                             [data.time,
                              data.temperature,
                              data.air_humidity,
                              data.count,
                              data.bbox,
                              data.img,
                              data.device_id,
                              data.camera_id],
                             set=True)
                return True
            elif len(result) == 1:
                query = Queries.UPDATE_DEVICE_RECORD
                self.execute(self.__db,
                             query,
                             [data.time,
                              data.temperature,
                              data.air_humidity,
                              data.count,
                              data.bbox,
                              data.img,
                              data.device_id,
                              data.camera_id],
                             set=True)
            else:
                return False
        else:
            return False

    def save_mobile_package(self, data: IcicleSpyPackageMobile):
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            query = Queries.SAVE_MOBILE_PACKAGE
            self.execute(self.__db,
                         query,
                         [data.time,
                          data.count,
                          data.bbox,
                          data.latitude,
                          data.longitude,
                          data.users_id],
                         set=True)
            return True
        else:
            return False

    def get_data_by_id(self, id: int, request: list):
        for r in request:
            if r not in self.__devices_data_fields and self.sql_check(r):
                return []

        query = Queries.DEVICE_RECORD_ID_BY_ID
        query = query % (', '.join(request), '%s')

        data = self.execute(self.__db,
                            query,
                            [id])

        return_data = []
        for d in data:
            tmp = {}
            for r, dd in zip(request, d):
                tmp[r] = dd
            return_data.append(tmp)

        return return_data
