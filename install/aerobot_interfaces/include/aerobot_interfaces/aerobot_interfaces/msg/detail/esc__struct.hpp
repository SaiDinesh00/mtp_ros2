// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aerobot_interfaces:msg/Esc.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__MSG__DETAIL__ESC__STRUCT_HPP_
#define AEROBOT_INTERFACES__MSG__DETAIL__ESC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aerobot_interfaces__msg__Esc __attribute__((deprecated))
#else
# define DEPRECATED__aerobot_interfaces__msg__Esc __declspec(deprecated)
#endif

namespace aerobot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Esc_
{
  using Type = Esc_<ContainerAllocator>;

  explicit Esc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_number = 0;
      this->pulse_width = 0.0;
    }
  }

  explicit Esc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_number = 0;
      this->pulse_width = 0.0;
    }
  }

  // field types and members
  using _pin_number_type =
    int8_t;
  _pin_number_type pin_number;
  using _pulse_width_type =
    double;
  _pulse_width_type pulse_width;

  // setters for named parameter idiom
  Type & set__pin_number(
    const int8_t & _arg)
  {
    this->pin_number = _arg;
    return *this;
  }
  Type & set__pulse_width(
    const double & _arg)
  {
    this->pulse_width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobot_interfaces::msg::Esc_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobot_interfaces::msg::Esc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobot_interfaces::msg::Esc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobot_interfaces::msg::Esc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::msg::Esc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::msg::Esc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::msg::Esc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::msg::Esc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobot_interfaces::msg::Esc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobot_interfaces::msg::Esc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobot_interfaces__msg__Esc
    std::shared_ptr<aerobot_interfaces::msg::Esc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobot_interfaces__msg__Esc
    std::shared_ptr<aerobot_interfaces::msg::Esc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Esc_ & other) const
  {
    if (this->pin_number != other.pin_number) {
      return false;
    }
    if (this->pulse_width != other.pulse_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const Esc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Esc_

// alias to use template instance with default allocator
using Esc =
  aerobot_interfaces::msg::Esc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aerobot_interfaces

#endif  // AEROBOT_INTERFACES__MSG__DETAIL__ESC__STRUCT_HPP_
