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
        self.onClickNeck_button()
        self.onClickRightArm_button()
        self.onClickLeftArm_button()
        self.onClickTrunk_button()
        self.onClickRightLeg_button()
        self.onClickLeftLeg_button()
        #self.cleanTextBox(positionTextBoxes, speedTextBoxes)
        self.neckPositionTextBoxes = []
        self.neckSpeedsTextBoxes = []
        self.rightArmPositionTextBoxes = []
        self.rightArmSpeedTextBoxes = []
        self.leftArmPositionTextBoxes = []
        self.leftArmSpeedTextBoxes = []
        self.trunkPositionTextBoxes = []
        self.trunkSpeedTextBoxes = []
        self.rightPositionLegTextBoxes = []
        self.rightSpeedLegTextBoxes = []
        self.leftLegPositionTextBoxes = []
        self.leftLegSpeedTextBoxes = []

    def initUI(self):
        self.sendPositionNeck_button.clicked.connect(self.onClickNeck_button)
        self.sendPositionRightArm_button.clicked.connect(self.onClickRightArm_button)
        self.sendPositionLeftArm_button.clicked.connect(self.onClickLeftArm_button)
        self.sendPositionTrunk_button.clicked.connect(self.onClickTrunk_button)
        self.sendPositionRightLeg_button.clicked.connect(self.onClickRightLeg_button)
        self.sendPositionLeftLeg_button.clicked.connect(self.onClickLeftLeg_button)
        self.show()

    def onClickNeck_button(self):

        neckArticulations = [
            'AxialNeck',
            'FrontalNeck'
        ]

        neckPositionTextBoxes = [
            self.AxialNeckPosition_textBox,
            self.FrontalNeckPosition_textBox
        ]        

        neckSpeedsTextBoxes = [
            self.AxialNeckSpeed_textBox,
            self.FrontalNeckSpeed_textBox
        ]        

        AxialNeck_position = self.AxialNeckPosition_textBox.text()
        FrontalNeck_position = self.FrontalNeckPosition_textBox.text()

        neckPositions = [
            AxialNeck_position,
            FrontalNeck_position
        ]

        AxialNeck_speed   = self.AxialNeckSpeed_textBox.text()
        FrontalNeck_speed = self.FrontalNeckSpeed_textBox.text()

        neckSpeeds = [
            AxialNeck_speed,
            FrontalNeck_speed
        ]

        self.subscriber.publishPosition(
            neckArticulations,
            neckPositions,
            neckSpeeds,
            'neck'
        )

        self.cleanTextBox(neckPositionTextBoxes, neckSpeedsTextBoxes)
   
    def onClickRightArm_button(self):

        rightArmArticulations = [
            'FrontalRightShoulder', 
            'SagittalRightShoulder',
            'AxialRightShoulder',
            'FrontalRightElbow',  
            'AxialRightWrist',   
            'FrontalRightWrist'    
        ]

        rightArmPositionTextBoxes = [
            self.FrontalRightShoulderPosition_textBox,
            self.SagittalRightShoulderPosition_textBox,
            self.AxialRightShoulderPosition_textBox,
            self.FrontalRightElbowPosition_textBox,
            self.AxialRightWristPosition_textBox,
            self.FrontalRightWristPosition_textBox
        ]

        rightArmSpeedTextBoxes = [
            self.FrontalRightShoulderSpeed_textBox,
            self.SagittalRightShoulderSpeed_textBox,
            self.AxialRightShoulderSpeed_textBox,
            self.FrontalRightElbowSpeed_textBox,
            self.AxialRightWristSpeed_textBox,
            self.FrontalRightWristSpeed_textBox
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
           
        self.subscriber.publishPosition(
            rightArmArticulations,
            rightArmPositions,
            rightArmSpeeds,
            'rightArm'
        )

        self.cleanTextBox(rightArmPositionTextBoxes, rightArmSpeedTextBoxes)
        
    def onClickLeftArm_button(self):

        print("HOLA!!!")

        leftArmArticulations = [
            'FrontalLeftShoulder', 
            'SagittalLeftShoulder',
            'AxialLeftShoulder',
            'FrontalLeftElbow',  
            'AxialLeftWrist',   
            'FrontalLeftWrist'    
        ]

        leftArmPositionTextBoxes = [
            self.FrontalLeftShoulderPosition_textBox,
            self.SagittalLeftShoulderPosition_textBox,
            self.AxialLeftShoulderPosition_textBox,
            self.FrontalLeftElbowPosition_textBox,
            self.AxialLeftWristPosition_textBox,
            self.FrontalLeftWristPosition_textBox
        ]

        leftArmSpeedTextBoxes = [
            self.FrontalLeftShoulderSpeed_textBox,
            self.SagittalLeftShoulderSpeed_textBox,
            self.AxialLeftShoulderSpeed_textBox,
            self.FrontalLeftElbowSpeed_textBox,
            self.AxialLeftWristSpeed_textBox,
            self.FrontalLeftWristSpeed_textBox
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

        self.subscriber.publishPosition(
            leftArmArticulations,
            leftArmPositions,
            leftArmSpeeds,
            'leftArm'
        )

        self.cleanTextBox(leftArmPositionTextBoxes, leftArmSpeedTextBoxes)

    def onClickTrunk_button(self):

        trunkArticulations = [
            'AxialTrunk',
            'FrontalTrunk'
        ]

        trunkPositionTextBoxes = [
            self.AxialTrunkPosition_textBox,
            self.FrontalTrunkPosition_textBox
        ]

        trunkSpeedTextBoxes = [
            self.AxialTrunkSpeed_textBox,
            self.FrontalTrunkSpeed_textBox
        ]

        AxialTrunk_position   = self.AxialTrunkPosition_textBox.text() 
        FrontalTrunk_position = self.FrontalTrunkPosition_textBox.text()

        trunkPositions = [
            AxialTrunk_position,
            FrontalTrunk_position
        ]

        AxialTrunk_speed   = self.AxialTrunkSpeed_textBox.text()
        FrontalTrunk_speed = self.FrontalTrunkSpeed_textBox.text()

        trunkSpeeds = [
            AxialTrunk_speed,
            FrontalTrunk_speed
        ]

        self.subscriber.publishPosition(
            trunkArticulations,
            trunkPositions,
            trunkSpeeds,
            'trunk'
        )

        self.cleanTextBox(trunkPositionTextBoxes, trunkSpeedTextBoxes)

    def onClickRightLeg_button(self):

        rightLegArticulations = [
            'AxialRightHip',
            'SagittalRightHip',
            'FrontalRightHip',
            'FrontalRightKnee',
            'FrontalRightAnkle',
            'SagittalRightAnkle'
        ]

        rightLegPositionTextBoxes = [
            self.AxialHipRightLegPosition_textBox,
            self.SagittalHipRightLegPosition_textBox,
            self.FrontalHipRightLegPosition_textBox,
            self.FrontalKneeRightLegPosition_textBox,
            self.FrontalAnkleRightLegPosition_textBox,
            self.SagittalAnkleRightLegPosition_textBox
        ]

        rightLegSpeedTextBoxes = [
            self.AxialHipRightLegSpeed_textBox,
            self.SagittalHipRightLegSpeed_textBox,
            self.FrontalHipRightLegSpeed_textBox,
            self.FrontalKneeRightLegSpeed_textBox,
            self.FrontalAnkleRightLegSpeed_textBox,
            self.SagittalAnkleRightLegSpeed_textBox
        ]

        AxialHip_position      = self.AxialHipRightLegPosition_textBox.text()
        SagittalHip_position   = self.SagittalHipRightLegPosition_textBox.text()
        FrontalHip_position    = self.FrontalHipRightLegPosition_textBox.text()
        FrontalKnee_position   = self.FrontalKneeRightLegPosition_textBox.text()
        FrontalAnkle_position  = self.FrontalAnkleRightLegPosition_textBox.text()
        SagittalAnkle_position = self.SagittalAnkleRightLegPosition_textBox.text()

        rightLegPositions = [
            AxialHip_position,
            SagittalHip_position,
            FrontalHip_position,
            FrontalKnee_position,
            FrontalAnkle_position,
            SagittalAnkle_position
        ]

        AxialHip_speed      = self.AxialHipRightLegSpeed_textBox.text()
        SagittalHip_speed   = self.SagittalHipRightLegSpeed_textBox.text()
        FrontalHip_speed    = self.FrontalHipRightLegSpeed_textBox.text()
        FrontalKnee_speed   = self.FrontalKneeRightLegSpeed_textBox.text()
        FrontalAnkle_speed  = self.FrontalAnkleRightLegSpeed_textBox.text()
        SagittalAnkle_speed = self.SagittalAnkleRightLegSpeed_textBox.text()

        rightLegSpeeds = [
            AxialHip_speed,
            SagittalHip_speed,
            FrontalHip_speed,
            FrontalKnee_speed,
            FrontalAnkle_speed,
            SagittalAnkle_speed
        ]

        self.subscriber.publishPosition(
            rightLegArticulations,
            rightLegPositions,
            rightLegSpeeds,
            'rightLeg'
        )

        self.cleanTextBox(rightLegPositionTextBoxes, rightLegSpeedTextBoxes)

    def onClickLeftLeg_button(self):

        leftLegArticulations = [
            'AxialLeftHip',
            'SagittalLeftHip',
            'FrontalLeftHip',
            'FrontalLeftKnee',
            'FrontalLeftAnkle',
            'SagittalLeftAnkle'
        ]

        leftLegPositionTextBoxes = [
            self.AxialHipLeftLegPosition_textBox,
            self.SagittalHipLeftLegPosition_textBox,
            self.FrontalHipLeftLegPosition_textBox,
            self.FrontalKneeLeftLegPosition_textBox,
            self.FrontalAnkleLeftLegPosition_textBox,
            self.SagittalAnkleLeftLegPosition_textBox
        ]

        leftLegSpeedTextBoxes = [
            self.AxialHipLeftLegSpeed_textBox,
            self.SagittalHipLeftLegSpeed_textBox,
            self.FrontalHipLeftLegSpeed_textBox,
            self.FrontalKneeLeftLegSpeed_textBox,
            self.FrontalAnkleLeftLegSpeed_textBox,
            self.SagittalAnkleLeftLegSpeed_textBox
        ]

        AxialHip_position      = self.AxialHipLeftLegPosition_textBox.text()
        SagittalHip_position   = self.SagittalHipLeftLegPosition_textBox.text()
        FrontalHip_position    = self.FrontalHipLeftLegPosition_textBox.text()
        FrontalKnee_position   = self.FrontalKneeLeftLegPosition_textBox.text()
        FrontalAnkle_position  = self.FrontalAnkleLeftLegPosition_textBox.text()
        SagittalAnkle_position = self.SagittalAnkleLeftLegPosition_textBox.text()

        leftLegPositions = [
            AxialHip_position,
            SagittalHip_position,
            FrontalHip_position,
            FrontalKnee_position,
            FrontalAnkle_position,
            SagittalAnkle_position
        ]

        AxialHip_speed      = self.AxialHipLeftLegSpeed_textBox.text()
        SagittalHip_speed   = self.SagittalHipLeftLegSpeed_textBox.text()
        FrontalHip_speed    = self.FrontalHipLeftLegSpeed_textBox.text()
        FrontalKnee_speed   = self.FrontalKneeLeftLegSpeed_textBox.text()
        FrontalAnkle_speed  = self.FrontalAnkleLeftLegSpeed_textBox.text()
        SagittalAnkle_speed = self.SagittalAnkleLeftLegSpeed_textBox.text()

        leftLegSpeeds = [
            AxialHip_speed,
            SagittalHip_speed,
            FrontalHip_speed,
            FrontalKnee_speed,
            FrontalAnkle_speed,
            SagittalAnkle_speed
        ]

        self.subscriber.publishPosition(
            leftLegArticulations,
            leftLegPositions,
            leftLegSpeeds,
            'leftLeg'
        )

        self.cleanTextBox(leftLegPositionTextBoxes, leftLegSpeedTextBoxes)

    def cleanTextBox(self, positionTextBoxes, speedTextBoxes):
        
        for i in positionTextBoxes:
            i.clear()

        for i in speedTextBoxes:
            i.clear()

def main(args=None):
    rclpy.init(args=args)
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()