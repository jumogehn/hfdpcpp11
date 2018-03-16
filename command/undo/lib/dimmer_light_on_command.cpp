//===--- dimmer_light_on_command.cpp - --------------------------*- C++ -*-===//
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
#include "dimmer_light_on_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


DimmerLightOnCommand::DimmerLightOnCommand( const Light* light ) :
  light_( light )
{
  assert( light );
  std::cout << "DimmerLightOnCommand::DimmerLightOnCommand" << std::endl;
  prev_level_ = light_->GetLevel();
}
void DimmerLightOnCommand::Execute() const
{
  std::cout << "DimmerLightOnCommand::execute" << std::endl;
  prev_level_ = light_->GetLevel();
  light_->Dim( 75 );
}
void DimmerLightOnCommand::Undo() const
{
  std::cout << "DimmerLightOnCommand::undo" << std::endl;
  light_->Dim( prev_level_ );
}

