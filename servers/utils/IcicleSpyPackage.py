from datetime import datetime
from typing import Union


class IcicleSpyPackage:
    def __init__(self,
                 time: datetime = None,
                 temperature: float = None,
                 air_humidity: float = None,
                 count: int = None,
                 bbox: list = None,
                 img: Union[bytes, bytearray] = None,
                 device_id: int = None,
                 camera_id: int = None):

        self.time = time
        self.temperature = temperature
        self.air_humidity = air_humidity
        self.count = count
        self.bbox = bbox
        self.img = img
        self.device_id = device_id
        self.camera_id = camera_id


class IcicleSpyPackageMobile:
    def __init__(self,
                 time: datetime = None,
                 count: int = None,
                 bbox: list = None,
                 img: Union[bytes, bytearray] = None,
                 latitude: float = None,
                 longitude: float = None,
                 device_id: int = None,
                 camera_id: int = None):

        self.time = time
        self.count = count
        self.bbox = bbox
        self.img = img
        self.latitude = latitude
        self.longitude = longitude
        self.device_id = device_id
        self.camera_id = camera_id
