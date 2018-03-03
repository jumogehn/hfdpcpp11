//===--- GarageDoorDownCommand.cpp - ----------------------------*- C++ -*-===//
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
#include "GarageDoorDownCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "GarageDoor.hpp"


GarageDoorDownCommand::GarageDoorDownCommand( const std::shared_ptr<GarageDoor> garageDoor ) :
  _garageDoor( garageDoor )
{
  assert( garageDoor );
  std::cout << "GarageDoorDownCommand::GarageDoorDownCommand" << std::endl;
}

void GarageDoorDownCommand::execute() const
{
  std::cout << "GarageDoorDownCommand::execute" << std::endl;
  _garageDoor->down();
}

