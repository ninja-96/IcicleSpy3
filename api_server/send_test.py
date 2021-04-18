import requests
from requests.auth import HTTPBasicAuth
import pickle

import datetime

from classes.IcicleSpyPackage import IcicleSpyPackage

header = {'token': 'DEV1'}

r = requests.get('http://127.0.0.1:8000/get_icicle_count', auth=HTTPBasicAuth('login', 'password'), headers=header)
print(r)
print(r.text)

# test = IcicleSpyPackage()
# test.time = datetime.datetime.now()
# test.device_token = 'DEV1'
# test.camera_token = 'CAM1'
# data = pickle.dumps(test)
# files = {'data': data}
#
# r = requests.post('http://127.0.0.1:8000/save_data_from_device', files=files, auth=HTTPBasicAuth('login', 'password'))
#
# print(r)
# print(r.status_code)
# print(r.text)
