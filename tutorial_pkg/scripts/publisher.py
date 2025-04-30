#!/usr/bin/env python3
import rospy
from std_msgs.msg import String

def talker():
    # Inicializa o nó ROS com o nome 'talker_py'
    rospy.init_node('talker_py')

    # Criação de um publicador para mensagens do tipo std_msgs/String
    # rospy.Publisher(nome_do_tópico, tipo_da_mensagem, queue_size=tamanho_da_fila)
    pub = rospy.Publisher('chatter', String, queue_size=1)

    # Define a taxa de execução do loop (10 Hz)
    rate = rospy.Rate(10)

    val = 0
    # Loop principal: executado enquanto o ROS não for interrompido
    while not rospy.is_shutdown():
        # Gera a string a ser publicada
        msg = "Hello World - %d" % val

        # Log com o conteúdo da mensagem
        rospy.loginfo(msg)

        # Publica a mensagem no tópico
        pub.publish(msg)

        val += 1

        # Espera até à próxima iteração, respeitando a taxa definida
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
