# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetRepulsiveForce_Request(type):
    """Metaclass of message 'GetRepulsiveForce_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vacuum_cleaner_robot_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vacuum_cleaner_robot_custom_interfaces.srv.GetRepulsiveForce_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_repulsive_force__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_repulsive_force__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_repulsive_force__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_repulsive_force__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_repulsive_force__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRepulsiveForce_Request(metaclass=Metaclass_GetRepulsiveForce_Request):
    """Message class 'GetRepulsiveForce_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRepulsiveForce_Response(type):
    """Metaclass of message 'GetRepulsiveForce_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vacuum_cleaner_robot_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vacuum_cleaner_robot_custom_interfaces.srv.GetRepulsiveForce_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_repulsive_force__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_repulsive_force__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_repulsive_force__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_repulsive_force__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_repulsive_force__response

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRepulsiveForce_Response(metaclass=Metaclass_GetRepulsiveForce_Response):
    """Message class 'GetRepulsiveForce_Response'."""

    __slots__ = [
        '_repulsive_force',
    ]

    _fields_and_field_types = {
        'repulsive_force': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3
        self.repulsive_force = kwargs.get('repulsive_force', Vector3())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.repulsive_force != other.repulsive_force:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def repulsive_force(self):
        """Message field 'repulsive_force'."""
        return self._repulsive_force

    @repulsive_force.setter
    def repulsive_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'repulsive_force' field must be a sub message of type 'Vector3'"
        self._repulsive_force = value


class Metaclass_GetRepulsiveForce(type):
    """Metaclass of service 'GetRepulsiveForce'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vacuum_cleaner_robot_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vacuum_cleaner_robot_custom_interfaces.srv.GetRepulsiveForce')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_repulsive_force

            from vacuum_cleaner_robot_custom_interfaces.srv import _get_repulsive_force
            if _get_repulsive_force.Metaclass_GetRepulsiveForce_Request._TYPE_SUPPORT is None:
                _get_repulsive_force.Metaclass_GetRepulsiveForce_Request.__import_type_support__()
            if _get_repulsive_force.Metaclass_GetRepulsiveForce_Response._TYPE_SUPPORT is None:
                _get_repulsive_force.Metaclass_GetRepulsiveForce_Response.__import_type_support__()


class GetRepulsiveForce(metaclass=Metaclass_GetRepulsiveForce):
    from vacuum_cleaner_robot_custom_interfaces.srv._get_repulsive_force import GetRepulsiveForce_Request as Request
    from vacuum_cleaner_robot_custom_interfaces.srv._get_repulsive_force import GetRepulsiveForce_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
