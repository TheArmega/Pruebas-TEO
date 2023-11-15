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


from yarp_control_msgs.msg import Position

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('rightArm_subscriber')
        self.rightArm_publisher_ = self.create_publisher(
            Position,
            'rightArm_msgs/position',
            10
        )
        self.position_timer_ = self.create_timer(
            2.0,
            self.publish_position
        )

    def prueba(self,
                FrontalRightShoulder_position,
                SagittalRightShoulder_position,
                AxialRightShoulder_position,
                FrontalRightElbow_position,
                AxialRightWrist_position,
                FrontalRightWrist_position
               ):
        if(FrontalRightShoulder_position != ''):
            position = Position()
            position.names = ['FrontalRightShoulder']
            position.positions = [float(FrontalRightShoulder_position) * (math.pi/180)]
            position.ref_velocities = [0.5]
            self.rightArm_publisher_.publish(position)

    def publish_position(self):
        
        position = Position()

        print('### Movimiento del brazo derecho de TEO ###\n')
        print('¿Qué articulación del brazo derecho quieres mover?\n')
        articulacion = input('1. FrontalRightShoulder\n2. SagittalRightShoulder\n3. AxialRightShoulder\n4. FrontalRightElbow\n5. AxialRightWrist\n6. FrontalRightWrist\n')
        match articulacion:
            case '1':
                position.names = ['FrontalRightShoulder']
            case '2':
                position.names = ['SagittalRightShoulder']
            case '3':
                position.names = ['AxialRightShoulder']
            case '4':
                position.names = ['FrontalRightElbow']
            case '5':
                position.names = ['AxialRightWrist']
            case '6':
                position.names = ['FrontalRightWrist']   

        grados = input('¿Que posición quieres (grados)?\n') 
        position.positions = [float(grados) * (math.pi/180)]
        position.ref_velocities = [0.5]
        self.rightArm_publisher_.publish(position)


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