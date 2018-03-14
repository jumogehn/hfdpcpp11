//===--- CeilingFanLowCommand.cpp - -----------------------------*- C++ -*-===//
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


CeilingFanLowCommand::CeilingFanLowCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  std::cout << "CeilingFanLowCommand::CeilingFanLowCommand" << std::endl;
  assert( ceilingFan );
  _prevSpeed = _ceilingFan->getSpeed();
}
void CeilingFanLowCommand::execute() const
{
  std::cout << "CeilingFanLowCommand::execute" << std::endl;
  _prevSpeed = _ceilingFan->getSpeed();
  _ceilingFan->low();
}
void CeilingFanLowCommand::undo() const
{
  std::cout << "CeilingFanLowCommand::undo" << std::endl;
  if( _prevSpeed == CeilingFan::HIGH ) {
    _ceilingFan->high();
  } else if( _prevSpeed == CeilingFan::MEDIUM ) {
    _ceilingFan->medium();
  } else if( _prevSpeed == CeilingFan::LOW ) {
    _ceilingFan->low();
  } else if( _prevSpeed == CeilingFan::OFF ) {
    _ceilingFan->off();
  }
}

