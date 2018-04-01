//===--- light_off_command.cpp - --------------------------------*- C++ -*-===//
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
#include "light_off_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  LightOffCommand::LightOffCommand( const Light* light ) :
    light_( light )
  {
    assert( light_ );
    std::cout << "LightOffCommand::LightOffCommand" << std::endl;
  }
  void LightOffCommand::Execute() const
  {
    assert( light_ );
    std::cout << "LightOffCommand::execute" << std::endl;
    light_->Off();
  }


} //namespace headfirst
