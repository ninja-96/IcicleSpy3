from typing import Union, Optional
import cv2
import numpy as np

import threading


class RTSPCap:
    def __init__(self,
                 source: Union[str, int],
                 raw_source: bool = False,
                 width: Optional[int] = None,
                 height: Optional[int] = None):

        if raw_source:
            self.__cap = cv2.VideoCapture(source)
        else:
            raise Exception('Support only raw source')
            # self.__cap = cv2.VideoCapture()

        self.__frame = np.zeros((480, 640, 3), dtype=np.uint8)
        self.__running = False
        self.__thread = threading.Thread(target=self.__read)

    def read(self):
        return self.__frame

    def start(self):
        self.__running = True
        self.__thread.start()

    def stop(self):
        self.__running = False
        self.__thread.join()

    def __read(self):
        while self.__running:
            ret, frame = self.__cap.read()
            if ret:
                self.__frame = frame


if __name__ == '__main__':
    cap = RTSPCap(0, raw_source=True)
    cap.start()

    while True:
        frame = cap.read()

        cv2.imshow('frame', frame)
        k = cv2.waitKey(1)
        if k == 113:
            break
    cap.stop()
