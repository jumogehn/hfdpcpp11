//===--- DimmerLightOnCommand.cpp - -----------------------------*- C++ -*-===//
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
#include "DimmerLightOnCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


DimmerLightOnCommand::DimmerLightOnCommand( const std::shared_ptr<Light> light ) :
  _light( light )
{
  assert( light );
  std::cout << "DimmerLightOnCommand::DimmerLightOnCommand" << std::endl;
  _prevLevel = _light->getLevel();
}
void DimmerLightOnCommand::execute() const
{
  std::cout << "DimmerLightOnCommand::execute" << std::endl;
  _prevLevel = _light->getLevel();
  _light->dim( 75 );
}
void DimmerLightOnCommand::undo() const
{
  std::cout << "DimmerLightOnCommand::undo" << std::endl;
  _light->dim( _prevLevel );
}

