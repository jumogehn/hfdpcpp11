//===--- LivingroomLightOnCommand.cpp - -------------------------*- C++ -*-===//
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
#include "LivingroomLightOnCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


LivingroomLightOnCommand::LivingroomLightOnCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  std::cout << "LivingroomLightOnCommand::"
                     "LivingroomLightOnCommand" << std::endl;
}

void LivingroomLightOnCommand::execute() const
{
  std::cout << "LivingroomLightOnCommand::execute" << std::endl;
  _light->on();
}

