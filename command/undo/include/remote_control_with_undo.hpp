//===--- RemoteControlWithUndo.hpp - ----------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_CONTROL_WITH_UNDO_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CONTROL_WITH_UNDO_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "command.hpp"


//
// This is the invoker
//
class RemoteControlWithUndo {

  static const int SLOTS = 7;

  Command* _onCommands[SLOTS];
  Command* _offCommands[SLOTS];
  Command* _noCommand;
  mutable Command* _undoCommand;

public:
  RemoteControlWithUndo();
  ~RemoteControlWithUndo();
  void setCommand( int slot, Command* onCommand, Command* offCommand );
  void onButtonWasPushed( int slot ) const;
  void offButtonWasPushed( int slot ) const;
  void undoButtonWasPushed() const;
  std::string toString() const;
};


#endif
