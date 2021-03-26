-- RUNCATE TABLE `IcicleSpy3`.`addresses`;

--  Taganskaya
INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.73981389011555, 37.665907144546516), 'Russia', 'Moscow', 'Moscow', 'Taganskaya', '25-27', '1');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`) 
VALUES (POINT(55.73969007364334, 37.66753387451172), 'Russia', 'Moscow', 'Moscow', 'Taganskaya', '29c1', '1');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.73939110054219, 37.66586422920228), 'Russia', 'Moscow', 'Moscow', 'Taganskaya', '34c1', '1');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.73934580138767, 37.66638457775117), 'Russia', 'Moscow', 'Moscow', 'Taganskaya', '36c1', '1');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.739312581974275, 37.66676545143128), 'Russia', 'Moscow', 'Moscow', 'Taganskaya', '38c1', '1');


-- Prospekt Mira
INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.774696359636295, 37.631961107254035), 'Russia', 'Moscow', 'Moscow', 'Prospekt Mira', '5', '2');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.77502825125138, 37.631939649581916), 'Russia', 'Moscow', 'Moscow', 'Prospekt Mira', '7', '2');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.77549892905928, 37.6318645477295), 'Russia', 'Moscow', 'Moscow', 'Prospekt Mira', '9', '2');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.77581271110671, 37.63138175010682), 'Russia', 'Moscow', 'Moscow', 'Prospekt Mira', '11', '2');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.775354105723814, 37.63283014297486), 'Russia', 'Moscow', 'Moscow', 'Prospekt Mira', '16c1', '2');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.77566185466846, 37.63266921043397), 'Russia', 'Moscow', 'Moscow', 'Prospekt Mira', '16c2', '2');

INSERT INTO `IcicleSpy3`.`addresses` (`coordinates`, `country`, `region_state`, `city`, `street`, `building`, `index`)
VALUES (POINT(55.77611442223143, 37.63265848159791), 'Russia', 'Moscow', 'Moscow', 'Prospekt Mira', '20k1', '2');

-- Add devices
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV1', '3');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV2', '4');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV3', '5');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV4', '1');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV5', '2');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV6', '9');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV7', '8');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV8', '7');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV9', '6');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV10', '12');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV11', '10');
INSERT INTO `IcicleSpy3`.`devices` (`token`, `addresses_id`) VALUES ('DEV12', '11');

-- Add cameras
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM1', '1', '1');
-- INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM2', '1', '1');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM2', '1', '2');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM3', '1', '3');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM4', '2', '3');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM5', '3', '4');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM6', '4', '4');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM7', '5', '5');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM8', '10', '6');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM9', '12', '6');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM10', '10', '7');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM11', '11', '7');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM12', '11', '8');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM13', '9', '10');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM14', '8', '11');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM15', '9', '11');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM16', '6', '12');
INSERT INTO `IcicleSpy3`.`cameras` (`token`, `addresses_id`, `devices_id`) VALUES ('CAM17', '7', '12');


-- Add users
-- password: qwerty
INSERT INTO `IcicleSpy3`.`users` (`login`, `password`, `first_name`, `last_name`, `company`) VALUES ('FrederickLMedina@armyspy.com ', 'd8578edf8458ce06fbc5bb76a58c5ca4', 'Frederick', 'Medina', 'Intel');
-- password: QWERTY
INSERT INTO `IcicleSpy3`.`users` (`login`, `password`, `first_name`, `last_name`, `company`) VALUES ('CarmenFTalbott@teleworm.us ', 'c3981fa8d26e95d911fe8eaeb6570f2f', 'Carmen', 'Talbott', 'Tesla');
-- password: icicle
INSERT INTO `IcicleSpy3`.`users` (`login`, `password`, `first_name`, `last_name`, `company`) VALUES ('test@mail.ru', '390b9d5a0b69278a88df6b20792532b5', 'test3', 'test3', 'test3');
