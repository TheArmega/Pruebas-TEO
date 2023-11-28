
import rclpy
import math
import itertools

from rclpy.node import Node
from yarp_control_msgs.msg import Position

class WindowSubscriber(Node):

    def __init__(self):

        super().__init__('window_subscriber')

        self.head_publisher_ = self.create_publisher(
            Position,
            'head_msgs/position',
            10
        )
        self.rightArm_publisher_ = self.create_publisher(
            Position,
            'rightArm_msgs/position',
            10
        )
        self.leftArm_publisher_ = self.create_publisher(
            Position,
            'leftArm_msgs/position',
            10
        )
        self.trunk_publisher_ = self.create_publisher(
            Position,
            'trunk_msgs/position',
            10
        )
        self.rightLeg_publisher_ = self.create_publisher(
            Position,
            'rightLeg_msgs/position',
            10
        )
        self.leftLeg_publisher_ = self.create_publisher(
            Position,
            'leftLeg_msgs/position',
            10
        )

    def publishPosition(self, articulations, positions, speeds, extremity):
        msg = Position()
        for articulation, position, speed in zip(articulations, positions, speeds):
            if (position != '' and speed != ''):
                msg.names = [str(articulation)]
                msg.positions = [float(position) * (math.pi/180)]
                msg.ref_velocities = [float(speed)]
                if (extremity == 'neck'):
                    self.head_publisher_.publish(msg)
                elif (extremity == 'rightArm'):
                    self.rightArm_publisher_.publish(msg)
                elif (extremity == 'lefttArm'):
                    self.leftArm_publisher_.publish(msg)
                elif (extremity == 'trunk'):
                    self.trunk_publisher_.publish(msg)
                elif (extremity == 'rightLeg'):
                    self.rightLeg_publisher_.publish(msg)
                elif (extremity == 'leftLeg'):
                    self.leftLeg_publisher_.publish(msg)

def main(args=None):

    rlcpy.init(args=args)
    window_subscriber = windowSubscriber()
    rlcpy.spin(window_subscriber)

    window_subscriber.destroy_node()
    rlcpy.shutdown()

if(__name__ == '__main__'):
    main()