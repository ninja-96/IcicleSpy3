class Queries:
    # SAVE_DATA = INSERT INTO test.test_table(id, temp, hum, count) VALUES (MD5(NOW(3)), %s, %s, %s);
    SAVE_DEVICE_PACKAGE = "INSERT INTO IcicleSpy3.devices_data (time, temperature, air_humidity, count, bbox, devices_id, cameras_id) VALUES (%s, %s, %s, %s, %s, %s, %s)"
    
    SAVE_MOBILE_PACKAGE = "INSERT INTO IcicleSpy3.users_data (time, count, bbox, coordinates, devices_id, cameras_id) VALUES (%s, %s, %s, POINT(%s, %s), %s, %s)"