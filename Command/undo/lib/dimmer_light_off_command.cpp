//===--- DimmerLightOffCommand.cpp - ----------------------------*- C++ -*-===//
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
#include "dimmer_light_off_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


DimmerLightOffCommand::DimmerLightOffCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  std::cout << "DimmerLightOffCommand::DimmerLightOffCommand" << std::endl;
  _prevLevel = _light->getLevel();
}
void DimmerLightOffCommand::execute() const
{
  std::cout << "DimmerLightOffCommand::execute" << std::endl;
  _prevLevel = _light->getLevel();
  _light->off();
}
void DimmerLightOffCommand::undo() const
{
  std::cout << "DimmerLightOffCommand::undo" << std::endl;
  _light->dim( _prevLevel );
}

