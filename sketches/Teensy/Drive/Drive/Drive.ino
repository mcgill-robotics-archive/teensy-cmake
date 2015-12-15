#include <Servo.h>
#include <ros.h>
#include <std_msgs/Int16.h>
#include <SPI.h>

ros::NodeHandle nh;
std_msgs::Int16 integer;
Servo servo;

void setup()
{
    servo.attach(10);
}

int i = 0;

void loop()
{
    i ++;
    delay(10);
}
