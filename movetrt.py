#!/usr/bin/env python3
# -*- coding: utf-8 -*
import rospy
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from math import pow, atan2, sqrt

class TurtleBot:

    def __init__(self):
       
        rospy.init_node('turtlebot_controller')

        
        self.velocity_publisher = rospy.Publisher('/turtle1/cmd_vel',Twist, queue_size=5)

        self.pose_subscriber = rospy.Subscriber('/turtle1/pose',Pose, self.update_pose)

        self.location_subscriber =rospy.Subscriber('/cmd/goal_pose',Pose,self.location_pose)               
      
        self.goal_pose=Pose()
        
        self.pose = Pose()

        self.rate = rospy.Rate(10)
        
    def location_pose(self,data):
       self.goal_pose =data


    def update_pose(self, data):
        self.pose = data
       

    def euclidean_distance(self):
        return sqrt(pow((self.goal_pose.x - self.pose.x), 2) +pow((self.goal_pose.y - self.pose.y), 2))

    def linear_vel(self):
        return 1.5 * self.euclidean_distance()

    def steering_angle(self):
        return atan2(self.goal_pose.y - self.pose.y, self.goal_pose.x - self.pose.x)

    def angular_vel(self):
        return 4 *(self.steering_angle() - self.pose.theta)

    def move2goal(self):     
        
       
        vel_msg = Twist()

        while not rospy.is_shutdown():


            vel_msg.linear.x = self.linear_vel()
          
            vel_msg.angular.z = self.angular_vel()

            self.velocity_publisher.publish(vel_msg)

            self.rate.sleep()

        vel_msg.linear.x = 0
        vel_msg.angular.z = 0
        self.velocity_publisher.publish(vel_msg)

        rospy.spin()

if __name__ == '__main__':
    try:
        x = TurtleBot()
        x.move2goal()
    except rospy.ROSInterruptException:
        pass
