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
#include "GarageDoorOpenCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


GarageDoorOpenCommand::GarageDoorOpenCommand( const GarageDoor* garageDoor) :
  _garageDoor( garageDoor )
{
  assert( garageDoor );
  std::cout << "GarageDoorOpenCommand::GarageDoorOpenCommand" << std::endl;
}
void GarageDoorOpenCommand::execute() const
{
  std::cout << "GarageDoorOpenCommand::execute" << std::endl;
  _garageDoor->up();
}

