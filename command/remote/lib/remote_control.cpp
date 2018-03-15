#//===--- RemoteControl.cpp - -----------------------------------*- C++ -*-===//
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
  _noCommand = new NoCommand();
  for( int i = 0; i < SLOTS; i++ ) {
    _onCommands[i]  = _noCommand;
    _offCommands[i] = _noCommand;
  }
}

RemoteControl::~RemoteControl()
{
  std::cout << "RemoteControl::~RemoteControl" << std::endl;
  delete _noCommand;
}

void RemoteControl::setCommand( int slot, Command* onCommand, Command* offCommand )
{
  std::cout << "RemoteControl::setCommand" << std::endl;
  assert( slot <= SLOTS ); assert( onCommand ); assert ( offCommand );
  _onCommands[slot] = onCommand;
  _offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed( int slot ) const
{
  std::cout << "RemoteControl::onButtonWasPushed" << std::endl;
  assert( slot <= SLOTS );
  _onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed( int slot ) const
{
  std::cout << "RemoteControl::offButtonWasPushed" << std::endl;
  assert( slot <= SLOTS );
  _offCommands[slot]->execute();
}

std::string RemoteControl::toString() const
{
  std::cout << "RemoteControl::toString" << std::endl;
  std::stringstream value;
  value << "\n------ Remote Control -------\n" << std::endl;
  for( int i = 0; i < SLOTS; i++ ) {
    value << "[slot " << i << "] ";
    value << typeid( *_onCommands[i] ).name();
    value << "    ";
    value << typeid( *_offCommands[i] ).name();
    value << std::endl;
  }
  return value.str();
}


