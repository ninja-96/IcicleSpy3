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
                 device_token: str = None,
                 camera_token: str = None):

        self.time = time
        self.temperature = temperature
        self.air_humidity = air_humidity
        self.count = count
        self.bbox = bbox
        self.img = img
        self.device_token = device_token
        self.camera_token = camera_token


class IcicleSpyPackageMobile:
    pass

# class IcicleSpyPackageMobile:
#     def __init__(self,
#                  time: datetime = None,
#                  count: int = None,
#                  bbox: list = None,
#                  img: Union[bytes, bytearray] = None,
#                  latitude: float = None,
#                  longitude: float = None,
#                  users_id: int = None):
#
#         self.time = time
#         self.count = count
#         self.bbox = bbox
#         self.img = img
#         self.latitude = latitude
#         self.longitude = longitude
#         self.users_id = users_id
