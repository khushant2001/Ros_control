// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from messages:msg/Pidsignal.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "messages/msg/detail/pidsignal__struct.h"
#include "messages/msg/detail/pidsignal__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool messages__msg__pidsignal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("messages.msg._pidsignal.Pidsignal", full_classname_dest, 33) == 0);
  }
  messages__msg__Pidsignal * ros_message = _ros_message;
  {  // actuation
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actuation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * messages__msg__pidsignal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Pidsignal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("messages.msg._pidsignal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pidsignal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  messages__msg__Pidsignal * ros_message = (messages__msg__Pidsignal *)raw_ros_message;
  {  // actuation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actuation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
