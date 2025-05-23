// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/GetEntityState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetEntityState_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetEntityState_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntityState_Request_
{
  using Type = GetEntityState_Request_<ContainerAllocator>;

  explicit GetEntityState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->reference_frame = "";
    }
  }

  explicit GetEntityState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    reference_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->reference_frame = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _reference_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reference_frame_type reference_frame;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__reference_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reference_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetEntityState_Request
    std::shared_ptr<gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetEntityState_Request
    std::shared_ptr<gazebo_msgs::srv::GetEntityState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntityState_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEntityState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntityState_Request_

// alias to use template instance with default allocator
using GetEntityState_Request =
  gazebo_msgs::srv::GetEntityState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'state'
#include "gazebo_msgs/msg/detail/entity_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetEntityState_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetEntityState_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEntityState_Response_
{
  using Type = GetEntityState_Response_<ContainerAllocator>;

  explicit GetEntityState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GetEntityState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    gazebo_msgs::msg::EntityState_<ContainerAllocator>;
  _state_type state;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const gazebo_msgs::msg::EntityState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetEntityState_Response
    std::shared_ptr<gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetEntityState_Response
    std::shared_ptr<gazebo_msgs::srv::GetEntityState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEntityState_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEntityState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEntityState_Response_

// alias to use template instance with default allocator
using GetEntityState_Response =
  gazebo_msgs::srv::GetEntityState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct GetEntityState
{
  using Request = gazebo_msgs::srv::GetEntityState_Request;
  using Response = gazebo_msgs::srv::GetEntityState_Response;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_ENTITY_STATE__STRUCT_HPP_
