class Queries:
    # SAVE_DATA = INSERT INTO test.test_table(id, temp, hum, count) VALUES (MD5(NOW(3)), %s, %s, %s);
    AUTH_CHECK = "SELECT EXISTS(SELECT 1 FROM IcicleSpy3.users WHERE (IcicleSpy3.users.login = %s AND IcicleSpy3.users.password = %s))"

    SAVE_DEVICE_PACKAGE = "INSERT INTO IcicleSpy3.devices_data (time, temperature, air_humidity, count, bbox, devices_id, cameras_id) VALUES (%s, %s, %s, %s, %s, %s, %s)"
    
    SAVE_MOBILE_PACKAGE = "INSERT INTO IcicleSpy3.users_data (time, count, bbox, coordinates, devices_id, cameras_id) VALUES (%s, %s, %s, POINT(%s, %s), %s, %s)"