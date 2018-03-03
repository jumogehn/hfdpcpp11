//===--- LightOffCommand.cpp - ----------------------------------*- C++ -*-===//
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
#include "LightOffCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


LightOffCommand::LightOffCommand( const std::shared_ptr<Light> light ) :
  _light( light )
{
  assert( light );
  std::cout << "LightOffCommand::LightOffCommand" << std::endl;
}
void LightOffCommand::execute() const
{
  std::cout << "LightOffCommand::execute" << std::endl;
  _light->off();
}
void LightOffCommand::undo() const
{
  std::cout << "LightOffCommand::undo" << std::endl;
  _light->on();
}


