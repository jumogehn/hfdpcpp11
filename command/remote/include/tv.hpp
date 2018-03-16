//===--- TV.hpp - -----------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_TV_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_TV_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.

class TV {

  mutable int channel_;
  std::string location_;

public:
  explicit TV( const std::string location );
  void TurnOn() const;
  void TurnOff() const;
  void SetInputChannel();
};

#endif
