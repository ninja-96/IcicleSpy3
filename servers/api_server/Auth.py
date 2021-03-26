class Auth:
    def __init__(self, user_db):
        self.__users = user_db

    def check(self, username, password):
        if username in self.__users.keys():
            if self.__users[username] == password:
                return True
            else:
                return False
        else:
            return False
