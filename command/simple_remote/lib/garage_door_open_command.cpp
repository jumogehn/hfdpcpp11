//===--- GarageDoorOpenCommand.cpp - ----------------------------*- C++ -*-===//
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
#include "garage_door_open_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


GarageDoorOpenCommand::GarageDoorOpenCommand( const GarageDoor* garage_door) :
  garage_door_( garage_door )
{
  assert( garage_door );
  std::cout << "GarageDoorOpenCommand::GarageDoorOpenCommand" << std::endl;
}
void GarageDoorOpenCommand::Execute() const
{
  std::cout << "GarageDoorOpenCommand::execute" << std::endl;
  garage_door_->OpenUp();
}

