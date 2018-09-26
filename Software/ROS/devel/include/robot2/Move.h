// Generated by gencpp from file robot2/Move.msg
// DO NOT EDIT!


#ifndef ROBOT2_MESSAGE_MOVE_H
#define ROBOT2_MESSAGE_MOVE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <robot2/Pose2DOrient.h>
#include <robot2/Pose2DOrient.h>

namespace robot2
{
template <class ContainerAllocator>
struct Move_
{
  typedef Move_<ContainerAllocator> Type;

  Move_()
    : poseIni()
    , poseFinal()  {
    }
  Move_(const ContainerAllocator& _alloc)
    : poseIni(_alloc)
    , poseFinal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::robot2::Pose2DOrient_<ContainerAllocator>  _poseIni_type;
  _poseIni_type poseIni;

   typedef  ::robot2::Pose2DOrient_<ContainerAllocator>  _poseFinal_type;
  _poseFinal_type poseFinal;





  typedef boost::shared_ptr< ::robot2::Move_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot2::Move_<ContainerAllocator> const> ConstPtr;

}; // struct Move_

typedef ::robot2::Move_<std::allocator<void> > Move;

typedef boost::shared_ptr< ::robot2::Move > MovePtr;
typedef boost::shared_ptr< ::robot2::Move const> MoveConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot2::Move_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot2::Move_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot2

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'robot2': ['/home/florian/catkin_workspace/src/robot2/msg', '/home/florian/catkin_workspace/src/robot2/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot2::Move_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot2::Move_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot2::Move_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot2::Move_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot2::Move_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot2::Move_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot2::Move_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c8aafdf94929f9d2d798dee01099bb24";
  }

  static const char* value(const ::robot2::Move_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc8aafdf94929f9d2ULL;
  static const uint64_t static_value2 = 0xd798dee01099bb24ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot2::Move_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot2/Move";
  }

  static const char* value(const ::robot2::Move_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot2::Move_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Pose2DOrient poseIni\n\
Pose2DOrient poseFinal\n\
\n\
================================================================================\n\
MSG: robot2/Pose2DOrient\n\
int32 x\n\
int32 y\n\
int32 theta\n\
";
  }

  static const char* value(const ::robot2::Move_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot2::Move_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.poseIni);
      stream.next(m.poseFinal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Move_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot2::Move_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot2::Move_<ContainerAllocator>& v)
  {
    s << indent << "poseIni: ";
    s << std::endl;
    Printer< ::robot2::Pose2DOrient_<ContainerAllocator> >::stream(s, indent + "  ", v.poseIni);
    s << indent << "poseFinal: ";
    s << std::endl;
    Printer< ::robot2::Pose2DOrient_<ContainerAllocator> >::stream(s, indent + "  ", v.poseFinal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT2_MESSAGE_MOVE_H
