//===--- CeilingFanMediumCommand.cpp - --------------------------*- C++ -*-===//
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
#include "ceiling_fan_medium_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


CeilingFanMediumCommand::CeilingFanMediumCommand( const CeilingFan* ceiling_fan ) :
  ceiling_fan_( ceiling_fan )
{
  assert( ceiling_fan );
  std::cout << "CeilingFanMediumCommand"
                     "::CeilingFanMediumCommand" << std::endl;
  prev_speed_ = ceiling_fan_->GetSpeed();
}
void CeilingFanMediumCommand::Execute() const
{
  std::cout << "CeilingFanMediumCommand::execute" << std::endl;
  prev_speed_ = ceiling_fan_->GetSpeed();
  ceiling_fan_->SetMedium();
}
void CeilingFanMediumCommand::Undo() const
{
  std::cout << "CeilingFanMediumCommand::undo" << std::endl;
  if( prev_speed_ == CeilingFan::kHigh ) {
    ceiling_fan_->SetHigh();
  } else if( prev_speed_ == CeilingFan::kMedium ) {
    ceiling_fan_->SetMedium();
  } else if( prev_speed_ == CeilingFan::kLow ) {
    ceiling_fan_->SetLow();
  } else if( prev_speed_ == CeilingFan::kOff ) {
    ceiling_fan_->TurnOff();
  }
}

