class Queries:
    # SAVE_DATA = INSERT INTO test.test_table(id, temp, hum, count) VALUES (MD5(NOW(3)), %s, %s, %s);
    SAVE_DEVICE_PACKAGE = "INSERT INTO IcicleSpy3.devices_data (time, temperature, air_humidity, count, bbox, devices_id, cameras_id) VALUES (%s, %s, %s, %s, %s, %s, %s)"