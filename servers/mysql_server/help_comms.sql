SET GLOBAL event_scheduler = ON;

-- DROP EVENT RowTTL;
SHOW EVENTS;
SHOW PROCESSLIST;

UPDATE IcicleSpy3.addresses SET IcicleSpy3.addresses.point = POINT(20, 20) WHERE id = 3;
SELECT X(point), Y(point) FROM addresses WHERE id = 3;
