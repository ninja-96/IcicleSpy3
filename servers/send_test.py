import requests
import pickle

test = {'test': 1}
data = pickle.dumps(test)
files = {'file': data}

r = requests.post('http://127.0.0.1:8000/save_data_from_device/dev_test', files=files)

print(r)
print(r.status_code)
print(r.text)