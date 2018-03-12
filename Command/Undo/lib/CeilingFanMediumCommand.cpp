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
#include "CeilingFanMediumCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


CeilingFanMediumCommand::CeilingFanMediumCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  std::cout << "CeilingFanMediumCommand"
                     "::CeilingFanMediumCommand" << std::endl;
  _prevSpeed = _ceilingFan->getSpeed();
}
void CeilingFanMediumCommand::execute() const
{
  std::cout << "CeilingFanMediumCommand::execute" << std::endl;
  _prevSpeed = _ceilingFan->getSpeed();
  _ceilingFan->medium();
}
void CeilingFanMediumCommand::undo() const
{
  std::cout << "CeilingFanMediumCommand::undo" << std::endl;
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

