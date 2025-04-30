#include <ros/ros.h>
#include <std_msgs/String.h>

// Função de callback chamada sempre que chega uma nova mensagem no tópico
void chatterCallback(const std_msgs::String& msg)
{
    ROS_INFO("I heard: [%s]", msg.data.c_str());
}

int main(int argc, char* argv[])
{
    // Inicializa o ROS
    // O argumento "listener" corresponde ao nome atribuido ao nó
    ros::init(argc, argv, "listener");

    // Criação de um NodeHandle
    // Responsável por estabelecer a comunicação com o sistema ROS
    ros::NodeHandle nh;

    // Criação de um subscritor do tópico 'chatter'
    // nh.subscribe("nome_do_tópico", tamanho_do_buffer, função_de_callback);
    ros::Subscriber subscriber = nh.subscribe("chatter", 1, chatterCallback);

    // Entra em loop para processar callbacks sempre que novas mensagens forem recebidas
    ros::spin();

    return 0;
}
