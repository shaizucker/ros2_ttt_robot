// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ttt_msgs:action/GoHome.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ttt_msgs/action/detail/go_home__functions.h"
#include "ttt_msgs/action/detail/go_home__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_Goal_type_support_ids_t;

static const _GoHome_Goal_type_support_ids_t _GoHome_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_Goal_type_support_symbol_names_t _GoHome_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_Goal)),
  }
};

typedef struct _GoHome_Goal_type_support_data_t
{
  void * data[2];
} _GoHome_Goal_type_support_data_t;

static _GoHome_Goal_type_support_data_t _GoHome_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_Goal_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_Goal__get_type_hash,
  &ttt_msgs__action__GoHome_Goal__get_type_description,
  &ttt_msgs__action__GoHome_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_Goal>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_Goal)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_Goal>();
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
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_Result_type_support_ids_t;

static const _GoHome_Result_type_support_ids_t _GoHome_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_Result_type_support_symbol_names_t _GoHome_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_Result)),
  }
};

typedef struct _GoHome_Result_type_support_data_t
{
  void * data[2];
} _GoHome_Result_type_support_data_t;

static _GoHome_Result_type_support_data_t _GoHome_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_Result_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_Result__get_type_hash,
  &ttt_msgs__action__GoHome_Result__get_type_description,
  &ttt_msgs__action__GoHome_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_Result>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_Result)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_Result>();
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
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_Feedback_type_support_ids_t;

static const _GoHome_Feedback_type_support_ids_t _GoHome_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_Feedback_type_support_symbol_names_t _GoHome_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_Feedback)),
  }
};

typedef struct _GoHome_Feedback_type_support_data_t
{
  void * data[2];
} _GoHome_Feedback_type_support_data_t;

static _GoHome_Feedback_type_support_data_t _GoHome_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_Feedback_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_Feedback__get_type_hash,
  &ttt_msgs__action__GoHome_Feedback__get_type_description,
  &ttt_msgs__action__GoHome_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_Feedback>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_Feedback)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_Feedback>();
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
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_SendGoal_Request_type_support_ids_t;

static const _GoHome_SendGoal_Request_type_support_ids_t _GoHome_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_SendGoal_Request_type_support_symbol_names_t _GoHome_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_SendGoal_Request)),
  }
};

typedef struct _GoHome_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GoHome_SendGoal_Request_type_support_data_t;

static _GoHome_SendGoal_Request_type_support_data_t _GoHome_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_SendGoal_Request_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_SendGoal_Request__get_type_hash,
  &ttt_msgs__action__GoHome_SendGoal_Request__get_type_description,
  &ttt_msgs__action__GoHome_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Request>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_SendGoal_Request)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Request>();
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
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_SendGoal_Response_type_support_ids_t;

static const _GoHome_SendGoal_Response_type_support_ids_t _GoHome_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_SendGoal_Response_type_support_symbol_names_t _GoHome_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_SendGoal_Response)),
  }
};

typedef struct _GoHome_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GoHome_SendGoal_Response_type_support_data_t;

static _GoHome_SendGoal_Response_type_support_data_t _GoHome_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_SendGoal_Response_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_SendGoal_Response__get_type_hash,
  &ttt_msgs__action__GoHome_SendGoal_Response__get_type_description,
  &ttt_msgs__action__GoHome_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Response>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_SendGoal_Response)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Response>();
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
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_SendGoal_Event_type_support_ids_t;

static const _GoHome_SendGoal_Event_type_support_ids_t _GoHome_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_SendGoal_Event_type_support_symbol_names_t _GoHome_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_SendGoal_Event)),
  }
};

typedef struct _GoHome_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _GoHome_SendGoal_Event_type_support_data_t;

static _GoHome_SendGoal_Event_type_support_data_t _GoHome_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_SendGoal_Event_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_SendGoal_Event__get_type_hash,
  &ttt_msgs__action__GoHome_SendGoal_Event__get_type_description,
  &ttt_msgs__action__GoHome_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Event>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_SendGoal_Event)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_SendGoal_type_support_ids_t;

static const _GoHome_SendGoal_type_support_ids_t _GoHome_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_SendGoal_type_support_symbol_names_t _GoHome_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_SendGoal)),
  }
};

typedef struct _GoHome_SendGoal_type_support_data_t
{
  void * data[2];
} _GoHome_SendGoal_type_support_data_t;

static _GoHome_SendGoal_type_support_data_t _GoHome_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_SendGoal_service_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GoHome_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GoHome_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoHome_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ttt_msgs::action::GoHome_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ttt_msgs::action::GoHome_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ttt_msgs::action::GoHome_SendGoal>,
  &ttt_msgs__action__GoHome_SendGoal__get_type_hash,
  &ttt_msgs__action__GoHome_SendGoal__get_type_description,
  &ttt_msgs__action__GoHome_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ttt_msgs::action::GoHome_SendGoal>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ttt_msgs::action::GoHome_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_GetResult_Request_type_support_ids_t;

