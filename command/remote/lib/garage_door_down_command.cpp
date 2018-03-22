//===--- garage_door_down_command.cpp - -------------------------*- C++ -*-===//
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
#include "garage_door_down_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "garage_door.hpp"

namespace headfirst {


  GarageDoorDownCommand::GarageDoorDownCommand( const GarageDoor* garage_door ) :
    garage_door_( garage_door )
  {
    assert( garage_door );
    std::cout << "GarageDoorDownCommand::GarageDoorDownCommand" << std::endl;
  }

  void GarageDoorDownCommand::Execute() const
  {
    std::cout << "GarageDoorDownCommand::execute" << std::endl;
    garage_door_->CloseDown();
  }

} //namespace headfirst
