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
        self.onClickRightArm_button()
        self.onClickLeftArm_button()
        self.cleanRightArmTextBox()
        self.cleanLeftArmTextBox()
        self.headPositionTexBoxes = []
        self.headSpeedsTexBoxes = []
        self.rightArmPositionTexBoxes = []
        self.rightArmSpeedTexBoxes = []
        self.leftArmPositionTexBoxes = []
        self.leftArmSpeedTexBoxes = []
        self.trunkPositionTexBoxes = []
        self.trunkSpeedTexBoxes = []
        self.rightPositionLegTexBoxes = []
        self.rightSpeedLegTexBoxes = []
        self.leftLegPositionTexBoxes = []
        self.leftLegSpeedTexBoxes = []
        

    def initUI(self):
        self.sendPositionRightArm_button.clicked.connect(self.onClickRightArm_button)
        self.sendPositionLeftArm_button.clicked.connect(self.onClickLeftArm_button)
        self.show()

    def onClickRightArm_button(self):
        
        rightArmArticulations = [
            'FrontalRightShoulder', 
            'SagittalRightShoulder',
            'AxialRightShoulder',
            'FrontalRightElbow',  
            'AxialRightWrist',   
            'FrontalRightWrist'    
        ]

        FrontalRightShoulder_position   = self.FrontalRightShoulderPosition_textBox.text()
        SagittalRightShoulder_position  = self.SagittalRightShoulderPosition_textBox.text()
        AxialRightShoulder_position     = self.AxialRightShoulderPosition_textBox.text()
        FrontalRightElbow_position      = self.FrontalRightElbowPosition_textBox.text()
        AxialRightWrist_position        = self.AxialRightWristPosition_textBox.text()
        FrontalRightWrist_position      = self.FrontalRightWristPosition_textBox.text()

        rightArmPositions = [
                             FrontalRightShoulder_position,
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

        rightArmSpeeds = [
                         FrontalRightShoulder_speed,
                         SagittalRightShoulder_speed,
                         AxialRightShoulder_speed,
                         FrontalRightElbow_speed,
                         AxialRightWrist_speed,
                         FrontalRightWrist_speed
        ]
        
        self.rightArmPositionTexBoxes = [
            self.FrontalRightShoulderPosition_textBox,
            self.SagittalRightShoulderPosition_textBox,
            self.AxialRightShoulderPosition_textBox,
            self.FrontalRightElbowPosition_textBox,
            self.AxialRightWristPosition_textBox,
            self.FrontalRightWristPosition_textBox
        ]

        self.rightArmSpeedTexBoxes = [
            self.FrontalRightShoulderSpeed_textBox,
            self.SagittalRightShoulderSpeed_textBox,
            self.AxialRightShoulderSpeed_textBox,
            self.FrontalRightElbowSpeed_textBox,
            self.AxialRightWristSpeed_textBox,
            self.FrontalRightWristSpeed_textBox
        ]
        
        self.subscriber.publishArmPosition(
            rightArmArticulations,
            rightArmPositions,
            rightArmSpeeds,
            'right'
        )

        self.cleanRightArmTextBox()
        
    def onClickLeftArm_button(self):

        leftArmArticulations = [
            'FrontalLeftShoulder', 
            'SagittalLeftShoulder',
            'AxialLeftShoulder',
            'FrontalLeftElbow',  
            'AxialLeftWrist',   
            'FrontalLeftWrist'    
        ]

        FrontalLeftShoulder_position   = self.FrontalLeftShoulderPosition_textBox.text()
        SagittalLeftShoulder_position  = self.SagittalLeftShoulderPosition_textBox.text()
        AxialLeftShoulder_position     = self.AxialLeftShoulderPosition_textBox.text()
        FrontalLeftElbow_position      = self.FrontalLeftElbowPosition_textBox.text()
        AxialLeftWrist_position        = self.AxialLeftWristPosition_textBox.text()
        FrontalLeftWrist_position      = self.FrontalLeftWristPosition_textBox.text()

        leftArmPositions = [FrontalLeftShoulder_position,
                             SagittalLeftShoulder_position,
                             AxialLeftShoulder_position,
                             FrontalLeftElbow_position,
                             AxialLeftWrist_position,
                             FrontalLeftWrist_position
                             ]

        FrontalLeftShoulder_speed   = self.FrontalLeftShoulderSpeed_textBox.text()
        SagittalLeftShoulder_speed  = self.SagittalLeftShoulderSpeed_textBox.text()
        AxialLeftShoulder_speed     = self.AxialLeftShoulderSpeed_textBox.text()
        FrontalLeftElbow_speed      = self.FrontalLeftElbowSpeed_textBox.text()
        AxialLeftWrist_speed        = self.AxialLeftWristSpeed_textBox.text()
        FrontalLeftWrist_speed      = self.FrontalLeftWristSpeed_textBox.text()

        leftArmSpeeds = [FrontalLeftShoulder_speed,
                         SagittalLeftShoulder_speed,
                         AxialLeftShoulder_speed,
                         FrontalLeftElbow_speed,
                         AxialLeftWrist_speed,
                         FrontalLeftWrist_speed
                         ]

        self.leftArmPositionTexBoxes = [
            self.FrontalLeftShoulderPosition_textBox,
            self.SagittalLeftShoulderPosition_textBox,
            self.AxialLeftShoulderPosition_textBox,
            self.FrontalLeftElbowPosition_textBox,
            self.AxialLeftWristPosition_textBox,
            self.FrontalLeftWristPosition_textBox
        ]

        self.leftArmSpeedTexBoxes = [
            self.FrontalLeftShoulderSpeed_textBox,
            self.SagittalLeftShoulderSpeed_textBox,
            self.AxialLeftShoulderSpeed_textBox,
            self.FrontalLeftElbowSpeed_textBox,
            self.AxialLeftWristSpeed_textBox,
            self.FrontalLeftWristSpeed_textBox
        ]

        self.subscriber.publishArmPosition(
            leftArmArticulations,
            leftArmPositions,
            leftArmSpeeds,
            'left'
        )

        self.cleanLeftArmTextBox()

    def cleanRightArmTextBox(self):

        for i in self.rightArmPositionTexBoxes:
            i.clear()

        for i in self.rightArmSpeedTexBoxes:
            i.clear()
        
    def cleanLeftArmTextBox(self):

        for i in self.leftArmPositionTexBoxes:
            i.clear()

        for i in self.leftArmSpeedTexBoxes:
            i.clear()      
        
def main(args=None):
    rclpy.init(args=args)
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()