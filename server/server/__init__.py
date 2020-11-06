from flask import Flask
import redis
from rq import Queue
from flask_httpauth import HTTPDigestAuth

app = Flask(__name__)
app.config['SECRET_KEY'] = 'secret key here'
auth = HTTPDigestAuth()
r = redis.Redis(db=0)
q = Queue(connection=r)

users = {
    "john": "hello",
    "susan": "bye"
}


@auth.get_password
def get_pw(username):
    print('auth', username)
    if username in users:
        return users.get(username)
    return None


from server.server import receive_handler
from server.server import tasks
