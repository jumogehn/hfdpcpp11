//===--- CeilingFan.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HPP_
#define _HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.


class CeilingFan {

  mutable int _speed;
  std::string _location;

public:
  static const int HIGH = 3;
  static const int MEDIUM = 2;
  static const int LOW = 1;
  static const int OFF = 0;

  explicit CeilingFan( std::string location );
  void high() const;
  void medium() const;
  void low() const;
  void off() const;
  int getSpeed() const;
};


#endif
