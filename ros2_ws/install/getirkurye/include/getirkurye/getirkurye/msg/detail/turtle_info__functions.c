// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from getirkurye:msg/TurtleInfo.idl
// generated code does not contain a copyright notice
#include "getirkurye/msg/detail/turtle_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
getirkurye__msg__TurtleInfo__init(getirkurye__msg__TurtleInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    getirkurye__msg__TurtleInfo__fini(msg);
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
getirkurye__msg__TurtleInfo__fini(getirkurye__msg__TurtleInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // theta
}

bool
getirkurye__msg__TurtleInfo__are_equal(const getirkurye__msg__TurtleInfo * lhs, const getirkurye__msg__TurtleInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
getirkurye__msg__TurtleInfo__copy(
  const getirkurye__msg__TurtleInfo * input,
  getirkurye__msg__TurtleInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

getirkurye__msg__TurtleInfo *
getirkurye__msg__TurtleInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__msg__TurtleInfo * msg = (getirkurye__msg__TurtleInfo *)allocator.allocate(sizeof(getirkurye__msg__TurtleInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(getirkurye__msg__TurtleInfo));
  bool success = getirkurye__msg__TurtleInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
getirkurye__msg__TurtleInfo__destroy(getirkurye__msg__TurtleInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    getirkurye__msg__TurtleInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
getirkurye__msg__TurtleInfo__Sequence__init(getirkurye__msg__TurtleInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__msg__TurtleInfo * data = NULL;

  if (size) {
    data = (getirkurye__msg__TurtleInfo *)allocator.zero_allocate(size, sizeof(getirkurye__msg__TurtleInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = getirkurye__msg__TurtleInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        getirkurye__msg__TurtleInfo__fini(&data[i - 1]);
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
getirkurye__msg__TurtleInfo__Sequence__fini(getirkurye__msg__TurtleInfo__Sequence * array)
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
      getirkurye__msg__TurtleInfo__fini(&array->data[i]);
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

getirkurye__msg__TurtleInfo__Sequence *
getirkurye__msg__TurtleInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__msg__TurtleInfo__Sequence * array = (getirkurye__msg__TurtleInfo__Sequence *)allocator.allocate(sizeof(getirkurye__msg__TurtleInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = getirkurye__msg__TurtleInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
getirkurye__msg__TurtleInfo__Sequence__destroy(getirkurye__msg__TurtleInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    getirkurye__msg__TurtleInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
getirkurye__msg__TurtleInfo__Sequence__are_equal(const getirkurye__msg__TurtleInfo__Sequence * lhs, const getirkurye__msg__TurtleInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!getirkurye__msg__TurtleInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
getirkurye__msg__TurtleInfo__Sequence__copy(
  const getirkurye__msg__TurtleInfo__Sequence * input,
  getirkurye__msg__TurtleInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(getirkurye__msg__TurtleInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    getirkurye__msg__TurtleInfo * data =
      (getirkurye__msg__TurtleInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!getirkurye__msg__TurtleInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          getirkurye__msg__TurtleInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!getirkurye__msg__TurtleInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
