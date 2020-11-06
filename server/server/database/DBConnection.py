import mysql.connector as sql
from mysql.connector import MySQLConnection

from server.server.database.Queries import Queries
from server.server.database.DBConnectionEngine import DBConnectionEngine


class DBConnection(DBConnectionEngine, Queries):
    def __init__(self, host, port, user, password, database):
        super().__init__()

        self.db = MySQLConnection()
        self.connect(host, port, user, password, database)

    def connect(self, host, port, user, password, database):
        try:
            self.db.connect(host=host, port=port, user=user, passwd=password, database=database)
            return True
        except sql.errors.InterfaceError:
            return False

    def reconnect(self):
        try:
            self.db.reconnect()
            return True
        except sql.errors.InterfaceError:
            return False

    def save_data(self, temp, hum, count):
        if not self.db.is_connected():
            self.reconnect()

        if self.db.is_connected():
            query = self.SAVE_DATA
            self.execute(self.db, query, [temp, hum, count], set=True)
            return True
        else:
            return False


if __name__ == '__main__':
    import time
    db = DBConnection('localhost', 3306, 'oleg', '321', 'test')
    # time.sleep(10)
    db.save_data(2.567, 2, 2)
