#ifndef _ROS_pr2_gripper_sensor_msgs_PR2GripperForceServoGoal_h
#define _ROS_pr2_gripper_sensor_msgs_PR2GripperForceServoGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "pr2_gripper_sensor_msgs/PR2GripperForceServoCommand.h"

namespace pr2_gripper_sensor_msgs
{

  class PR2GripperForceServoGoal : public ros::Msg
  {
    public:
      pr2_gripper_sensor_msgs::PR2GripperForceServoCommand command;

    PR2GripperForceServoGoal():
      command()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->command.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->command.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "pr2_gripper_sensor_msgs/PR2GripperForceServoGoal"; };
    const char * getMD5(){ return "72dfec6461d0f26a4433260fc791bc48"; };

  };

}
#endif