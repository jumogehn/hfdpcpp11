//===--- dimmer_light_off_command.cpp - -------------------------*- C++ -*-===//
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

namespace headfirst {


  DimmerLightOffCommand::DimmerLightOffCommand( const Light* light ) :
    light_( light )
  {
    assert( light );
    std::cout << "DimmerLightOffCommand::DimmerLightOffCommand" << std::endl;
    prev_level_ = light_->GetLevel();
  }
  void DimmerLightOffCommand::Execute() const
  {
    std::cout << "DimmerLightOffCommand::execute" << std::endl;
    prev_level_ = light_->GetLevel();
    light_->TurnOff();
  }
  void DimmerLightOffCommand::Undo() const
  {
    std::cout << "DimmerLightOffCommand::undo" << std::endl;
    light_->Dim( prev_level_ );
  }

} //namespace headfirst
