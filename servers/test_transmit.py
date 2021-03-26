import requests
from requests.auth import HTTPDigestAuth

data = 'test'

r = requests.get('http://localhost:5000', data=data, auth=HTTPDigestAuth('john', 'hello'))

print(r)