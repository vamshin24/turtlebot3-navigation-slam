// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/SetJointTrajectory.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/set_joint_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `model_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
gazebo_msgs__srv__SetJointTrajectory_Request__init(gazebo_msgs__srv__SetJointTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    gazebo_msgs__srv__SetJointTrajectory_Request__fini(msg);
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->joint_trajectory)) {
    gazebo_msgs__srv__SetJointTrajectory_Request__fini(msg);
    return false;
  }
  // model_pose
  if (!geometry_msgs__msg__Pose__init(&msg->model_pose)) {
    gazebo_msgs__srv__SetJointTrajectory_Request__fini(msg);
    return false;
  }
  // set_model_pose
  // disable_physics_updates
  return true;
}

void
gazebo_msgs__srv__SetJointTrajectory_Request__fini(gazebo_msgs__srv__SetJointTrajectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // joint_trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->joint_trajectory);
  // model_pose
  geometry_msgs__msg__Pose__fini(&msg->model_pose);
  // set_model_pose
  // disable_physics_updates
}

bool
gazebo_msgs__srv__SetJointTrajectory_Request__are_equal(const gazebo_msgs__srv__SetJointTrajectory_Request * lhs, const gazebo_msgs__srv__SetJointTrajectory_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->joint_trajectory), &(rhs->joint_trajectory)))
  {
    return false;
  }
  // model_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->model_pose), &(rhs->model_pose)))
  {
    return false;
  }
  // set_model_pose
  if (lhs->set_model_pose != rhs->set_model_pose) {
    return false;
  }
  // disable_physics_updates
  if (lhs->disable_physics_updates != rhs->disable_physics_updates) {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__SetJointTrajectory_Request__copy(
  const gazebo_msgs__srv__SetJointTrajectory_Request * input,
  gazebo_msgs__srv__SetJointTrajectory_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->joint_trajectory), &(output->joint_trajectory)))
  {
    return false;
  }
  // model_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->model_pose), &(output->model_pose)))
  {
    return false;
  }
  // set_model_pose
  output->set_model_pose = input->set_model_pose;
  // disable_physics_updates
  output->disable_physics_updates = input->disable_physics_updates;
  return true;
}

gazebo_msgs__srv__SetJointTrajectory_Request *
gazebo_msgs__srv__SetJointTrajectory_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetJointTrajectory_Request * msg = (gazebo_msgs__srv__SetJointTrajectory_Request *)allocator.allocate(sizeof(gazebo_msgs__srv__SetJointTrajectory_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetJointTrajectory_Request));
  bool success = gazebo_msgs__srv__SetJointTrajectory_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetJointTrajectory_Request__destroy(gazebo_msgs__srv__SetJointTrajectory_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__SetJointTrajectory_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__SetJointTrajectory_Request__Sequence__init(gazebo_msgs__srv__SetJointTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetJointTrajectory_Request * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__SetJointTrajectory_Request *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__SetJointTrajectory_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetJointTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetJointTrajectory_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gazebo_msgs__srv__SetJointTrajectory_Request__Sequence__fini(gazebo_msgs__srv__SetJointTrajectory_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetJointTrajectory_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gazebo_msgs__srv__SetJointTrajectory_Request__Sequence *
gazebo_msgs__srv__SetJointTrajectory_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetJointTrajectory_Request__Sequence * array = (gazebo_msgs__srv__SetJointTrajectory_Request__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__SetJointTrajectory_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetJointTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetJointTrajectory_Request__Sequence__destroy(gazebo_msgs__srv__SetJointTrajectory_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__SetJointTrajectory_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__SetJointTrajectory_Request__Sequence__are_equal(const gazebo_msgs__srv__SetJointTrajectory_Request__Sequence * lhs, const gazebo_msgs__srv__SetJointTrajectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__SetJointTrajectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__SetJointTrajectory_Request__Sequence__copy(
  const gazebo_msgs__srv__SetJointTrajectory_Request__Sequence * input,
  gazebo_msgs__srv__SetJointTrajectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__SetJointTrajectory_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__SetJointTrajectory_Request * data =
      (gazebo_msgs__srv__SetJointTrajectory_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__SetJointTrajectory_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__SetJointTrajectory_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__SetJointTrajectory_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__SetJointTrajectory_Response__init(gazebo_msgs__srv__SetJointTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    gazebo_msgs__srv__SetJointTrajectory_Response__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetJointTrajectory_Response__fini(gazebo_msgs__srv__SetJointTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

bool
gazebo_msgs__srv__SetJointTrajectory_Response__are_equal(const gazebo_msgs__srv__SetJointTrajectory_Response * lhs, const gazebo_msgs__srv__SetJointTrajectory_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_message), &(rhs->status_message)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__SetJointTrajectory_Response__copy(
  const gazebo_msgs__srv__SetJointTrajectory_Response * input,
  gazebo_msgs__srv__SetJointTrajectory_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // status_message
  if (!rosidl_runtime_c__String__copy(
      &(input->status_message), &(output->status_message)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__srv__SetJointTrajectory_Response *
gazebo_msgs__srv__SetJointTrajectory_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetJointTrajectory_Response * msg = (gazebo_msgs__srv__SetJointTrajectory_Response *)allocator.allocate(sizeof(gazebo_msgs__srv__SetJointTrajectory_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetJointTrajectory_Response));
  bool success = gazebo_msgs__srv__SetJointTrajectory_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetJointTrajectory_Response__destroy(gazebo_msgs__srv__SetJointTrajectory_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__SetJointTrajectory_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__SetJointTrajectory_Response__Sequence__init(gazebo_msgs__srv__SetJointTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetJointTrajectory_Response * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__SetJointTrajectory_Response *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__SetJointTrajectory_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetJointTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetJointTrajectory_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gazebo_msgs__srv__SetJointTrajectory_Response__Sequence__fini(gazebo_msgs__srv__SetJointTrajectory_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetJointTrajectory_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gazebo_msgs__srv__SetJointTrajectory_Response__Sequence *
gazebo_msgs__srv__SetJointTrajectory_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__SetJointTrajectory_Response__Sequence * array = (gazebo_msgs__srv__SetJointTrajectory_Response__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__SetJointTrajectory_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetJointTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetJointTrajectory_Response__Sequence__destroy(gazebo_msgs__srv__SetJointTrajectory_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__SetJointTrajectory_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__SetJointTrajectory_Response__Sequence__are_equal(const gazebo_msgs__srv__SetJointTrajectory_Response__Sequence * lhs, const gazebo_msgs__srv__SetJointTrajectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__SetJointTrajectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__SetJointTrajectory_Response__Sequence__copy(
  const gazebo_msgs__srv__SetJointTrajectory_Response__Sequence * input,
  gazebo_msgs__srv__SetJointTrajectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__SetJointTrajectory_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__SetJointTrajectory_Response * data =
      (gazebo_msgs__srv__SetJointTrajectory_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__SetJointTrajectory_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__SetJointTrajectory_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__SetJointTrajectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
