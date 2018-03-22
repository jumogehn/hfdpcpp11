//===--- livingroom_light_on_command.cpp - ----------------------*- C++ -*-===//
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
#include "livingroom_light_on_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  LivingroomLightOnCommand::LivingroomLightOnCommand( const Light* light ) :
    light_( light )
  {
    assert( light );
    std::cout << "LivingroomLightOnCommand::"
      "LivingroomLightOnCommand" << std::endl;
  }

  void LivingroomLightOnCommand::Execute() const
  {
    std::cout << "LivingroomLightOnCommand::execute" << std::endl;
    light_->TurnOn();
  }

} //namespace headfirst
