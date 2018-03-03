//===--- RemoteControl.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "Command.hpp"


//
// This is the invoker
//
class RemoteControl {

  static const int SLOTS = 7;

  std::shared_ptr<Command> _onCommands[SLOTS];
  std::shared_ptr<Command> _offCommands[SLOTS];
  std::shared_ptr<Command> _noCommand;

  RemoteControl( const RemoteControl& ); // Disable copy constructor
  void operator=( const RemoteControl& ); // Disable assignment operator

public:
  RemoteControl();
  ~RemoteControl();
  void setCommand( int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand );
  void onButtonWasPushed( int slot ) const;
  void offButtonWasPushed( int slot ) const;
  std::string toString() const;
};


#endif
