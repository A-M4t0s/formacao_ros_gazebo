#!/usr/bin/env python3

import rospy
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan

# Variáveis globais
scan_data = [0.0, 0.0, 0.0]  # [esquerda, centro, direita]
state = 'GET_TB3_DIRECTION'

# Parâmetros de controlo
CHECK_FORWARD_DIST = 0.5
CHECK_SIDE_DIST = 0.3
LINEAR_VELOCITY = 0.4
ANGULAR_VELOCITY = 0.6

# Publicador global
cmd_vel_pub = None

# TODO: Callback para a receção de mensagens do tipo sensor_msgs/LaserScan


# TODO: Criar função para envio de velocidades


def main():
    global cmd_vel_pub, state

    rospy.init_node('controladorRoboAspirador', anonymous=True)

    # TODO: Criar publicador no tópico /cmd_vel do tipo geometry_msgs/Twist
    # TODO: Criar subscritor no tópico /scan

    rate = rospy.Rate(125)

    while not rospy.is_shutdown():
        
        # TODO: Implementar o Controlo do Robô

        rate.sleep()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass
