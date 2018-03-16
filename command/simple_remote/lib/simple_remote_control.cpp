//===--- simple_remote_control.cpp - ----------------------------*- C++ -*-===//
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
#include "simple_remote_control.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <cstddef>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.



SimpleRemoteControl::SimpleRemoteControl() :
  slot_( nullptr )
{
  std::cout << "SimpleRemoteControl::SimpleRemoteControl" << std::endl;
}
void SimpleRemoteControl::SetCommand( const Command* command )
{
  assert( command );
  std::cout << "SimpleRemoteControl::SetCommand" << std::endl;
  slot_ = command;
}
void SimpleRemoteControl::ButtonWasPressed() const
{
  assert( slot_ );
  std::cout << "SimpleRemoteControl::buttonWasPressed" << std::endl;
  slot_->Execute();
}


