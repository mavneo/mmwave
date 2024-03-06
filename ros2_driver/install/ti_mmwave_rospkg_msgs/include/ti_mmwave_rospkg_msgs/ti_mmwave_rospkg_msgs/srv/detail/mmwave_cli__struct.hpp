// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ti_mmwave_rospkg_msgs:srv/MmwaveCli.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__SRV__DETAIL__MMWAVE_CLI__STRUCT_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__SRV__DETAIL__MMWAVE_CLI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request __attribute__((deprecated))
#else
# define DEPRECATED__ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request __declspec(deprecated)
#endif

namespace ti_mmwave_rospkg_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MmwaveCli_Request_
{
  using Type = MmwaveCli_Request_<ContainerAllocator>;

  explicit MmwaveCli_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm = "";
    }
  }

  explicit MmwaveCli_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : comm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm = "";
    }
  }

  // field types and members
  using _comm_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _comm_type comm;

  // setters for named parameter idiom
  Type & set__comm(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->comm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request
    std::shared_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request
    std::shared_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MmwaveCli_Request_ & other) const
  {
    if (this->comm != other.comm) {
      return false;
    }
    return true;
  }
  bool operator!=(const MmwaveCli_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MmwaveCli_Request_

// alias to use template instance with default allocator
using MmwaveCli_Request =
  ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ti_mmwave_rospkg_msgs


#ifndef _WIN32
# define DEPRECATED__ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response __attribute__((deprecated))
#else
# define DEPRECATED__ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response __declspec(deprecated)
#endif

namespace ti_mmwave_rospkg_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MmwaveCli_Response_
{
  using Type = MmwaveCli_Response_<ContainerAllocator>;

  explicit MmwaveCli_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resp = "";
    }
  }

  explicit MmwaveCli_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : resp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resp = "";
    }
  }

  // field types and members
  using _resp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _resp_type resp;

  // setters for named parameter idiom
  Type & set__resp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->resp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response
    std::shared_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response
    std::shared_ptr<ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MmwaveCli_Response_ & other) const
  {
    if (this->resp != other.resp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MmwaveCli_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MmwaveCli_Response_

// alias to use template instance with default allocator
using MmwaveCli_Response =
  ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ti_mmwave_rospkg_msgs

namespace ti_mmwave_rospkg_msgs
{

namespace srv
{

struct MmwaveCli
{
  using Request = ti_mmwave_rospkg_msgs::srv::MmwaveCli_Request;
  using Response = ti_mmwave_rospkg_msgs::srv::MmwaveCli_Response;
};

}  // namespace srv

}  // namespace ti_mmwave_rospkg_msgs

#endif  // TI_MMWAVE_ROSPKG_MSGS__SRV__DETAIL__MMWAVE_CLI__STRUCT_HPP_
