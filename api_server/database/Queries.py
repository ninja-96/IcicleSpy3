class Queries:
    USER_AUTH_CHECK = "SELECT EXISTS(SELECT 1 FROM IcicleSpy3.users WHERE (IcicleSpy3.users.login = %s AND IcicleSpy3.users.password = %s))"

    DEVICE_IN_DB = "SELECT EXISTS(SELECT 1 FROM IcicleSpy3.devices AS T WHERE T.token = %s)"
    CAMERA_IN_DB = "SELECT EXISTS(SELECT 1 FROM IcicleSpy3.cameras AS T WHERE T.token = %s)"

    DEVICE_ID_BY_TOKEN = "SELECT T.id FROM IcicleSpy3.devices AS T WHERE T.token = %s"
    CAMERA_ID_BY_TOKEN = "SELECT T.id FROM IcicleSpy3.cameras AS T WHERE T.token = %s"

    ASSOCIATE_CHECK = "SELECT IF (((SELECT D.id FROM IcicleSpy3.devices AS D WHERE D.token = %s) = (SELECT C.devices_id FROM IcicleSpy3.cameras AS C WHERE C.token = %s)), 1, 0)"
    DEVICE_RECORD_ID_EXISTS = "SELECT T.id FROM IcicleSpy3.devices_data AS T WHERE (T.devices_id = %s AND T.cameras_id = %s)"
    SAVE_DEVICE_PACKAGE = "INSERT INTO IcicleSpy3.devices_data (time, temperature, air_humidity, count, bbox, img, devices_id, cameras_id) VALUES (%s, %s, %s, %s, %s, %s, %s, %s)"
    UPDATE_DEVICE_RECORD = "UPDATE IcicleSpy3.devices_data SET time = %s, temperature = %s, air_humidity = %s, count = %s, bbox = %s, img = %s WHERE (id = %s AND devices_id = %s AND cameras_id = %s)"

    SAVE_MOBILE_PACKAGE = "INSERT INTO IcicleSpy3.users_data (time, count, bbox, coordinates, users_id) VALUES (%s, %s, %s, POINT(%s, %s), %s)"

    DEVICE_RECORD_ID_BY_DIDX = "SELECT T.id FROM IcicleSpy3.devices_data as T WHERE T.devices_id = %s"
    DEVICE_RECORD_ID_BY_ID = "SELECT %s FROM IcicleSpy3.devices_data as T WHERE T.id = %s"