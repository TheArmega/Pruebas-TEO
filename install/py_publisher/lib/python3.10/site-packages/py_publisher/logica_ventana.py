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
        self.sendPositionRighArm_button.clicked.connect(self.onClick)
        self.show()

    def onClick(self):
        FrontalRightShoulder_position   = self.FrontalRightShoulderPosition_textBox.text()
        SagittalRightShoulder_position  = self.SagittalRightShoulderPosition_textBox.text()
        AxialRightShoulder_position     = self.AxialRightShoulderPosition_textBox.text()
        FrontalRightElbow_position      = self.FrontalRightElbowPosition_textBox.text()
        AxialRightWrist_position        = self.AxialRightWristPosition_textBox.text()
        FrontalRightWrist_position      = self.FrontalRightWristPosition_textBox.text()

        rightArmPositions = [FrontalRightShoulder_position,
                             SagittalRightShoulder_position,
                             AxialRightShoulder_position,
                             FrontalRightElbow_position,
                             AxialRightWrist_position,
                             FrontalRightWrist_position
                             ]

        FrontalRightShoulder_speed   = self.FrontalRightShoulderSpeed_textBox.text()
        SagittalRightShoulder_speed  = self.SagittalRightShoulderSpeed_textBox.text()
        AxialRightShoulder_speed     = self.AxialRightShoulderSpeed_textBox.text()
        FrontalRightElbow_speed      = self.FrontalRightElbowSpeed_textBox.text()
        AxialRightWrist_speed        = self.AxialRightWristSpeed_textBox.text()
        FrontalRightWrist_speed      = self.FrontalRightWristSpeed_textBox.text()

        rightArmSpeeds = [FrontalRightShoulder_speed,
                             SagittalRightShoulder_speed,
                             AxialRightShoulder_speed,
                             FrontalRightElbow_speed,
                             AxialRightWrist_speed,
                             FrontalRightWrist_speed
                             ]

        FrontalLeftShoulder_position   = self.FrontalLeftShoulderPosition_textBox.text()
        SagittalLeftShoulder_position  = self.SagittalLeftShoulderPosition_textBox.text()
        AxialLeftShoulder_position     = self.AxialLeftShoulderPosition_textBox.text()
        FrontalLeftElbow_position      = self.FrontalLeftElbowPosition_textBox.text()
        AxialLeftWrist_position        = self.AxialLeftWristPosition_textBox.text()
        FrontalLeftWrist_position      = self.FrontalLeftWristPosition_textBox.text()

        FrontalLeftShoulder_speed   = self.FrontalLeftShoulderSpeed_textBox.text()
        SagittalLeftShoulder_speed  = self.SagittalLeftShoulderSpeed_textBox.text()
        AxialLeftShoulder_speed     = self.AxialLeftShoulderSpeed_textBox.text()
        FrontalLeftElbow_speed      = self.FrontalLeftElbowSpeed_textBox.text()
        AxialLeftWrist_speed        = self.AxialLeftWristSpeed_textBox.text()
        FrontalLeftWrist_speed      = self.FrontalLeftWristSpeed_textBox.text()


        self.subscriber.publishRightArmPosition(
            rightArmPositions,
            rightArmSpeeds
        )
        '''
        self.subscriber.prueba(
            rightArmPositions,
            FrontalRightShoulder_speed,
            SagittalRightShoulder_speed,
            AxialRightShoulder_speed, 
            FrontalRightElbow_speed,  
            AxialRightWrist_speed,   
            FrontalRightWrist_speed,
            FrontalLeftShoulder_position,
            SagittalLeftShoulder_position,
            AxialLeftShoulder_position,
            FrontalLeftElbow_position,  
            AxialLeftWrist_position,   
            FrontalLeftWrist_position,     
            FrontalLeftShoulder_speed,
            SagittalLeftShoulder_speed,
            AxialLeftShoulder_speed,
            FrontalLeftElbow_speed,  
            AxialLeftWrist_speed,   
            FrontalLeftWrist_speed 
        )
        '''

        self.cleanPositionTextBox()

    def cleanPositionTextBox(self):
        self.FrontalRightShoulderPosition_textBox.clear()
        self.SagittalRightShoulderPosition_textBox.clear()
        self.AxialRightShoulderPosition_textBox.clear()
        self.FrontalRightElbowPosition_textBox.clear()
        self.AxialRightWristPosition_textBox.clear()
        self.FrontalRightWristPosition_textBox.clear()

        self.FrontalRightShoulderSpeed_textBox.clear()
        self.SagittalRightShoulderSpeed_textBox.clear()
        self.AxialRightShoulderSpeed_textBox.clear()
        self.FrontalRightElbowSpeed_textBox.clear()
        self.AxialRightWristSpeed_textBox.clear()
        self.FrontalRightWristSpeed_textBox.clear()

#if __name__ == "__main__":
def main(args=None):
    rclpy.init(args=args)
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()