import json
import argparse

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
