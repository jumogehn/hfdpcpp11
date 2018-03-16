//===--- light.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_LIGHT_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.

class Light {

  std::string location_;

public:
  explicit Light( const std::string location);
  void TurnOn() const;
  void TurnOff() const;
};


#endif
