# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'ventana.ui'
#
# Created by: PyQt5 UI code generator 5.15.6
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(800, 600)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(240, 110, 311, 17))
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.sendPosition_button = QtWidgets.QPushButton(self.centralwidget)
        self.sendPosition_button.setGeometry(QtCore.QRect(350, 370, 89, 25))
        self.sendPosition_button.setObjectName("sendPosition_button")
        self.label_2 = QtWidgets.QLabel(self.centralwidget)
        self.label_2.setGeometry(QtCore.QRect(310, 150, 181, 17))
        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.FrontalRightShoulder_textBox = QtWidgets.QLineEdit(self.centralwidget)
        self.FrontalRightShoulder_textBox.setGeometry(QtCore.QRect(340, 180, 113, 25))
        self.FrontalRightShoulder_textBox.setObjectName("FrontalRightShoulder_textBox")
        self.SagittalRightShoulder_textBox = QtWidgets.QLineEdit(self.centralwidget)
        self.SagittalRightShoulder_textBox.setGeometry(QtCore.QRect(340, 210, 113, 25))
        self.SagittalRightShoulder_textBox.setObjectName("SagittalRightShoulder_textBox")
        self.AxialRightShoulder_textBox = QtWidgets.QLineEdit(self.centralwidget)
        self.AxialRightShoulder_textBox.setGeometry(QtCore.QRect(340, 240, 113, 25))
        self.AxialRightShoulder_textBox.setObjectName("AxialRightShoulder_textBox")
        self.FrontalRightElbow_textBox = QtWidgets.QLineEdit(self.centralwidget)
        self.FrontalRightElbow_textBox.setGeometry(QtCore.QRect(340, 270, 113, 25))
        self.FrontalRightElbow_textBox.setObjectName("FrontalRightElbow_textBox")
        self.AxialRightWrist_textBox = QtWidgets.QLineEdit(self.centralwidget)
        self.AxialRightWrist_textBox.setGeometry(QtCore.QRect(340, 300, 113, 25))
        self.AxialRightWrist_textBox.setObjectName("AxialRightWrist_textBox")
        self.FrontalRightWrist_textBox = QtWidgets.QLineEdit(self.centralwidget)
        self.FrontalRightWrist_textBox.setGeometry(QtCore.QRect(340, 330, 113, 25))
        self.FrontalRightWrist_textBox.setObjectName("FrontalRightWrist_textBox")
        self.FrontalRightShoulder_label = QtWidgets.QLabel(self.centralwidget)
        self.FrontalRightShoulder_label.setGeometry(QtCore.QRect(150, 180, 181, 17))
        self.FrontalRightShoulder_label.setAlignment(QtCore.Qt.AlignCenter)
        self.FrontalRightShoulder_label.setObjectName("FrontalRightShoulder_label")
        self.SagittalRightShoulder_label = QtWidgets.QLabel(self.centralwidget)
        self.SagittalRightShoulder_label.setGeometry(QtCore.QRect(150, 210, 181, 17))
        self.SagittalRightShoulder_label.setAlignment(QtCore.Qt.AlignCenter)
        self.SagittalRightShoulder_label.setObjectName("SagittalRightShoulder_label")
        self.FrontalRightElbow_label = QtWidgets.QLabel(self.centralwidget)
        self.FrontalRightElbow_label.setGeometry(QtCore.QRect(150, 270, 181, 17))
        self.FrontalRightElbow_label.setAlignment(QtCore.Qt.AlignCenter)
        self.FrontalRightElbow_label.setObjectName("FrontalRightElbow_label")
        self.AxialRightShoulder_label = QtWidgets.QLabel(self.centralwidget)
        self.AxialRightShoulder_label.setGeometry(QtCore.QRect(150, 240, 181, 17))
        self.AxialRightShoulder_label.setAlignment(QtCore.Qt.AlignCenter)
        self.AxialRightShoulder_label.setObjectName("AxialRightShoulder_label")
        self.FrontalRightWrist_label = QtWidgets.QLabel(self.centralwidget)
        self.FrontalRightWrist_label.setGeometry(QtCore.QRect(150, 330, 181, 17))
        self.FrontalRightWrist_label.setAlignment(QtCore.Qt.AlignCenter)
        self.FrontalRightWrist_label.setObjectName("FrontalRightWrist_label")
        self.AxialRightWrist_label = QtWidgets.QLabel(self.centralwidget)
        self.AxialRightWrist_label.setGeometry(QtCore.QRect(150, 300, 181, 17))
        self.AxialRightWrist_label.setAlignment(QtCore.Qt.AlignCenter)
        self.AxialRightWrist_label.setObjectName("AxialRightWrist_label")
        self.horizontalSlider = QtWidgets.QSlider(self.centralwidget)
        self.horizontalSlider.setGeometry(QtCore.QRect(480, 180, 160, 16))
        self.horizontalSlider.setOrientation(QtCore.Qt.Horizontal)
        self.horizontalSlider.setTickInterval(10)
        self.horizontalSlider.setObjectName("horizontalSlider")
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 800, 22))
        self.menubar.setObjectName("menubar")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.label.setText(_translate("MainWindow", "TEO"))
        self.sendPosition_button.setText(_translate("MainWindow", "Enviar"))
        self.label_2.setText(_translate("MainWindow", "Brazo Derecho"))
        self.FrontalRightShoulder_label.setText(_translate("MainWindow", "FrontalRightShoulder"))
        self.SagittalRightShoulder_label.setText(_translate("MainWindow", "SagittalRightShoulder"))
        self.FrontalRightElbow_label.setText(_translate("MainWindow", "FrontalRightElbow"))
        self.AxialRightShoulder_label.setText(_translate("MainWindow", "AxialRightShoulder"))
        self.FrontalRightWrist_label.setText(_translate("MainWindow", "FrontalRightWrist"))
        self.AxialRightWrist_label.setText(_translate("MainWindow", "AxialRightWrist"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())