static const _GoHome_GetResult_Request_type_support_ids_t _GoHome_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_GetResult_Request_type_support_symbol_names_t _GoHome_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_GetResult_Request)),
  }
};

typedef struct _GoHome_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GoHome_GetResult_Request_type_support_data_t;

static _GoHome_GetResult_Request_type_support_data_t _GoHome_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_GetResult_Request_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_GetResult_Request__get_type_hash,
  &ttt_msgs__action__GoHome_GetResult_Request__get_type_description,
  &ttt_msgs__action__GoHome_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Request>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_GetResult_Request)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Request>();
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
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_GetResult_Response_type_support_ids_t;

static const _GoHome_GetResult_Response_type_support_ids_t _GoHome_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_GetResult_Response_type_support_symbol_names_t _GoHome_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_GetResult_Response)),
  }
};

typedef struct _GoHome_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GoHome_GetResult_Response_type_support_data_t;

static _GoHome_GetResult_Response_type_support_data_t _GoHome_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_GetResult_Response_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_GetResult_Response__get_type_hash,
  &ttt_msgs__action__GoHome_GetResult_Response__get_type_description,
  &ttt_msgs__action__GoHome_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Response>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_GetResult_Response)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Response>();
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
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_GetResult_Event_type_support_ids_t;

static const _GoHome_GetResult_Event_type_support_ids_t _GoHome_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_GetResult_Event_type_support_symbol_names_t _GoHome_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_GetResult_Event)),
  }
};

typedef struct _GoHome_GetResult_Event_type_support_data_t
{
  void * data[2];
} _GoHome_GetResult_Event_type_support_data_t;

static _GoHome_GetResult_Event_type_support_data_t _GoHome_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_GetResult_Event_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_GetResult_Event__get_type_hash,
  &ttt_msgs__action__GoHome_GetResult_Event__get_type_description,
  &ttt_msgs__action__GoHome_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Event>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_GetResult_Event)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_GetResult_type_support_ids_t;

static const _GoHome_GetResult_type_support_ids_t _GoHome_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_GetResult_type_support_symbol_names_t _GoHome_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_GetResult)),
  }
};

typedef struct _GoHome_GetResult_type_support_data_t
{
  void * data[2];
} _GoHome_GetResult_type_support_data_t;

static _GoHome_GetResult_type_support_data_t _GoHome_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_GetResult_service_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GoHome_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GoHome_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoHome_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ttt_msgs::action::GoHome_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ttt_msgs::action::GoHome_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ttt_msgs::action::GoHome_GetResult>,
  &ttt_msgs__action__GoHome_GetResult__get_type_hash,
  &ttt_msgs__action__GoHome_GetResult__get_type_description,
  &ttt_msgs__action__GoHome_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ttt_msgs::action::GoHome_GetResult>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ttt_msgs::action::GoHome_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__functions.h"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
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

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoHome_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoHome_FeedbackMessage_type_support_ids_t;

static const _GoHome_FeedbackMessage_type_support_ids_t _GoHome_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GoHome_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoHome_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoHome_FeedbackMessage_type_support_symbol_names_t _GoHome_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ttt_msgs, action, GoHome_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ttt_msgs, action, GoHome_FeedbackMessage)),
  }
};

typedef struct _GoHome_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GoHome_FeedbackMessage_type_support_data_t;

static _GoHome_FeedbackMessage_type_support_data_t _GoHome_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoHome_FeedbackMessage_message_typesupport_map = {
  2,
  "ttt_msgs",
  &_GoHome_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GoHome_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GoHome_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoHome_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoHome_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ttt_msgs__action__GoHome_FeedbackMessage__get_type_hash,
  &ttt_msgs__action__GoHome_FeedbackMessage__get_type_description,
  &ttt_msgs__action__GoHome_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ttt_msgs::action::GoHome_FeedbackMessage>()
{
  return &::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome_FeedbackMessage)() {
  return get_message_type_support_handle<ttt_msgs::action::GoHome_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ttt_msgs/action/detail/go_home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace ttt_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GoHome_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &ttt_msgs__action__GoHome__get_type_hash,
  &ttt_msgs__action__GoHome__get_type_description,
  &ttt_msgs__action__GoHome__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ttt_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ttt_msgs::action::GoHome>()
{
  using ::ttt_msgs::action::rosidl_typesupport_cpp::GoHome_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GoHome_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ttt_msgs::action::GoHome::Impl::SendGoalService>();
  GoHome_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ttt_msgs::action::GoHome::Impl::GetResultService>();
  GoHome_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ttt_msgs::action::GoHome::Impl::CancelGoalService>();
  GoHome_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ttt_msgs::action::GoHome::Impl::FeedbackMessage>();
  GoHome_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ttt_msgs::action::GoHome::Impl::GoalStatusMessage>();
  return &GoHome_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, ttt_msgs, action, GoHome)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<ttt_msgs::action::GoHome>();
}

#ifdef __cplusplus
}
#endif
