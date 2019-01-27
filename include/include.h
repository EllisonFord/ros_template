//
// Created by sam on 27/01/19.
//

#ifndef ROS_TEMPLATE_INCLUDE_H
#define ROS_TEMPLATE_INCLUDE_H

// SYS
#include <iostream>
// ROS
#include "ros/ros.h"
#include "std_msgs/String.h"
// USER
//

class OneCl{

private:

    ros::NodeHandle _nh;
    ros::Publisher _pub;

protected:
public:

    void method1();
    void method2();
    void method3();

};

#endif //ROS_TEMPLATE_INCLUDE_H
