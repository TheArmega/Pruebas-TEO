
import rclpy

from PyQt5                      import *
from .fullControllerWindow_node import WindowSubscriber
from .fullControllerWindow_ui   import *

class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):

    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.initUI()

        self.window_subscriber = WindowSubscriber()

        #self.dragSlider(slider, extremity)
    
    def initUI(self):

        self.positionAxialNeck_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialNeck_slider, 'AxialNeck'))
        self.velocityAxialNeck_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityAxialNeck_slider, 'AxialNeck'))
        self.positionFrontalNeck_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalNeck_slider, 'FrontalNeck'))
        self.velocityFrontalNeck_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalNeck_slider, 'FrontalNeck'))

        self.positionFrontalRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightShoulder_slider, 'FrontalRightShoulder'))
        self.velocityFrontalRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalRightShoulder_slider, 'FrontalRightShoulder'))
        self.positionSagittalRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightShoulder_slider, 'SagittalRightShoulder'))
        self.velocitySagittalRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.velocitySagittalRightShoulder_slider, 'SagittalRightShoulder'))
        self.positionAxialRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightShoulder_slider, 'AxialRightShoulder'))
        self.velocityAxialRightShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityAxialRightShoulder_slider, 'AxialRightShoulder'))
        self.positionFrontalRightElbow_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightElbow_slider, 'FrontalRightElbow'))
        self.velocityFrontalRightElbow_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalRightElbow_slider, 'FrontalRightElbow'))
        self.positionAxialRightWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightWrist_slider, 'AxialRightWrist'))
        self.velocityAxialRightWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityAxialRightWrist_slider, 'AxialRightWrist'))
        self.positionFrontalRightWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightWrist_slider, 'FrontalRightWrist'))
        self.velocityFrontalRightWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalRightWrist_slider, 'FrontalRightWrist'))

        self.positionFrontalLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftShoulder_slider, 'FrontalLeftShoulder'))
        self.velocityFrontalLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider( self.velocityFrontalLeftShoulder_slider,'FrontalLeftShoulder'))
        self.positionSagittalLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftShoulder_slider, 'SagittalLeftShoulder'))
        self.velocitySagittalLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.velocitySagittalLeftShoulder_slider, 'SagittalLeftShoulder'))
        self.positionAxialLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftShoulder_slider, 'AxialLeftShoulder'))
        self.velocityAxialLeftShoulder_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityAxialLeftShoulder_slider, 'AxialLeftShoulder'))
        self.positionFrontalLeftElbow_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftElbow_slider, 'FrontalLeftElbow'))
        self.velocityFrontalLeftElbow_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalLeftElbow_slider, 'FrontalLeftElbow'))
        self.positionAxialLeftWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftWrist_slider, 'AxialLeftWrist'))
        self.velocityAxialLeftWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityAxialLeftWrist_slider, 'AxialLeftWrist'))
        self.positionFrontalLeftWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftWrist_slider, 'FrontalLeftWrist'))
        self.velocityFrontalLeftWrist_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalLeftWrist_slider, 'FrontalLeftWrist'))
     
        self.positionAxialTrunk_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialTrunk_slider, 'AxialTrunk'))
        self.velocityAxialTrunk_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityAxialTrunk_slider, 'AxialTrunk'))
        self.positionFrontalTrunk_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalTrunk_slider, 'FrontalTrunk'))
        self.velocityFrontalTrunk_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalTrunk_slider, 'FrontalTrunk'))

        self.positionAxialRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialRightHip_slider, 'AxialRightHip'))
        self.velocityAxialRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityAxialRightHip_slider, 'AxialRightHip'))
        self.positionSagittalRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightHip_slider, 'SagittalRightHip'))
        self.velocitySagittalRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.velocitySagittalRightHip_slider, 'SagittalRightHip'))
        self.positionFrontalRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightHip_slider, 'FrontalRightHip'))
        self.velocityFrontalRightHip_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalRightHip_slider, 'FrontalRightHip'))
        self.positionFrontalRightKnee_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightKnee_slider, 'FrontalRightKnee'))
        self.velocityFrontalRightKnee_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalRightKnee_slider, 'FrontalRightKnee'))
        self.positionFrontalRightAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalRightAnkle_slider, 'FrontalRightAnkle'))
        self.velocityFrontalRightAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalRightAnkle_slider, 'FrontalRightAnkle'))
        self.positionSagittalRightAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalRightAnkle_slider, 'SagittalRightAnkle'))
        self.velocitySagittalRightAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.velocitySagittalRightAnkle_slider, 'SagittalRightAnkle'))

        self.positionAxialLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionAxialLeftHip_slider, 'AxialLeftHip'))
        self.velocityAxialLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityAxialLeftHip_slider, 'AxialLeftHip'))
        self.positionSagittalLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftHip_slider, 'SagittalLeftHip'))
        self.velocitySagittalLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.velocitySagittalLeftHip_slider, 'SagittalLeftHip'))
        self.positionFrontalLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftHip_slider, 'FrontalLeftHip'))
        self.velocityFrontalLeftHip_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalLeftHip_slider, 'FrontalLeftHip'))
        self.positionFrontalLeftKnee_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftKnee_slider, 'FrontalLeftKnee'))
        self.velocityFrontalLeftKnee_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalLeftKnee_slider, 'FrontalLeftKnee'))
        self.positionFrontalLeftAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionFrontalLeftAnkle_slider, 'FrontalLeftAnkle'))
        self.velocityFrontalLeftAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.velocityFrontalLeftAnkle_slider, 'FrontalLeftAnkle'))
        self.positionSagittalLeftAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.positionSagittalLeftAnkle_slider, 'SagittalLeftAnkle'))
        self.velocitySagittalLeftAnkle_slider.valueChanged.connect(lambda:self.dragSlider(self.velocitySagittalLeftAnkle_slider, 'SagittalLeftAnkle'))

        self.show()

    def dragSlider(self, slider, extremity):
        print('El valor de la extremidad ' + str(extremity) + "es" + str(slider.value()))
    
def main(args=None):
    rclpy.init(args=args)
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()