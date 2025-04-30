#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv)
{
    // Inicializa o ROS
    // O argumento "talker" corresponde ao nome atribuido ao nó
    ros::init(argc, argv, "talker");

    // Criação de um NodeHandle
    // Responsável por estabelecer a comunicação com o sistema ROS
    ros::NodeHandle nh;

    // Criação de um publicador para mensagens do tipo std_msgs::String
    // nh.advertise<tipo_da_mensagem>("nome_do_topico", tamanho_do_buffer)
    ros::Publisher stringPub = nh.advertise<std_msgs::String>("chatter", 1);

    // Definição da taxa de execução do ciclo principal
    // Para este exemplo, 10 Hz
    ros::Rate loop_rate(10);

    int count = 0;

    // Loop principal do nó
    // O ciclo continua enquanto o ROS estiver a funcionar corretamente
    while(ros::ok())
    {
        // Criação de uma mensagem do tipo std_msgs::String
        std_msgs::String msg;
        
        // Define o conteúdo da mensagem
        msg.data = "Hello World - " + std::to_string(count);

        // Publicação da mensagem no tópico 'chatter'
        stringPub.publish(msg);

        // Trata callbacks pendentes
        // Para este caso não é necessário, mas é boa prática manter esta linha! 
        ros::spinOnce();

        // Aguarda até à próxima iteração de acordo com a taxa definida (10 Hz)
        loop_rate.sleep();
        count++;
    }

    return 0;
}