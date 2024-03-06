// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ti_mmwave_rospkg_msgs:srv/MmwaveCli.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__SRV__DETAIL__MMWAVE_CLI__BUILDER_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__SRV__DETAIL__MMWAVE_CLI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ti_mmwave_rospkg_msgs
{

namespace srv
{

namespace builder
{

class Init_MmwaveCli_Request_comm
{
public:
  Init_MmwaveCli_Request_comm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request comm(::ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request::_comm_type arg)
  {
    msg_.comm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request>()
{
  return ti_mmwave_rospkg_msgs::srv::builder::Init_MmwaveCli_Request_comm();
}

}  // namespace ti_mmwave_rospkg_msgs


namespace ti_mmwave_rospkg_msgs
{

namespace srv
{

namespace builder
{

class Init_MmwaveCli_Response_resp
{
public:
  Init_MmwaveCli_Response_resp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response resp(::ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response::_resp_type arg)
  {
    msg_.resp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response>()
{
  return ti_mmwave_rospkg_msgs::srv::builder::Init_MmwaveCli_Response_resp();
}

}  // namespace ti_mmwave_rospkg_msgs

#endif  // TI_MMWAVE_ROSPKG_MSGS__SRV__DETAIL__MMWAVE_CLI__BUILDER_HPP_
