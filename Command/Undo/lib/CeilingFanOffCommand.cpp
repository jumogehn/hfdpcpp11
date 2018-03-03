//===--- CeilingFanOffCommand.cpp - -----------------------------*- C++ -*-===//
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
#include "CeilingFanOffCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


CeilingFanOffCommand::CeilingFanOffCommand( const std::shared_ptr<CeilingFan> ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  std::cout << "CeilingFanOffCommand::CeilingFanOffCommand" << std::endl;
  _prevSpeed = _ceilingFan->getSpeed();
}
void CeilingFanOffCommand::execute() const
{
  std::cout << "CeilingFanOffCommand::execute" << std::endl;
  _prevSpeed = _ceilingFan->getSpeed();
  _ceilingFan->off();
}
void CeilingFanOffCommand::undo() const
{
  std::cout << "CeilingFanOffCommand::undo" << std::endl;
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

