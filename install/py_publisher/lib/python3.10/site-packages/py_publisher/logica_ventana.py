from .ventana_ui import *
from PyQt5.QtWidgets import QMainWindow, QApplication, QWidget, QPushButton, QAction, QLineEdit, QMessageBox, QSlider

import rclpy

from .subscriber_member_function import MinimalSubscriber

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.subscriber = MinimalSubscriber()
        self.initUI()
        self.onClick()
        self.cleanPositionTextBox()
        

    def initUI(self):
        self.sendPosition_button.clicked.connect(self.onClick)
        self.show()

    def onClick(self):
        FrontalRightShoulder_position   = self.FrontalRightShoulder_textBox.text()
        SagittalRightShoulder_position  = self.SagittalRightShoulder_textBox.text()
        AxialRightShoulder_position     = self.AxialRightShoulder_textBox.text()
        FrontalRightElbow_position      = self.FrontalRightElbow_textBox.text()
        AxialRightWrist_position        = self.AxialRightWrist_textBox.text()
        FrontalRightWrist_position      = self.FrontalRightWrist_textBox.text()

        
        self.subscriber.prueba(
            FrontalRightShoulder_position,
            SagittalRightShoulder_position,
            AxialRightShoulder_position,
            FrontalRightElbow_position,
            AxialRightWrist_position,
            FrontalRightWrist_position
        )

        self.cleanPositionTextBox()

    def cleanPositionTextBox(self):
        self.FrontalRightShoulder_textBox.clear()
        self.SagittalRightShoulder_textBox.clear()
        self.AxialRightShoulder_textBox.clear()
        self.FrontalRightElbow_textBox.clear()
        self.AxialRightWrist_textBox.clear()
        self.FrontalRightWrist_textBox.clear()

#if __name__ == "__main__":
def main(args=None):
    rclpy.init(args=args)
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()