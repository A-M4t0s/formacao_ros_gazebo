#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <algorithm>

// Variáveis globais
float scan_data[3] = {0.0, 0.0, 0.0}; // [esquerda, centro, direita]
std::string state = "GET_TB3_DIRECTION";

const float CHECK_FORWARD_DIST = 0.5;
const float CHECK_SIDE_DIST = 0.3;
const float LINEAR_VELOCITY = 0.4;
const float ANGULAR_VELOCITY = 0.6;

/* Callback para a receção de mensagens do tipo sensor_msgs/LaserScan */


/* Criar função para envio de velocidades */


int main(int argc, char **argv)
{
    ros::init(argc, argv, "controladorRoboAspirador");
    ros::NodeHandle nh;

    /* Criar um publicador do tipo geometry_msgs/Twist para um tópico "/cmd_vel" */
    /* Criar um subscritor para o tópico "scan" */

    ros::Rate rate(125);

    while (ros::ok())
    {
        ros::spinOnce();
        
        /* Implementar o Controlo do Robô */

        rate.sleep();
    }
    
    return 0;
}
