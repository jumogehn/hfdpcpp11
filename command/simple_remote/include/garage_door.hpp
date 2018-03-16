//===--- GarageDoor.hpp - ----------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_


class GarageDoor {

public:
  GarageDoor();
  void OpenUp() const;
  void CloseDown() const;
  void Stop() const;
  void LightOn() const;
  void LightOff() const;
};


#endif
