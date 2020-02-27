// Generated by gencpp from file shared_msgs/auto_control_msg.msg
// DO NOT EDIT!


#ifndef SHARED_MSGS_MESSAGE_AUTO_CONTROL_MSG_H
#define SHARED_MSGS_MESSAGE_AUTO_CONTROL_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace shared_msgs
{
template <class ContainerAllocator>
struct auto_control_msg_
{
  typedef auto_control_msg_<ContainerAllocator> Type;

  auto_control_msg_()
    : thrust_vec()
    , dims_locked()  {
      thrust_vec.assign(0.0);

      dims_locked.assign(false);
  }
  auto_control_msg_(const ContainerAllocator& _alloc)
    : thrust_vec()
    , dims_locked()  {
  (void)_alloc;
      thrust_vec.assign(0.0);

      dims_locked.assign(false);
  }



   typedef boost::array<float, 6>  _thrust_vec_type;
  _thrust_vec_type thrust_vec;

   typedef boost::array<uint8_t, 6>  _dims_locked_type;
  _dims_locked_type dims_locked;





  typedef boost::shared_ptr< ::shared_msgs::auto_control_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::shared_msgs::auto_control_msg_<ContainerAllocator> const> ConstPtr;

}; // struct auto_control_msg_

typedef ::shared_msgs::auto_control_msg_<std::allocator<void> > auto_control_msg;

typedef boost::shared_ptr< ::shared_msgs::auto_control_msg > auto_control_msgPtr;
typedef boost::shared_ptr< ::shared_msgs::auto_control_msg const> auto_control_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::shared_msgs::auto_control_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::shared_msgs::auto_control_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace shared_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'shared_msgs': ['/home/eric/Desktop/ROV/X12-Core/surface/src/ros/src/shared_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::shared_msgs::auto_control_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::shared_msgs::auto_control_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shared_msgs::auto_control_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shared_msgs::auto_control_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shared_msgs::auto_control_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shared_msgs::auto_control_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::shared_msgs::auto_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "563a60a06dd4f4297aa17e367a4fb89b";
  }

  static const char* value(const ::shared_msgs::auto_control_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x563a60a06dd4f429ULL;
  static const uint64_t static_value2 = 0x7aa17e367a4fb89bULL;
};

template<class ContainerAllocator>
struct DataType< ::shared_msgs::auto_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "shared_msgs/auto_control_msg";
  }

  static const char* value(const ::shared_msgs::auto_control_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::shared_msgs::auto_control_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[6] thrust_vec\n\
bool[6] dims_locked\n\
";
  }

  static const char* value(const ::shared_msgs::auto_control_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::shared_msgs::auto_control_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.thrust_vec);
      stream.next(m.dims_locked);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct auto_control_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::shared_msgs::auto_control_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::shared_msgs::auto_control_msg_<ContainerAllocator>& v)
  {
    s << indent << "thrust_vec[]" << std::endl;
    for (size_t i = 0; i < v.thrust_vec.size(); ++i)
    {
      s << indent << "  thrust_vec[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.thrust_vec[i]);
    }
    s << indent << "dims_locked[]" << std::endl;
    for (size_t i = 0; i < v.dims_locked.size(); ++i)
    {
      s << indent << "  dims_locked[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.dims_locked[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SHARED_MSGS_MESSAGE_AUTO_CONTROL_MSG_H
