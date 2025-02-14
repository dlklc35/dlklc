// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from getirkurye:srv/SetCoordinates.idl
// generated code does not contain a copyright notice
#include "getirkurye/srv/detail/set_coordinates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
getirkurye__srv__SetCoordinates_Request__init(getirkurye__srv__SetCoordinates_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
getirkurye__srv__SetCoordinates_Request__fini(getirkurye__srv__SetCoordinates_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

bool
getirkurye__srv__SetCoordinates_Request__are_equal(const getirkurye__srv__SetCoordinates_Request * lhs, const getirkurye__srv__SetCoordinates_Request * rhs)
{
  if (!lhs || !rhs) {
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
getirkurye__srv__SetCoordinates_Request__copy(
  const getirkurye__srv__SetCoordinates_Request * input,
  getirkurye__srv__SetCoordinates_Request * output)
{
  if (!input || !output) {
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

getirkurye__srv__SetCoordinates_Request *
getirkurye__srv__SetCoordinates_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__srv__SetCoordinates_Request * msg = (getirkurye__srv__SetCoordinates_Request *)allocator.allocate(sizeof(getirkurye__srv__SetCoordinates_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(getirkurye__srv__SetCoordinates_Request));
  bool success = getirkurye__srv__SetCoordinates_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
getirkurye__srv__SetCoordinates_Request__destroy(getirkurye__srv__SetCoordinates_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    getirkurye__srv__SetCoordinates_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
getirkurye__srv__SetCoordinates_Request__Sequence__init(getirkurye__srv__SetCoordinates_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__srv__SetCoordinates_Request * data = NULL;

  if (size) {
    data = (getirkurye__srv__SetCoordinates_Request *)allocator.zero_allocate(size, sizeof(getirkurye__srv__SetCoordinates_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = getirkurye__srv__SetCoordinates_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        getirkurye__srv__SetCoordinates_Request__fini(&data[i - 1]);
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
getirkurye__srv__SetCoordinates_Request__Sequence__fini(getirkurye__srv__SetCoordinates_Request__Sequence * array)
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
      getirkurye__srv__SetCoordinates_Request__fini(&array->data[i]);
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

getirkurye__srv__SetCoordinates_Request__Sequence *
getirkurye__srv__SetCoordinates_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__srv__SetCoordinates_Request__Sequence * array = (getirkurye__srv__SetCoordinates_Request__Sequence *)allocator.allocate(sizeof(getirkurye__srv__SetCoordinates_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = getirkurye__srv__SetCoordinates_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
getirkurye__srv__SetCoordinates_Request__Sequence__destroy(getirkurye__srv__SetCoordinates_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    getirkurye__srv__SetCoordinates_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
getirkurye__srv__SetCoordinates_Request__Sequence__are_equal(const getirkurye__srv__SetCoordinates_Request__Sequence * lhs, const getirkurye__srv__SetCoordinates_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!getirkurye__srv__SetCoordinates_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
getirkurye__srv__SetCoordinates_Request__Sequence__copy(
  const getirkurye__srv__SetCoordinates_Request__Sequence * input,
  getirkurye__srv__SetCoordinates_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(getirkurye__srv__SetCoordinates_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    getirkurye__srv__SetCoordinates_Request * data =
      (getirkurye__srv__SetCoordinates_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!getirkurye__srv__SetCoordinates_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          getirkurye__srv__SetCoordinates_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!getirkurye__srv__SetCoordinates_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
getirkurye__srv__SetCoordinates_Response__init(getirkurye__srv__SetCoordinates_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
getirkurye__srv__SetCoordinates_Response__fini(getirkurye__srv__SetCoordinates_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
getirkurye__srv__SetCoordinates_Response__are_equal(const getirkurye__srv__SetCoordinates_Response * lhs, const getirkurye__srv__SetCoordinates_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
getirkurye__srv__SetCoordinates_Response__copy(
  const getirkurye__srv__SetCoordinates_Response * input,
  getirkurye__srv__SetCoordinates_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

getirkurye__srv__SetCoordinates_Response *
getirkurye__srv__SetCoordinates_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__srv__SetCoordinates_Response * msg = (getirkurye__srv__SetCoordinates_Response *)allocator.allocate(sizeof(getirkurye__srv__SetCoordinates_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(getirkurye__srv__SetCoordinates_Response));
  bool success = getirkurye__srv__SetCoordinates_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
getirkurye__srv__SetCoordinates_Response__destroy(getirkurye__srv__SetCoordinates_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    getirkurye__srv__SetCoordinates_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
getirkurye__srv__SetCoordinates_Response__Sequence__init(getirkurye__srv__SetCoordinates_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__srv__SetCoordinates_Response * data = NULL;

  if (size) {
    data = (getirkurye__srv__SetCoordinates_Response *)allocator.zero_allocate(size, sizeof(getirkurye__srv__SetCoordinates_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = getirkurye__srv__SetCoordinates_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        getirkurye__srv__SetCoordinates_Response__fini(&data[i - 1]);
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
getirkurye__srv__SetCoordinates_Response__Sequence__fini(getirkurye__srv__SetCoordinates_Response__Sequence * array)
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
      getirkurye__srv__SetCoordinates_Response__fini(&array->data[i]);
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

getirkurye__srv__SetCoordinates_Response__Sequence *
getirkurye__srv__SetCoordinates_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  getirkurye__srv__SetCoordinates_Response__Sequence * array = (getirkurye__srv__SetCoordinates_Response__Sequence *)allocator.allocate(sizeof(getirkurye__srv__SetCoordinates_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = getirkurye__srv__SetCoordinates_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
getirkurye__srv__SetCoordinates_Response__Sequence__destroy(getirkurye__srv__SetCoordinates_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    getirkurye__srv__SetCoordinates_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
getirkurye__srv__SetCoordinates_Response__Sequence__are_equal(const getirkurye__srv__SetCoordinates_Response__Sequence * lhs, const getirkurye__srv__SetCoordinates_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!getirkurye__srv__SetCoordinates_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
getirkurye__srv__SetCoordinates_Response__Sequence__copy(
  const getirkurye__srv__SetCoordinates_Response__Sequence * input,
  getirkurye__srv__SetCoordinates_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(getirkurye__srv__SetCoordinates_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    getirkurye__srv__SetCoordinates_Response * data =
      (getirkurye__srv__SetCoordinates_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!getirkurye__srv__SetCoordinates_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          getirkurye__srv__SetCoordinates_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!getirkurye__srv__SetCoordinates_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
