//===--- GarageDoor.hpp - ---------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.



class GarageDoor {

  std::string _location;

public:
  explicit GarageDoor( const std::string location );
  void up() const;
  void down() const;
  void stop() const;
  void lightOn() const;
  void lightOff() const;
};

#endif
