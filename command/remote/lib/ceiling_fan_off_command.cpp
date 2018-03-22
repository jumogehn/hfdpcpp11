//===--- ceiling_fan_off_command.cpp - --------------------------*- C++ -*-===//
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
#include "ceiling_fan_off_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "ceiling_fan.hpp"


namespace headfirst {

  CeilingFanOffCommand::CeilingFanOffCommand( const CeilingFan* ceiling_fan ) :
    ceiling_fan_( ceiling_fan )
  {
    assert( ceiling_fan );
    std::cout << "CeilingFanOffCommand::CeilingFanOffCommand" << std::endl;
  }
  void CeilingFanOffCommand::Execute() const
  {
    std::cout << "CeilingFanOffCommand::execute" << std::endl;
    ceiling_fan_->TurnOff();
  }

} //namespace headfirst
