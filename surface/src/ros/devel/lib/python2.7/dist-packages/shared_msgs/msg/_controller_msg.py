# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from shared_msgs/controller_msg.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class controller_msg(genpy.Message):
  _md5sum = "57ec734b5ac6013c2716cfd2d22db9b4"
  _type = "shared_msgs/controller_msg"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 RX_axis
float32 RY_axis
float32 LX_axis
float32 LY_axis
int8 a
int8 b
int8 x
int8 y
int8 DPadX
int8 DPadY
int8 RB
int8 LB
float32 Rtrigger
float32 Ltrigger
"""
  __slots__ = ['RX_axis','RY_axis','LX_axis','LY_axis','a','b','x','y','DPadX','DPadY','RB','LB','Rtrigger','Ltrigger']
  _slot_types = ['float32','float32','float32','float32','int8','int8','int8','int8','int8','int8','int8','int8','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       RX_axis,RY_axis,LX_axis,LY_axis,a,b,x,y,DPadX,DPadY,RB,LB,Rtrigger,Ltrigger

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(controller_msg, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.RX_axis is None:
        self.RX_axis = 0.
      if self.RY_axis is None:
        self.RY_axis = 0.
      if self.LX_axis is None:
        self.LX_axis = 0.
      if self.LY_axis is None:
        self.LY_axis = 0.
      if self.a is None:
        self.a = 0
      if self.b is None:
        self.b = 0
      if self.x is None:
        self.x = 0
      if self.y is None:
        self.y = 0
      if self.DPadX is None:
        self.DPadX = 0
      if self.DPadY is None:
        self.DPadY = 0
      if self.RB is None:
        self.RB = 0
      if self.LB is None:
        self.LB = 0
      if self.Rtrigger is None:
        self.Rtrigger = 0.
      if self.Ltrigger is None:
        self.Ltrigger = 0.
    else:
      self.RX_axis = 0.
      self.RY_axis = 0.
      self.LX_axis = 0.
      self.LY_axis = 0.
      self.a = 0
      self.b = 0
      self.x = 0
      self.y = 0
      self.DPadX = 0
      self.DPadY = 0
      self.RB = 0
      self.LB = 0
      self.Rtrigger = 0.
      self.Ltrigger = 0.

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
      buff.write(_get_struct_4f8b2f().pack(_x.RX_axis, _x.RY_axis, _x.LX_axis, _x.LY_axis, _x.a, _x.b, _x.x, _x.y, _x.DPadX, _x.DPadY, _x.RB, _x.LB, _x.Rtrigger, _x.Ltrigger))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.RX_axis, _x.RY_axis, _x.LX_axis, _x.LY_axis, _x.a, _x.b, _x.x, _x.y, _x.DPadX, _x.DPadY, _x.RB, _x.LB, _x.Rtrigger, _x.Ltrigger,) = _get_struct_4f8b2f().unpack(str[start:end])
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
      buff.write(_get_struct_4f8b2f().pack(_x.RX_axis, _x.RY_axis, _x.LX_axis, _x.LY_axis, _x.a, _x.b, _x.x, _x.y, _x.DPadX, _x.DPadY, _x.RB, _x.LB, _x.Rtrigger, _x.Ltrigger))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.RX_axis, _x.RY_axis, _x.LX_axis, _x.LY_axis, _x.a, _x.b, _x.x, _x.y, _x.DPadX, _x.DPadY, _x.RB, _x.LB, _x.Rtrigger, _x.Ltrigger,) = _get_struct_4f8b2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4f8b2f = None
def _get_struct_4f8b2f():
    global _struct_4f8b2f
    if _struct_4f8b2f is None:
        _struct_4f8b2f = struct.Struct("<4f8b2f")
    return _struct_4f8b2f
