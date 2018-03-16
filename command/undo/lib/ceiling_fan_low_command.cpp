//===--- ceiling_fan_low_command.cpp - --------------------------*- C++ -*-===//
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
#include "ceiling_fan_low_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


CeilingFanLowCommand::CeilingFanLowCommand( const CeilingFan* ceiling_fan ) :
  ceiling_fan_( ceiling_fan )
{
  std::cout << "CeilingFanLowCommand::CeilingFanLowCommand" << std::endl;
  assert( ceiling_fan );
  prev_speed_ = ceiling_fan_->GetSpeed();
}
void CeilingFanLowCommand::Execute() const
{
  std::cout << "CeilingFanLowCommand::execute" << std::endl;
  prev_speed_ = ceiling_fan_->GetSpeed();
  ceiling_fan_->SetLow();
}
void CeilingFanLowCommand::Undo() const
{
  std::cout << "CeilingFanLowCommand::undo" << std::endl;
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

