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

  mutable int speed_;
  std::string location_;

public:
  static const int kHigh = 3;
  static const int kMedium = 2;
  static const int kLow = 1;
  static const int kOff = 0;

  explicit CeilingFan( std::string location );
  void SetHigh() const;
  void SetMedium() const;
  void SetLow() const;
  void TurnOff() const;
  int GetSpeed() const;
};


#endif
