import json
import argparse

import time

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
            frame = cam.read()
            print(f'{cam.source} - ok')

        time.sleep(60 * cfg['d_time'])
