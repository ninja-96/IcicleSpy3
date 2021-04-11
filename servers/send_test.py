import requests
import pickle

from classes.IcicleSpyPackage import IcicleSpyPackage

test = IcicleSpyPackage()
# test = {'test': 1}
data = pickle.dumps(test)
files = {'data': data}

r = requests.post('http://127.0.0.1:8000/save_data_from_device/DEV1', files=files)

print(r)
print(r.status_code)
print(r.text)
