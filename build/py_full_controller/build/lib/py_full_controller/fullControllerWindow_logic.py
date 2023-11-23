
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

        self.dragSlider()
    
    def initUI(self):
        self.positionFrontalRightShoulder_slider.valueChanged(self.dragSlider())
        self.show()

    def dragSlider(self):
        print("HOLA!!!")
    
def main(args=None):
    rclpy.init(args=args)
    app = QtWidgets.QApplication([])
    window = MainWindow()
    window.show()
    app.exec_()