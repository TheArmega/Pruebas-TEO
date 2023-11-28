
import rclpy

from PyQt5                      import *
from .fullControllerWindow_node import WindowSubscriber
from .fullControllerWindow_ui   import *

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):

    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.initUI()

        self.window_subscriber = WindowSubscriber
    
    def initUI(self):

        self.positionAxialNeck_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialNeck_slider, self.velocityAxialNeck_slider, 'AxialNeck', 'neck'))
        self.velocityAxialNeck_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialNeck_slider, self.velocityAxialNeck_slider, 'AxialNeck', 'neck'))
        self.positionFrontalNeck_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalNeck_slider, self.velocityFrontalNeck_slider, 'FrontalNeck', 'neck'))
        self.velocityFrontalNeck_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalNeck_slider, self.velocityFrontalNeck_slider, 'FrontalNeck', 'neck'))

        self.positionFrontalRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightShoulder_slider, self.velocityFrontalRightShoulder_slider, 'FrontalRightShoulder', 'rightArm'))
        self.velocityFrontalRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightShoulder_slider, self.velocityFrontalRightShoulder_slider, 'FrontalRightShoulder', 'rightArm'))
        self.positionSagittalRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightShoulder_slider, self.velocitySagittalRightShoulder_slider, 'SagittalRightShoulder', 'rightArm'))
        self.velocitySagittalRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightShoulder_slider, self.velocitySagittalRightShoulder_slider, 'SagittalRightShoulder', 'rightArm'))
        self.positionAxialRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightShoulder_slider, self.velocityAxialRightShoulder_slider, 'AxialRightShoulder', 'rightArm'))
        self.velocityAxialRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightShoulder_slider, self.velocityAxialRightShoulder_slider, 'AxialRightShoulder', 'rightArm'))
        self.positionFrontalRightElbow_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightElbow_slider, self.velocityFrontalRightElbow_slider, 'FrontalRightElbow', 'rightArm'))
        self.velocityFrontalRightElbow_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightElbow_slider, self.velocityFrontalRightElbow_slider, 'FrontalRightElbow', 'rightArm'))
        self.positionAxialRightWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightWrist_slider, self.velocityAxialRightWrist_slider, 'AxialRightWrist', 'rightArm'))
        self.velocityAxialRightWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightWrist_slider, self.velocityAxialRightWrist_slider, 'AxialRightWrist', 'rightArm'))
        self.positionFrontalRightWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightWrist_slider, self.velocityFrontalRightWrist_slider, 'FrontalRightWrist', 'rightArm'))
        self.velocityFrontalRightWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightWrist_slider, self.velocityFrontalRightWrist_slider, 'FrontalRightWrist', 'rightArm'))

        self.positionFrontalLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftShoulder_slider, self.velocityFrontalLeftShoulder_slider, 'FrontalLeftShoulder', 'leftArm'))
        self.velocityFrontalLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftShoulder_slider, self.velocityFrontalLeftShoulder_slider, 'FrontalLeftShoulder', 'leftArm'))
        self.positionSagittalLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftShoulder_slider, self.velocitySagittalLeftShoulder_slider, 'SagittalLeftShoulder', 'leftArm'))
        self.velocitySagittalLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftShoulder_slider, self.velocitySagittalLeftShoulder_slider, 'SagittalLeftShoulder', 'leftArm'))
        self.positionAxialLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftShoulder_slider, self.velocityAxialLeftShoulder_slider, 'AxialLeftShoulder', 'leftArm'))
        self.velocityAxialLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftShoulder_slider, self.velocityAxialLeftShoulder_slider, 'AxialLeftShoulder', 'leftArm'))
        self.positionFrontalLeftElbow_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftElbow_slider, self.velocityFrontalLeftElbow_slider, 'FrontalLeftElbow', 'leftArm'))
        self.velocityFrontalLeftElbow_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftElbow_slider, self.velocityFrontalLeftElbow_slider, 'FrontalLeftElbow', 'leftArm'))
        self.positionAxialLeftWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftWrist_slider, self.velocityAxialLeftWrist_slider, 'AxialLeftWrist', 'leftArm'))
        self.velocityAxialLeftWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftWrist_slider, self.velocityAxialLeftWrist_slider, 'AxialLeftWrist', 'leftArm'))
        self.positionFrontalLeftWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftWrist_slider, self.velocityFrontalLeftWrist_slider, 'FrontalLeftWrist', 'leftArm'))
        self.velocityFrontalLeftWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftWrist_slider, self.velocityFrontalLeftWrist_slider, 'FrontalLeftWrist', 'leftArm'))
     
        self.positionAxialTrunk_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialTrunk_slider, self.velocityAxialTrunk_slider, 'AxialTrunk', 'trunk'))
        self.velocityAxialTrunk_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialTrunk_slider, self.velocityAxialTrunk_slider, 'AxialTrunk', 'trunk'))
        self.positionFrontalTrunk_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalTrunk_slider, self.velocityFrontalTrunk_slider, 'FrontalTrunk', 'trunk'))
        self.velocityFrontalTrunk_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalTrunk_slider, self.velocityFrontalTrunk_slider, 'FrontalTrunk', 'trunk'))

        self.positionAxialRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightHip_slider, self.velocityAxialRightHip_slider, 'AxialRightHip', 'rightLeg'))
        self.velocityAxialRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightHip_slider, self.velocityAxialRightHip_slider, 'AxialRightHip', 'rightLeg'))
        self.positionSagittalRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightHip_slider, self.velocitySagittalRightHip_slider, 'SagittalRightHip', 'rightLeg'))
        self.velocitySagittalRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightHip_slider, self.velocitySagittalRightHip_slider, 'SagittalRightHip', 'rightLeg'))
        self.positionFrontalRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightHip_slider, self.velocityFrontalRightHip_slider, 'FrontalRightHip', 'rightLeg'))
        self.velocityFrontalRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightHip_slider, self.velocityFrontalRightHip_slider, 'FrontalRightHip', 'rightLeg'))
        self.positionFrontalRightKnee_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightKnee_slider, self.velocityFrontalRightKnee_slider, 'FrontalRightKnee', 'rightLeg'))
        self.velocityFrontalRightKnee_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightKnee_slider, self.velocityFrontalRightKnee_slider, 'FrontalRightKnee', 'rightLeg'))
        self.positionFrontalRightAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightAnkle_slider, self.velocityFrontalRightAnkle_slider, 'FrontalRightAnkle', 'rightLeg'))
        self.velocityFrontalRightAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightAnkle_slider, self.velocityFrontalRightAnkle_slider, 'FrontalRightAnkle', 'rightLeg'))
        self.positionSagittalRightAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightAnkle_slider, self.velocitySagittalRightAnkle_slider, 'SagittalRightAnkle', 'rightLeg'))
        self.velocitySagittalRightAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightAnkle_slider, self.velocitySagittalRightAnkle_slider, 'SagittalRightAnkle', 'rightLeg'))

        self.positionAxialLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftHip_slider, self.velocityAxialLeftHip_slider, 'AxialLeftHip', 'leftLeg'))
        self.velocityAxialLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftHip_slider, self.velocityAxialLeftHip_slider, 'AxialLeftHip', 'leftLeg'))
        self.positionSagittalLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftHip_slider, self.velocitySagittalLeftHip_slider, 'SagittalLeftHip', 'leftLeg'))
        self.velocitySagittalLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftHip_slider, self.velocitySagittalLeftHip_slider, 'SagittalLeftHip', 'leftLeg'))
        self.positionFrontalLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftHip_slider, self.velocityFrontalLeftHip_slider, 'FrontalLeftHip', 'leftLeg'))
        self.velocityFrontalLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftHip_slider, self.velocityFrontalLeftHip_slider, 'FrontalLeftHip', 'leftLeg'))
        self.positionFrontalLeftKnee_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftKnee_slider, self.velocityFrontalLeftKnee_slider, 'FrontalLeftKnee', 'leftLeg'))
        self.velocityFrontalLeftKnee_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftKnee_slider, self.velocityFrontalLeftKnee_slider, 'FrontalLeftKnee', 'leftLeg'))
        self.positionFrontalLeftAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftAnkle_slider, self.velocityFrontalLeftAnkle_slider, 'FrontalLeftAnkle', 'leftLeg'))
        self.velocityFrontalLeftAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftAnkle_slider, self.velocityFrontalLeftAnkle_slider, 'FrontalLeftAnkle', 'leftLeg'))
        self.positionSagittalLeftAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftAnkle_slider, self.velocitySagittalLeftAnkle_slider, 'SagittalLeftAnkle', 'leftLeg'))
        self.velocitySagittalLeftAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftAnkle_slider, self.velocitySagittalLeftAnkle_slider, 'SagittalLeftAnkle', 'leftLeg'))

        self.show()

    def dragSlider(self, positionSlider, velocitySlider, articulation, extremity):

        self.positionValueAxialNeck_label.setText(str(positionSlider.value()))
        WindowSubscriber.publishPosition(articulation, positionSlider.value(), velocitySlider.value(), extremity)
        print('El valor de la extremidad ' + str(extremity) + "es" + str(positionSlider.value()))
        print('El valor de la velocidad ' + str(extremity) + "es" + str(velocitySlider.value()))
    
def main(args=None):
    rclpy.init(args=args)
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()