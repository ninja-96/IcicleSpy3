import datetime

from influxdb_client import InfluxDBClient, Point
from influxdb_client.client.write_api import SYNCHRONOUS


class Influx:
    def __init__(self, host, token, org, bucket=None):
        self.__bucket = org if bucket is None else bucket

        self.__client = InfluxDBClient(url=host, token=token, org=org)
        self.__write_api = self.__client.write_api(write_options=SYNCHRONOUS)
        self.__query_api = self.__client.query_api()

        self.__allowed_fields = ['start_time', 'end_time', 'country', 'region_state', 'city', 'street', 'building', 'index']

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

    def __generate_query(self, request: dict, measurement: str):
        check: bool = True
        for key in request.keys():
            check &= key in self.__allowed_fields

        if check:
            p: dict = {'_start': datetime.datetime.strptime(request['start'], "%d/%m/%Y %H:%M:%S"),
                       '_end': datetime.datetime.strptime(request['end'], "%d/%m/%Y %H:%M:%S"),
                       '_measurement': measurement}

            del request['start']
            del request['end']

            query_tmp: str = f'from(bucket:"{self.__bucket}") |> range(start: _start, stop: _end) |> filter(fn: (r) => r._measurement == _measurement'

            for r_key in request.keys():
                tmp = f"{r_key}"
                p[tmp] = request[r_key]

                query_tmp += f" and r.{tmp} == {tmp}"
            query_tmp += ')'

            return p, query_tmp
        else:
            return {}, ''

    def get_temperature(self, request: dict):
        params, query = self.__generate_query(request, 'temperature')

        if len(params.keys()):
            tables = self.__query_api.query(query, params)

            time_series = {'count': len(tables[0].records), 'records': []}
            for table in tables:
                for record in table.records:
                    tmp = {}
                    tmp['time'] = record['_time'].strftime("%d/%m/%Y %H:%M:%S")

                    tmp['country'] = record['country']
                    tmp['region_state'] = record['region_state']
                    tmp['city'] = record['city']
                    tmp['street'] = record['street']
                    tmp['building'] = record['building']
                    tmp['index'] = record['index']

                    tmp['measurement'] = record['_measurement']
                    tmp['value'] = round(record['_value'], 3)

                    time_series['records'].append(tmp)

            return time_series
        else:
            return {'count': 0, 'records': []}

    def get_air_humidity(self, request: dict):
        params, query = self.__generate_query(request, 'air_humidity')

        if len(params.keys()):
            tables = self.__query_api.query(query, params)

            time_series = {'count': len(tables[0].records), 'records': []}
            for table in tables:
                for record in table.records:
                    tmp = {}
                    tmp['time'] = record['_time'].strftime("%d/%m/%Y %H:%M:%S")

                    tmp['country'] = record['country']
                    tmp['region_state'] = record['region_state']
                    tmp['city'] = record['city']
                    tmp['street'] = record['street']
                    tmp['building'] = record['building']
                    tmp['index'] = record['index']

                    tmp['measurement'] = record['_measurement']
                    tmp['value'] = round(record['_value'], 3)

                    time_series['records'].append(tmp)

            return time_series
        else:
            return {'count': 0, 'records': []}

    # def get_temperature(self, start: str, end: str):
    #     check = self.__date_check(start)
    #     check &= self.__date_check(end)
    #
    #     if check:
    #         p = {"_start": datetime.datetime.strptime(start, "%d/%m/%Y %H:%M:%S"),
    #              '_end': datetime.datetime.strptime(end, "%d/%m/%Y %H:%M:%S"),
    #              '_temperature': 'temperature'}
    #
        #     tables = self.__query_api.query(f'from(bucket:"{self.__bucket}") |> range(start: _start, stop: _end) |> filter(fn: (r) => r._measurement == _temperature)', params=p)
        #
        #     time_series = {'count': len(tables[0].records), 'records': []}
        #
        #     for table in tables:
        #         for record in table.records:
        #             tmp = {}
        #             tmp['time'] = record['_time'].strftime("%d/%m/%Y %H:%M:%S")
        #
        #             tmp['country'] = record['country']
        #             tmp['region_state'] = record['region_state']
        #             tmp['city'] = record['city']
        #             tmp['street'] = record['street']
        #             tmp['building'] = record['building']
        #             tmp['index'] = record['index']
        #
        #             tmp['measurement'] = record['_measurement']
        #             tmp['value'] = round(record['_value'], 3)
        #
        #             time_series['records'].append(tmp)
        #
        #     return time_series
        # else:
        #     return {'count': 0, 'records': []}
