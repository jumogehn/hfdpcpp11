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

  std::string location_;

public:
  explicit GarageDoor( const std::string location );
  void OpenUp() const;
  void CloseDown() const;
  void Stop() const;
  void LightOn() const;
  void LightOff() const;
};

#endif
