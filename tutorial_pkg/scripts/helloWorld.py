#!/usr/bin/env python3
import rospy

def main():
    # Inicializa o nó ROS com o nome 'hello_world'
    rospy.init_node('hello_world')

    # Define a taxa de execução do loop: 10 Hz
    rate = rospy.Rate(10)

    count = 0
    while not rospy.is_shutdown():
        # Imprime a mensagem no log (equivalente ao ROS_INFO_STREAM)
        rospy.loginfo("Hello World %d", count)

        rate.sleep()
        count += 1

if __name__ == '__main__':
    main()