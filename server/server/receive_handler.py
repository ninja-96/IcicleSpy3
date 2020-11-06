from server.server import app
from server.server import auth

from flask import request

from server.server import q
from server.server.tasks import task
import random


@app.route('/', methods=["GET", "POST"])
@auth.login_required
def add_task():
    # data = request.data
    # print(data)
    # return 'OK'
    job = q.enqueue(task, (random.randint(0, 10), ))
    return f'{job.id}, {len(q)}'
