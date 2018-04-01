//===--- ceiling_fan_on_command.cpp - ---------------------------*- C++ -*-===//
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
#include "ceiling_fan_on_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "ceiling_fan.hpp"

namespace headfirst {


  CeilingFanOnCommand::CeilingFanOnCommand( const CeilingFan* ceiling_fan ) :
    ceiling_fan_( ceiling_fan )
  {
    assert( ceiling_fan_ );
    std::cout << "CeilingFanOnCommand::CeilingFanOnCommand" << std::endl;
  }

  void CeilingFanOnCommand::Execute() const
  {
    assert( ceiling_fan_ );
    std::cout << "CeilingFanOnCommand::execute" << std::endl;
    ceiling_fan_->SetHigh();
  }

} //namespace headfirst
