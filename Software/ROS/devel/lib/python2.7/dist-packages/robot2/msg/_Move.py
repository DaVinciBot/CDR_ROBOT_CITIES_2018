# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robot2/Move.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import robot2.msg

class Move(genpy.Message):
  _md5sum = "c8aafdf94929f9d2d798dee01099bb24"
  _type = "robot2/Move"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """Pose2DOrient poseIni
Pose2DOrient poseFinal

================================================================================
MSG: robot2/Pose2DOrient
int32 x
int32 y
int32 theta
"""
  __slots__ = ['poseIni','poseFinal']
  _slot_types = ['robot2/Pose2DOrient','robot2/Pose2DOrient']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       poseIni,poseFinal

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Move, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.poseIni is None:
        self.poseIni = robot2.msg.Pose2DOrient()
      if self.poseFinal is None:
        self.poseFinal = robot2.msg.Pose2DOrient()
    else:
      self.poseIni = robot2.msg.Pose2DOrient()
      self.poseFinal = robot2.msg.Pose2DOrient()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_6i().pack(_x.poseIni.x, _x.poseIni.y, _x.poseIni.theta, _x.poseFinal.x, _x.poseFinal.y, _x.poseFinal.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.poseIni is None:
        self.poseIni = robot2.msg.Pose2DOrient()
      if self.poseFinal is None:
        self.poseFinal = robot2.msg.Pose2DOrient()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.poseIni.x, _x.poseIni.y, _x.poseIni.theta, _x.poseFinal.x, _x.poseFinal.y, _x.poseFinal.theta,) = _get_struct_6i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_6i().pack(_x.poseIni.x, _x.poseIni.y, _x.poseIni.theta, _x.poseFinal.x, _x.poseFinal.y, _x.poseFinal.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.poseIni is None:
        self.poseIni = robot2.msg.Pose2DOrient()
      if self.poseFinal is None:
        self.poseFinal = robot2.msg.Pose2DOrient()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.poseIni.x, _x.poseIni.y, _x.poseIni.theta, _x.poseFinal.x, _x.poseFinal.y, _x.poseFinal.theta,) = _get_struct_6i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6i = None
def _get_struct_6i():
    global _struct_6i
    if _struct_6i is None:
        _struct_6i = struct.Struct("<6i")
    return _struct_6i