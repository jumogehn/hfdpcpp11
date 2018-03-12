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
#include "CeilingFan.hpp"


CeilingFanOffCommand::CeilingFanOffCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  std::cout << "CeilingFanOffCommand::CeilingFanOffCommand" << std::endl;
}
void CeilingFanOffCommand::execute() const
{
  std::cout << "CeilingFanOffCommand::execute" << std::endl;
  _ceilingFan->off();
}

