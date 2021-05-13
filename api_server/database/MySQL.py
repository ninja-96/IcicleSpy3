import hashlib

import mysql.connector as sql
from mysql.connector import MySQLConnection

from api_server.database.Influx import Influx
from api_server.database.MySQLBase import MySQLBase
from classes.IcicleSpyPackage import IcicleSpyPackage, IcicleSpyPackageMobile
from api_server.database.MySQLQueries import MySQLQueries


class MySQL(MySQLBase):
    def __init__(self, host: str, port: int, user: str, password: str):
        super().__init__()

        self.__db = MySQLConnection()
        self.__devices_data_fields = ['id', 'time', 'temperature', 'air_humidity', 'count', 'bbox', 'img']
        self.__users_data_fields = ['id', 'time', 'count', 'bbox', 'img', 'coordinates']

        self.__connect(host, port, user, password)

    def __connect(self, host: str, port: int, user: str, password: str) -> bool:
        try:
            self.__db.connect(host=host, port=port, user=user, passwd=password)
            return True
        except sql.errors.InterfaceError:
            return False

    def __reconnect(self) -> bool:
        try:
            self.__db.reconnect()
            return True
        except sql.errors.InterfaceError:
            return False

    def user_auth_check(self, login, password) -> bool:
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            if self.sql_check(login):
                query = MySQLQueries.USER_AUTH_CHECK
                answer = self.execute(self.__db,
                                      query,
                                      [login,
                                       hashlib.md5(bytes(password, 'utf-8')).hexdigest()])[0][0]
                return bool(answer)
            else:
                return False
        else:
            return False

    def device_in_db(self, device_token) -> bool:
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            if self.sql_check(device_token):
                query = MySQLQueries.DEVICE_IN_DB
                answer = self.execute(self.__db,
                                      query,
                                      [device_token])[0][0]
                return bool(answer)
            else:
                return False
        else:
            return False

    def camera_in_db(self, camera_token) -> bool:
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            if self.sql_check(camera_token):
                query = MySQLQueries.CAMERA_IN_DB
                answer = self.execute(self.__db,
                                      query,
                                      [camera_token])[0][0]
                return bool(answer)
            else:
                return False
        else:
            return False

    def save_device_package(self, data: IcicleSpyPackage, influx_db: Influx) -> bool:
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            query = MySQLQueries.DEVICE_ID_BY_TOKEN
            device_id = self.execute(self.__db,
                                     query,
                                     [data.device_token])[0][0]

            query = MySQLQueries.CAMERA_ID_BY_TOKEN
            camera_id = self.execute(self.__db,
                                     query,
                                     [data.camera_token])[0][0]

            query = MySQLQueries.DEVICE_RECORD_ID_EXISTS
            record_id = self.execute(self.__db,
                                     query,
                                     [device_id,
                                      camera_id])

            if len(record_id) == 0:
                query = MySQLQueries.SAVE_DEVICE_PACKAGE
                self.execute(self.__db,
                             query,
                             [data.time,
                              data.temperature,
                              data.air_humidity,
                              data.count,
                              str(data.bbox),
                              data.img,
                              device_id,
                              camera_id],
                             set=True)
            elif len(record_id) == 1:
                query = MySQLQueries.UPDATE_DEVICE_RECORD
                self.execute(self.__db,
                             query,
                             [data.time,
                              data.temperature,
                              data.air_humidity,
                              data.count,
                              str(data.bbox),
                              data.img,
                              record_id[0][0],
                              device_id,
                              camera_id],
                             set=True)
            else:
                return False

            query = MySQLQueries.DEVICE_RECORD_ID_EXISTS
            record_id = self.execute(self.__db,
                                     query,
                                     [device_id,
                                      camera_id])[0][0]

            query = MySQLQueries.ADDRESS_INFO_BY_IDX
            country, region_state, city, street, building, index = self.execute(self.__db,
                                                                                query,
                                                                                [record_id])[0]

            influx_db.save_device_package(device_token=data.device_token,
                                          country=country,
                                          region_state=region_state,
                                          city=city,
                                          street=street,
                                          building=building,
                                          index=index,
                                          temperature=data.temperature,
                                          air_humidity=data.air_humidity)

            return True
        else:
            return False

    # def save_mobile_package(self, data: IcicleSpyPackageMobile) -> bool:
    #     if not self.__db.is_connected():
    #         self.__reconnect()
    #
    #     if self.__db.is_connected():
    #         query: str = MySQLQueries.SAVE_MOBILE_PACKAGE
    #         self.execute(self.__db,
    #                      query,
    #                      [data.time,
    #                       data.count,
    #                       data.bbox,
    #                       data.latitude,
    #                       data.longitude,
    #                       data.users_id],
    #                      set=True)
    #         return True
    #     else:
    #         return False

    def get_icicle_count_by_token(self, token: str) -> [int, int, int]:
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            query: str = MySQLQueries.GET_ICICLE_COUNT_BY_TOKEN

            min_count, max_count, avg = self.execute(self.__db,
                                                     query,
                                                     [token])[0]

            return int(min_count), int(max_count), int(avg)
        else:
            return -1, -1, -1

    def get_data_by_id(self, id: int, request: list) -> list:
        if not self.__db.is_connected():
            self.__reconnect()

        if self.__db.is_connected():
            for r in request:
                if r not in self.__devices_data_fields and self.sql_check(r):
                    return []

            query: str = MySQLQueries.DEVICE_RECORD_ID_BY_ID
            query: str = query % (', '.join(request), '%s')

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
        else:
            return []


if __name__ == '__main__':
    import json
    cfg = json.loads(open('../api_server_config.json').read())
    db = MySQL(cfg['mysql']['host'],
               cfg['mysql']['port'],
               cfg['mysql']['user'],
               cfg['mysql']['password'])

    print(db.get_icicle_count_by_token('DEV3'))
