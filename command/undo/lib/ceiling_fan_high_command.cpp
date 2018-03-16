//===--- CeilingFanHighCommand.cpp - ----------------------------*- C++ -*-===//
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
#include "ceiling_fan_high_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


CeilingFanHighCommand::CeilingFanHighCommand( const CeilingFan* ceiling_fan ) :
  ceiling_fan_( ceiling_fan )
{
  assert( ceiling_fan );
  std::cout << "CeilingFanHighCommand::CeilingFanHighCommand" << std::endl;
  prev_speed_ = ceiling_fan_->GetSpeed();
}
void CeilingFanHighCommand::Execute() const
{
  std::cout << "CeilingFanHighCommand::execute" << std::endl;
  prev_speed_ = ceiling_fan_->GetSpeed();
  ceiling_fan_->SetHigh();
}
void CeilingFanHighCommand::Undo() const
{
  std::cout << "CeilingFanHighCommand::undo" << std::endl;
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
