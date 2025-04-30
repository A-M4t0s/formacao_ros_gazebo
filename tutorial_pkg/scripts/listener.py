#!/usr/bin/env python3
#!/usr/bin/env python3
import rospy
from std_msgs.msg import String

# Função de callback chamada sempre que uma nova mensagem é recebida no tópico
def callback(data):
    rospy.loginfo("I heard: %s", data.data)

def listener():
    # Inicializa o nó ROS com o nome 'listener_py'
    rospy.init_node('listener_py')

    # Criação de um subscritor do tópico 'chatter'
    # rospy.Subscriber(nome_do_tópico, tipo_da_mensagem, função_de_callback)
    rospy.Subscriber("chatter", String, callback)

    # Mantém o nó em execução e processa callbacks recebidas
    rospy.spin()

if __name__ == '__main__':
    listener()
