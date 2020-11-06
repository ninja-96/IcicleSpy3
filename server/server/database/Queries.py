class Queries:
    SAVE_DATA = 'INSERT INTO test.test_table(id, temp, hum, count) VALUES (MD5(NOW(3)), %s, %s, %s);'

    TEST = 'SELECT X(point), Y(point) FROM addresses WHERE id = 3;'
