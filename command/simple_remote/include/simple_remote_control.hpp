//===--- simple_remote_control.hpp - ----------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CONTROL_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "command.hpp"


class SimpleRemoteControl {

  const Command* slot_;

public:
  SimpleRemoteControl();
  void SetCommand( const Command* command );
  void ButtonWasPressed() const;
};


#endif
