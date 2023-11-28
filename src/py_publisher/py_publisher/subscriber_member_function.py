# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node

import math
import itertools

from yarp_control_msgs.msg import Position

class MinimalSubscriber(Node):

    def __init__(self):

        super().__init__('fullControl_subscriber')

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
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
