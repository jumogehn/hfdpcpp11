//===--- SimpleRemoteControl.cpp - ------------------------------*- C++ -*-===//
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
#include "SimpleRemoteControl.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <cstddef>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.



SimpleRemoteControl::SimpleRemoteControl() :
  _slot( nullptr )
{
  std::cout << "SimpleRemoteControl::SimpleRemoteControl" << std::endl;
}
void SimpleRemoteControl::setCommand( const std::shared_ptr<Command> command )
{
  assert( command );
  std::cout << "SimpleRemoteControl::setCommand" << std::endl;
  _slot = command;
}
void SimpleRemoteControl::buttonWasPressed() const
{
  assert( _slot );
  std::cout << "SimpleRemoteControl::buttonWasPressed" << std::endl;
  _slot->execute();
}


