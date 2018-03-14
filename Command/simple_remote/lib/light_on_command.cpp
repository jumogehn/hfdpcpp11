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
#include "light_on_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.



LightOnCommand::LightOnCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  std::cout << "LightOnCommand::LightOnCommand" << std::endl;
}
void LightOnCommand::execute() const
{
  std::cout << "LightOnCommand::execute" << std::endl;
  _light->on();
}

