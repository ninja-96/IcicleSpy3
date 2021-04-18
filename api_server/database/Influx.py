from influxdb_client import InfluxDBClient, Point
from influxdb_client.client.write_api import SYNCHRONOUS


class Influx:
    def __init__(self, host, token, org, bucket=None):
        self.__bucket = org if bucket is None else bucket

        self.__client = InfluxDBClient(url=host, token=token, org=org)
        self.__write_api = self.__client.write_api(write_options=SYNCHRONOUS)

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

        p_temperature = Point.measurement("Temperature")
        p_temperature.tag("Device_token", device_token)
        p_temperature.tag("Country", country)
        p_temperature.tag("Region_state", region_state)
        p_temperature.tag("City", city)
        p_temperature.tag("Street", street)
        p_temperature.tag("Building", building)
        p_temperature.tag("Index", index)
        p_temperature.field("C", temperature)
        self.__write_api.write(bucket=self.__bucket, record=p_temperature)

        p_air_humidity = Point.measurement("Air_humidity")
        p_air_humidity.tag("Device_token", device_token)
        p_air_humidity.tag("Country", country)
        p_air_humidity.tag("Region_state", region_state)
        p_air_humidity.tag("City", city)
        p_air_humidity.tag("Street", street)
        p_air_humidity.tag("Building", building)
        p_air_humidity.tag("Index", index)
        p_air_humidity.field("Percentage", air_humidity)
        self.__write_api.write(bucket=self.__bucket, record=p_air_humidity)

        return True
