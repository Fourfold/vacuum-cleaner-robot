// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
// generated code does not contain a copyright notice

#ifndef VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__STRUCT_HPP_
#define VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request __attribute__((deprecated))
#else
# define DEPRECATED__vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request __declspec(deprecated)
#endif

namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRepulsiveForce_Request_
{
  using Type = GetRepulsiveForce_Request_<ContainerAllocator>;

  explicit GetRepulsiveForce_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetRepulsiveForce_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request
    std::shared_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request
    std::shared_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRepulsiveForce_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRepulsiveForce_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRepulsiveForce_Request_

// alias to use template instance with default allocator
using GetRepulsiveForce_Request =
  vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vacuum_cleaner_robot_custom_interfaces


// Include directives for member types
// Member 'repulsive_force'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response __attribute__((deprecated))
#else
# define DEPRECATED__vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response __declspec(deprecated)
#endif

namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRepulsiveForce_Response_
{
  using Type = GetRepulsiveForce_Response_<ContainerAllocator>;

  explicit GetRepulsiveForce_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : repulsive_force(_init)
  {
    (void)_init;
  }

  explicit GetRepulsiveForce_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : repulsive_force(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _repulsive_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _repulsive_force_type repulsive_force;

  // setters for named parameter idiom
  Type & set__repulsive_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->repulsive_force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response
    std::shared_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response
    std::shared_ptr<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRepulsiveForce_Response_ & other) const
  {
    if (this->repulsive_force != other.repulsive_force) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRepulsiveForce_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRepulsiveForce_Response_

// alias to use template instance with default allocator
using GetRepulsiveForce_Response =
  vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vacuum_cleaner_robot_custom_interfaces

namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

struct GetRepulsiveForce
{
  using Request = vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request;
  using Response = vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response;
};

}  // namespace srv

}  // namespace vacuum_cleaner_robot_custom_interfaces

#endif  // VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__STRUCT_HPP_
