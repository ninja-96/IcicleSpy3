from typing import Union
from mysql.connector import MySQLConnection


class DBConnectionBase:
    __LOCK = ('\'', '\"', '<', '>', '=', '--', '?', '-', 'or', 'and', 'not', 'drop', 'table', 'database',
            'group', 'by', 'inner', 'join', 'left', 'right', 'union', 'distinct', 'insert', 'delete', 'values')

    __LOCK_SUBSTRING = ('\'', '\"', '<', '>', '=', '--', '?')  # , '-'

    def __substring_check(self, s: str) -> bool:
        for ls in self.__LOCK_SUBSTRING:
            if s.find(ls) != -1:
                return False
        return True

    def sql_check(self, val: Union[int, float, list, set]) -> bool:
        if type(val) in [int, float, list, set]:
            return True
        elif type(val) in [str]:
            val = val.split(' ')
            val = [i for i in val if i != '']

            for v in val:
                if v in self.__LOCK:
                    return False
                else:
                    if self.__substring_check(v):
                        continue
                    else:
                        return False
            return True
        else:
            return False

    def execute(self, db: MySQLConnection, query: str, params: list = None, set: bool = False) -> Union[list, None]:
        db.commit()

        cursor = db.cursor()
        cursor.execute(query, params=params)

        if not set:
            result = cursor.fetchall()

            db.commit()
            return result
        else:
            db.commit()
            return
