import cv2
import numpy as np


class YoloObjectDetection:
    def __init__(self, weights, cfg, size=416, device='cpu'):
        self.detector = cv2.dnn.readNet(weights, cfg)

        if device is 'cpu':
            self.detector.setPreferableBackend(cv2.dnn.DNN_BACKEND_DEFAULT)
            self.detector.setPreferableTarget(cv2.dnn.DNN_TARGET_CPU)
        elif device is 'cuda':
            self.detector.setPreferableBackend(cv2.dnn.DNN_BACKEND_CUDA)
            self.detector.setPreferableTarget(cv2.dnn.DNN_TARGET_CUDA_FP16)

        self.scale = float(1 / 255)
        self.size = size

        layer_names = self.detector.getLayerNames()
        self.output_layers = [layer_names[i[0] - 1] for i in self.detector.getUnconnectedOutLayers()]

    def __call__(self, image, threshold=0.5, nms_threshold=0.15):
        height, width, _ = image.shape
        blob = cv2.dnn.blobFromImage(image, self.scale,
                                     (self.size, self.size),
                                     (0, 0, 0), True, crop=False)

        self.detector.setInput(blob)
        results = self.detector.forward(self.output_layers)

        return self.decode(results, height, width, threshold, nms_threshold)

    def decode(self, results, height, width, threshold, nms_threshold):
        boxes = []
        classes = []
        scores = []

        for result in results:
            raw_box_threshold = result[:, 5:] > threshold
            ro, co = np.where(raw_box_threshold == True)
            ro = np.unique(ro)
            raw_data = result[ro]

            for data in raw_data:
                class_scores = data[5:]
                cls = np.argmax(class_scores)
                score = class_scores[cls]

                x = int(data[0] * width)
                y = int(data[1] * height)
                w = int(data[2] * width)
                h = int(data[3] * height)

                x_min = int(x - (w / 2))
                y_min = int(y - (h / 2))
                x_max = int(x + (w / 2))
                y_max = int(y + (h / 2))

                boxes.append([x_min, y_min, x_max, y_max])
                classes.append(cls)
                scores.append(float(score))

        if len(boxes):
            idx = cv2.dnn.NMSBoxes(boxes, scores, threshold, nms_threshold)
            if len(idx):
                idx = idx.flatten()
                boxes = np.array(boxes)[idx]
                classes = np.array(classes)[idx]
                scores = np.array(scores)[idx]

                return boxes, classes, scores
            else:
                return np.array([]), np.array([]), np.array([])
        else:
            return np.array([]), np.array([]), np.array([])