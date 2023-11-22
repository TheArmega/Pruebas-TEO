from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *

class PySlider(QSlider):
    def __init__(
        self,
        margin = 0,
        bg_size = 20,
        bg_radius = 10,
        bg_color = "#1b1e23",
        bg_color_hover = "1e2229",
        handle_margin = 2,
        handle_size = 16,
        handle_radius = 8,
        handle_color = "#568af2",
        handle_color_hover = "#6c99f4",
        handle_color_pressed = "#3f6fd1"
    ):
        super(PySlider, self).__init__()