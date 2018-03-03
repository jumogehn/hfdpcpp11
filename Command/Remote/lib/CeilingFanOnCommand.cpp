//===--- CeilingFanOnCommand.cpp - ------------------------------*- C++ -*-===//
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
#include "CeilingFanOnCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "CeilingFan.hpp"


CeilingFanOnCommand::CeilingFanOnCommand( const std::shared_ptr<CeilingFan> ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  std::cout << "CeilingFanOnCommand::CeilingFanOnCommand" << std::endl;
}

void CeilingFanOnCommand::execute() const
{
  std::cout << "CeilingFanOnCommand::execute" << std::endl;
  _ceilingFan->high();
}

