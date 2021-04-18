import json
import argparse

import time
import random
from datetime import datetime

import cv2
import numpy as np

from RTSPCap import RTSPCap
from YoloObjectDetection import YoloObjectDetection
from classes.IcicleSpyPackage import IcicleSpyPackage

if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--config', type=str, default='./device_config.json')
    args = parser.parse_args()
    print(args)

    cfg = json.loads(open(args.config, 'r').read())
    print(cfg)

    cameras = []
    for cam in cfg['cameras']:
        cameras.append(RTSPCap(source=cam['source'], raw_source=True))
    for cam in cameras:
        cam.start()

    while True:
        for cam in cameras:
            isp: IcicleSpyPackage = IcicleSpyPackage()

            frame = cam.read()

            isp.time = datetime.now()
            isp.temperature = random.randint(-20, 20) + random.random()
            isp.air_humidity = random.randint(0, 99) + random.random()
            isp.count = random.randint(0, 20)
            isp.bbox = []
            isp.img = cv2.imencode('.jpg', frame)[1]
            isp.device_token = cfg['token']
            isp.camera_token = cam.token

        time.sleep(60 * cfg['d_time'])
