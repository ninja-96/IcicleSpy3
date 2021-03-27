from DBConnection import DBConnection
from servers.utils.IcicleSpyPackage import IcicleSpyPackage, IcicleSpyPackageMobile

login = 'test@mail.ru'
password = 'icicle'

db = DBConnection('localhost', 3306, 'iciclespy3_server', 'is_server3_password')

r = db.get_data_by_id(5, ['id', 'count', 'bbox'])
print(r)

# auth = db.auth_check(login, password)
# print(f'Data correct : {auth}')

# isp = IcicleSpyPackage()
# isp.time = '2020-02-20 12:12:12'
# isp.temperature = -22
# isp.air_humidity = 53
# isp.count = 1
# isp.bbox = '[]'
# isp.img = bytes([3])
# isp.device_id = 3
# isp.camera_id = 4
#
#
# r = db.save_device_package(isp)
# print(r)

# db.save_device_package(isp)
#
# ispm = IcicleSpyPackageMobile()
# ispm.time = '2020-02-20 12:12:12'
# ispm.count = 1
# ispm.bbox = '[]'
# ispm.img = bytes([0])
# ispm.latitude = 0.0
# ispm.longitude = 0.0
# ispm.users_id = 1
#
# db.save_mobile_package(ispm)
