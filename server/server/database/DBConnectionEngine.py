class DBConnectionEngine:
    __LOCK = ('\'', '\"', '<', '>', '=', '--', '?', '-', 'or', 'and', 'not', 'drop', 'table', 'database',
            'group', 'by', 'inner', 'join', 'left', 'right', 'union', 'distinct', 'insert', 'delete', 'values')

    __LOCK_SUBSTRING = ('\'', '\"', '<', '>', '=', '--', '?')  # , '-'

    def __substring_check(self, s):
        for ls in self.__LOCK_SUBSTRING:
            if s.find(ls) != -1:
                return False
        return True

    def sql_check(self, val):
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

    def execute(self, db, query, params=None, set=False):
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


if __name__ == '__main__':
    e = DBConnectionEngine()
    # x = 'test test        test'
    x = 2.452
    print(e.sql_check(x))
