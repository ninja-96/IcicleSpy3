import datetime

from influxdb_client import InfluxDBClient, Point
from influxdb_client.client.write_api import SYNCHRONOUS


class Influx:
    def __init__(self, host, token, org, bucket=None):
        self.__bucket = org if bucket is None else bucket

        self.__client = InfluxDBClient(url=host, token=token, org=org)
        self.__write_api = self.__client.write_api(write_options=SYNCHRONOUS)

    def __date_check(self, data: str) -> bool:
        try:
            datetime.datetime.strptime(data, '%d/%m/%Y %H:%M:%S')
            return True
        except ValueError:
            return False

    def save_device_package(self,
                            device_token: str,
                            country: str,
                            region_state: str,
                            city: str,
                            street: str,
                            building: str,
                            index: str,
                            temperature: float,
                            air_humidity: float) -> bool:

        p_temperature = Point.measurement("temperature")
        p_temperature.tag("device_token", device_token)
        p_temperature.tag("country", country)
        p_temperature.tag("region_state", region_state)
        p_temperature.tag("city", city)
        p_temperature.tag("street", street)
        p_temperature.tag("building", building)
        p_temperature.tag("index", index)
        p_temperature.field("c", temperature)
        self.__write_api.write(bucket=self.__bucket, record=p_temperature)

        p_air_humidity = Point.measurement("air_humidity")
        p_air_humidity.tag("device_token", device_token)
        p_air_humidity.tag("country", country)
        p_air_humidity.tag("region_state", region_state)
        p_air_humidity.tag("city", city)
        p_air_humidity.tag("street", street)
        p_air_humidity.tag("building", building)
        p_air_humidity.tag("index", index)
        p_air_humidity.field("percentage", air_humidity)
        self.__write_api.write(bucket=self.__bucket, record=p_air_humidity)

        return True

    def get_temperature(self, start: str, end: str):
        check = self.__date_check(start)
        check &= self.__date_check(end)

        if check:
            pass
        else:
            return False
