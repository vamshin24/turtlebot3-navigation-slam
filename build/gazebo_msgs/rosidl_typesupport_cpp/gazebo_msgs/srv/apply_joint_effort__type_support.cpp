// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:srv/ApplyJointEffort.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gazebo_msgs/srv/detail/apply_joint_effort__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApplyJointEffort_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApplyJointEffort_Request_type_support_ids_t;

static const _ApplyJointEffort_Request_type_support_ids_t _ApplyJointEffort_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApplyJointEffort_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApplyJointEffort_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApplyJointEffort_Request_type_support_symbol_names_t _ApplyJointEffort_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, ApplyJointEffort_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, ApplyJointEffort_Request)),
  }
};

typedef struct _ApplyJointEffort_Request_type_support_data_t
{
  void * data[2];
} _ApplyJointEffort_Request_type_support_data_t;

static _ApplyJointEffort_Request_type_support_data_t _ApplyJointEffort_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApplyJointEffort_Request_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_ApplyJointEffort_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ApplyJointEffort_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ApplyJointEffort_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApplyJointEffort_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApplyJointEffort_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::srv::ApplyJointEffort_Request>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::ApplyJointEffort_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, ApplyJointEffort_Request)() {
  return get_message_type_support_handle<gazebo_msgs::srv::ApplyJointEffort_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/apply_joint_effort__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApplyJointEffort_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApplyJointEffort_Response_type_support_ids_t;

static const _ApplyJointEffort_Response_type_support_ids_t _ApplyJointEffort_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApplyJointEffort_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApplyJointEffort_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApplyJointEffort_Response_type_support_symbol_names_t _ApplyJointEffort_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, ApplyJointEffort_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, ApplyJointEffort_Response)),
  }
};

typedef struct _ApplyJointEffort_Response_type_support_data_t
{
  void * data[2];
} _ApplyJointEffort_Response_type_support_data_t;

static _ApplyJointEffort_Response_type_support_data_t _ApplyJointEffort_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApplyJointEffort_Response_message_typesupport_map = {
  2,
  "gazebo_msgs",
  &_ApplyJointEffort_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ApplyJointEffort_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ApplyJointEffort_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApplyJointEffort_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApplyJointEffort_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::srv::ApplyJointEffort_Response>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::ApplyJointEffort_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, ApplyJointEffort_Response)() {
  return get_message_type_support_handle<gazebo_msgs::srv::ApplyJointEffort_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/apply_joint_effort__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApplyJointEffort_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApplyJointEffort_type_support_ids_t;

static const _ApplyJointEffort_type_support_ids_t _ApplyJointEffort_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApplyJointEffort_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApplyJointEffort_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApplyJointEffort_type_support_symbol_names_t _ApplyJointEffort_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, ApplyJointEffort)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, ApplyJointEffort)),
  }
};

typedef struct _ApplyJointEffort_type_support_data_t
{
  void * data[2];
} _ApplyJointEffort_type_support_data_t;

static _ApplyJointEffort_type_support_data_t _ApplyJointEffort_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApplyJointEffort_service_typesupport_map = {
  2,
  "gazebo_msgs",
  &_ApplyJointEffort_service_typesupport_ids.typesupport_identifier[0],
  &_ApplyJointEffort_service_typesupport_symbol_names.symbol_name[0],
  &_ApplyJointEffort_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ApplyJointEffort_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApplyJointEffort_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gazebo_msgs::srv::ApplyJointEffort>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::ApplyJointEffort_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, ApplyJointEffort)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<gazebo_msgs::srv::ApplyJointEffort>();
}

#ifdef __cplusplus
}
#endif
