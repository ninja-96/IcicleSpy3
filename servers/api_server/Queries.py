class Queries:
    # SAVE_DATA = INSERT INTO test.test_table(id, temp, hum, count) VALUES (MD5(NOW(3)), %s, %s, %s);
    AUTH_CHECK = "SELECT EXISTS(SELECT 1 FROM IcicleSpy3.users WHERE (IcicleSpy3.users.login = %s AND IcicleSpy3.users.password = %s))"

    DEVICE_RECORD_ID = "SELECT T.id FROM IcicleSpy3.devices_data AS T WHERE (T.devices_id = %s AND T.cameras_id = %s)"
    SAVE_DEVICE_PACKAGE = "INSERT INTO IcicleSpy3.devices_data (time, temperature, air_humidity, count, bbox, img, devices_id, cameras_id) VALUES (%s, %s, %s, %s, %s, %s, %s, %s)"
    UPDATE_DEVICE_RECORD = "UPDATE IcicleSpy3.devices_data SET time = %s, temperature = %s, air_humidity = %s, count = %s, bbox = %s, img = %s WHERE (id = %s AND devices_id = %s AND cameras_id = %s)"

    SAVE_MOBILE_PACKAGE = "INSERT INTO IcicleSpy3.users_data (time, count, bbox, coordinates, devices_id, cameras_id) VALUES (%s, %s, %s, POINT(%s, %s), %s, %s)"