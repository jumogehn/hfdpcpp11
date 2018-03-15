//===--- RemoteControlWithUndo.cpp - ----------------------------*- C++ -*-===//
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
  _noCommand = new NoCommand();
  for( int i = 0; i < SLOTS; i++ ) {
    _onCommands[i] = _noCommand;
    _offCommands[i] = _noCommand;
  }
  _undoCommand = _noCommand;
}
RemoteControlWithUndo::~RemoteControlWithUndo()
{
  std::cout << "RemoteControlWithUndo::~RemoteControlWithUndo" << std::endl;
  delete _noCommand;
}
void RemoteControlWithUndo::setCommand( int slot, Command* onCommand, Command* offCommand )
{
  assert( slot <= SLOTS ); assert( onCommand ); assert( offCommand );
  std::cout << "RemoteControlWithUndo::setCommand" << std::endl;
  _onCommands[slot]  = onCommand;
  _offCommands[slot] = offCommand;
}
void RemoteControlWithUndo::onButtonWasPushed( int slot ) const
{
  assert( slot <= SLOTS );
  std::cout << "RemoteControlWithUndo::onButtonWasPushed" << std::endl;
  _onCommands[slot]->execute();
  _undoCommand = _onCommands[slot];
}
void RemoteControlWithUndo::offButtonWasPushed( int slot ) const
{
  assert( slot <= SLOTS );
  std::cout << "RemoteControlWithUndo::offButtonWasPushed" << std::endl;
  _offCommands[slot]->execute();
  _undoCommand = _offCommands[slot];
}
void RemoteControlWithUndo::undoButtonWasPushed() const
{
  std::cout << "RemoteControlWithUndo::undoButtonWasPushed" << std::endl;
  _undoCommand->undo();
}
std::string RemoteControlWithUndo::toString() const
{
  std::cout << "RemoteControlWithUndo::toString" << std::endl;
  std::stringstream value;
  value << std::endl << "------ Remote Control -------" << std::endl;
  for( int i = 0; i < SLOTS; i++ ) {
    value << "[slot " << i << "] ";
    value << typeid( *_onCommands[i] ).name();
    value << "    ";
    value << typeid( *_offCommands[i] ).name();
    value << std::endl;
  }
  value << "[undo] " << typeid( *_undoCommand ).name() << std::endl;

  return value.str();
}


