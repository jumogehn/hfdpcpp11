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


CeilingFanHighCommand::CeilingFanHighCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  std::cout << "CeilingFanHighCommand::CeilingFanHighCommand" << std::endl;
  _prevSpeed = _ceilingFan->getSpeed();
}
void CeilingFanHighCommand::execute() const
{
  std::cout << "CeilingFanHighCommand::execute" << std::endl;
  _prevSpeed = _ceilingFan->getSpeed();
  _ceilingFan->high();
}
void CeilingFanHighCommand::undo() const
{
  std::cout << "CeilingFanHighCommand::undo" << std::endl;
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
