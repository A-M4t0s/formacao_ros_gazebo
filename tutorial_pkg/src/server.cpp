#include <ros/ros.h>
#include <tutorial_pkg/AddTwoInts.h>

bool addTwoIntsCallback(tutorial_pkg::AddTwoInts::Request &req, tutorial_pkg::AddTwoInts::Response &res)
{
    res.Soma = req.Val1 + req.Val2;
    ROS_INFO("Recebido: Val1 = %ld, Val2 = %ld | Soma = %ld", req.Val1, req.Val2, res.Soma);
    return true;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "AddTwoInts_Server");
    ros::NodeHandle nh;

    ros::ServiceServer service = nh.advertiseService("AddTwoInts", addTwoIntsCallback);
    ROS_INFO("Servidor Pronto Para Somar 2 Inteiros");

    ros::spin();

    return 0;
}