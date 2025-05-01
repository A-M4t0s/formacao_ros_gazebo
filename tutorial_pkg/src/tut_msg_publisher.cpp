#include <ros/ros.h>
#include <tutorial_pkg/tut_msg.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "custom_msg_talker");
    ros::NodeHandle nh;
    ros::Publisher customMsgPub = nh.advertise<tutorial_pkg::tut_msg>("custom_data", 1);
    ros::Rate loop_rate(10);

    int cnt = 0;

    while(ros::ok())
    {
        tutorial_pkg::tut_msg msg;

        msg.id = "Dados da Mensagem personalizada";
        msg.iteracao = cnt;

        msg.temperatura.header.stamp = ros::Time::now();
        msg.temperatura.header.frame_id = "Dados de Temperatura Aleatorios";
        msg.temperatura.temperature = static_cast<float>(rand()) / static_cast<float>(RAND_MAX) * (27.0 - (-7.0)) + (-7.0);

        customMsgPub.publish(msg);
        ROS_INFO("Mensagem publicada com sucesso!");
        ros::spinOnce();
        loop_rate.sleep();
        cnt++;
    }

    return 0;
}