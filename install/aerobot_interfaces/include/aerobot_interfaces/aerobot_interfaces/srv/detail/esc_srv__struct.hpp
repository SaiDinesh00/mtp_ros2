// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aerobot_interfaces:srv/EscSrv.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__STRUCT_HPP_
#define AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aerobot_interfaces__srv__EscSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__aerobot_interfaces__srv__EscSrv_Request __declspec(deprecated)
#endif

namespace aerobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EscSrv_Request_
{
  using Type = EscSrv_Request_<ContainerAllocator>;

  explicit EscSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_number = 0;
      this->state = false;
    }
  }

  explicit EscSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_number = 0;
      this->state = false;
    }
  }

  // field types and members
  using _pin_number_type =
    int8_t;
  _pin_number_type pin_number;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__pin_number(
    const int8_t & _arg)
  {
    this->pin_number = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobot_interfaces__srv__EscSrv_Request
    std::shared_ptr<aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobot_interfaces__srv__EscSrv_Request
    std::shared_ptr<aerobot_interfaces::srv::EscSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EscSrv_Request_ & other) const
  {
    if (this->pin_number != other.pin_number) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const EscSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EscSrv_Request_

// alias to use template instance with default allocator
using EscSrv_Request =
  aerobot_interfaces::srv::EscSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aerobot_interfaces


#ifndef _WIN32
# define DEPRECATED__aerobot_interfaces__srv__EscSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__aerobot_interfaces__srv__EscSrv_Response __declspec(deprecated)
#endif

namespace aerobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EscSrv_Response_
{
  using Type = EscSrv_Response_<ContainerAllocator>;

  explicit EscSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit EscSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobot_interfaces__srv__EscSrv_Response
    std::shared_ptr<aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobot_interfaces__srv__EscSrv_Response
    std::shared_ptr<aerobot_interfaces::srv::EscSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EscSrv_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const EscSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EscSrv_Response_

// alias to use template instance with default allocator
using EscSrv_Response =
  aerobot_interfaces::srv::EscSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aerobot_interfaces

namespace aerobot_interfaces
{

namespace srv
{

struct EscSrv
{
  using Request = aerobot_interfaces::srv::EscSrv_Request;
  using Response = aerobot_interfaces::srv::EscSrv_Response;
};

}  // namespace srv

}  // namespace aerobot_interfaces

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__STRUCT_HPP_
