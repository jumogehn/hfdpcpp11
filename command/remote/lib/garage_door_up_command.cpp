//===--- garage_door_up_command.cpp - ---------------------------*- C++ -*-===//
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
#include "garage_door_up_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "garage_door.hpp"

namespace headfirst {


  GarageDoorUpCommand::GarageDoorUpCommand( const GarageDoor* garage_door ) :
    garage_door_( garage_door )
  {
    assert( garage_door_ );
    std::cout << "GarageDoorUpCommand::GarageDoorUpCommand" << std::endl;
  }

  void GarageDoorUpCommand::Execute() const
  {
    assert( garage_door_ );
    std::cout << "GarageDoorUpCommand::execute" << std::endl;
    garage_door_->OpenUp();
  }

} //namespace headfirst
