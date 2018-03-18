//===--- remote_control_with_undo.cpp - -------------------------*- C++ -*-===//
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


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "remote_control_with_undo.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
#include <sstream>
#include <typeinfo>
//Other libraries' .h files.
//Your project's .h files.
#include "no_command.hpp"


RemoteControlWithUndo::RemoteControlWithUndo()
{
  std::cout << "RemoteControlWithUndo::RemoteControlWithUndo" << std::endl;
  no_command_ = new NoCommand();
  for( int i = 0; i < kSlots; i++ ) {
    on_commands_[i] = no_command_;
    off_commands_[i] = no_command_;
  }
  undo_command_ = no_command_;
}
RemoteControlWithUndo::~RemoteControlWithUndo()
{
  std::cout << "RemoteControlWithUndo::~RemoteControlWithUndo" << std::endl;
  delete no_command_;
}
void RemoteControlWithUndo::SetCommand( int slot, Command* on_command,
                                        Command* off_command )
{
  assert( slot <= kSlots ); assert( on_command ); assert( off_command );
  std::cout << "RemoteControlWithUndo::SetCommand" << std::endl;
  on_commands_[slot]  = on_command;
  off_commands_[slot] = off_command;
}
void RemoteControlWithUndo::OnButtonWasPushed( int slot ) const
{
  assert( slot <= kSlots );
  std::cout << "RemoteControlWithUndo::OnButtonWasPushed" << std::endl;
  on_commands_[slot]->Execute();
  undo_command_ = on_commands_[slot];
}
void RemoteControlWithUndo::OffButtonWasPushed( int slot ) const
{
  assert( slot <= kSlots );
  std::cout << "RemoteControlWithUndo::OffButtonWasPushed" << std::endl;
  off_commands_[slot]->Execute();
  undo_command_ = off_commands_[slot];
}
void RemoteControlWithUndo::UndoButtonWasPushed() const
{
  std::cout << "RemoteControlWithUndo::UndoButtonWasPushed" << std::endl;
  undo_command_->Undo();
}
std::string RemoteControlWithUndo::ToString() const
{
  std::cout << "RemoteControlWithUndo::toString" << std::endl;
  std::stringstream value;
  value << std::endl << "------ Remote Control -------" << std::endl;
  for( int i = 0; i < kSlots; i++ ) {
    value << "[slot " << i << "] ";
    value << typeid( *on_commands_[i] ).name();
    value << "    ";
    value << typeid( *off_commands_[i] ).name();
    value << std::endl;
  }
  value << "[undo] " << typeid( *undo_command_ ).name() << std::endl;

  return value.str();
}


