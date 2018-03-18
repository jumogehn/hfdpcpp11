#//===--- remote_control.cpp - ----------------------------------*- C++ -*-===//
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
#include "remote_control.hpp"
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



RemoteControl::RemoteControl()
{
  std::cout << "RemoteControl::RemoteControl" << std::endl;
  no_command_ = new NoCommand();
  for( int i = 0; i < kSlots; i++ ) {
    on_commands_[i]  = no_command_;
    off_commands_[i] = no_command_;
  }
}

RemoteControl::~RemoteControl()
{
  std::cout << "RemoteControl::~RemoteControl" << std::endl;
  delete no_command_;
}

void RemoteControl::SetCommand( int slot, Command* on_command,
                                Command* off_command )
{
  std::cout << "RemoteControl::SetCommand" << std::endl;
  assert( slot <= kSlots ); assert( on_command ); assert ( off_command );
  on_commands_[slot] = on_command;
  off_commands_[slot] = off_command;
}

void RemoteControl::OnButtonWasPushed( int slot ) const
{
  std::cout << "RemoteControl::OnButtonWasPushed" << std::endl;
  assert( slot <= kSlots );
  on_commands_[slot]->Execute();
}

void RemoteControl::OffButtonWasPushed( int slot ) const
{
  std::cout << "RemoteControl::OffButtonWasPushed" << std::endl;
  assert( slot <= kSlots );
  off_commands_[slot]->Execute();
}

std::string RemoteControl::ToString() const
{
  std::cout << "RemoteControl::ToString" << std::endl;
  std::stringstream value;
  value << "\n------ Remote Control -------\n" << std::endl;
  for( int i = 0; i < kSlots; i++ ) {
    value << "[slot " << i << "] ";
    value << typeid( *on_commands_[i] ).name();
    value << "    ";
    value << typeid( *off_commands_[i] ).name();
    value << std::endl;
  }
  return value.str();
}


