//===--- LightOnCommand.cpp - -----------------------------------*- C++ -*-===//
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
#include "LightOnCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.



LightOnCommand::LightOnCommand( const std::shared_ptr<Light> light) :
  _light(light)
{
  assert(light);
  std::cout << "LightOnCommand::LightOnCommand" << std::endl;
}
void LightOnCommand::execute() const
{
  std::cout << "LightOnCommand::execute" << std::endl;
  _light->on();
}
void LightOnCommand::undo() const
{
  std::cout << "LightOnCommand::undo" << std::endl;
  _light->off();
}


