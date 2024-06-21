// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aerobot_interfaces:srv/Calibrate.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__STRUCT_HPP_
#define AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aerobot_interfaces__srv__Calibrate_Request __attribute__((deprecated))
#else
# define DEPRECATED__aerobot_interfaces__srv__Calibrate_Request __declspec(deprecated)
#endif

namespace aerobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calibrate_Request_
{
  using Type = Calibrate_Request_<ContainerAllocator>;

  explicit Calibrate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->get_calibration_parameters = false;
    }
  }

  explicit Calibrate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->get_calibration_parameters = false;
    }
  }

  // field types and members
  using _get_calibration_parameters_type =
    bool;
  _get_calibration_parameters_type get_calibration_parameters;

  // setters for named parameter idiom
  Type & set__get_calibration_parameters(
    const bool & _arg)
  {
    this->get_calibration_parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobot_interfaces__srv__Calibrate_Request
    std::shared_ptr<aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobot_interfaces__srv__Calibrate_Request
    std::shared_ptr<aerobot_interfaces::srv::Calibrate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calibrate_Request_ & other) const
  {
    if (this->get_calibration_parameters != other.get_calibration_parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calibrate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calibrate_Request_

// alias to use template instance with default allocator
using Calibrate_Request =
  aerobot_interfaces::srv::Calibrate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aerobot_interfaces


#ifndef _WIN32
# define DEPRECATED__aerobot_interfaces__srv__Calibrate_Response __attribute__((deprecated))
#else
# define DEPRECATED__aerobot_interfaces__srv__Calibrate_Response __declspec(deprecated)
#endif

namespace aerobot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calibrate_Response_
{
  using Type = Calibrate_Response_<ContainerAllocator>;

  explicit Calibrate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit Calibrate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aerobot_interfaces__srv__Calibrate_Response
    std::shared_ptr<aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aerobot_interfaces__srv__Calibrate_Response
    std::shared_ptr<aerobot_interfaces::srv::Calibrate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calibrate_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calibrate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calibrate_Response_

// alias to use template instance with default allocator
using Calibrate_Response =
  aerobot_interfaces::srv::Calibrate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aerobot_interfaces

namespace aerobot_interfaces
{

namespace srv
{

struct Calibrate
{
  using Request = aerobot_interfaces::srv::Calibrate_Request;
  using Response = aerobot_interfaces::srv::Calibrate_Response;
};

}  // namespace srv

}  // namespace aerobot_interfaces

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__STRUCT_HPP_
