#ifndef _ROS_pr2_common_action_msgs_ArmMoveIKResult_h
#define _ROS_pr2_common_action_msgs_ArmMoveIKResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace pr2_common_action_msgs
{

  class ArmMoveIKResult : public ros::Msg
  {
    public:

    ArmMoveIKResult()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return "pr2_common_action_msgs/ArmMoveIKResult"; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

}
#endif