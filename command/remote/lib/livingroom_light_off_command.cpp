//===--- LivingroomLightOffCommand.cpp - ------------------------*- C++ -*-===//
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
#include "livingroom_light_off_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


LivingroomLightOffCommand::LivingroomLightOffCommand( const Light* light ) :
  light_( light )
{
  assert( light );
  std::cout << "LivingroomLightOffCommand::"
                     "LivingroomLightOffCommand" << std::endl;
}

void LivingroomLightOffCommand::Execute() const
{
  std::cout << "LivingroomLightOffCommand::execute" << std::endl;
  light_->TurnOff();
}


