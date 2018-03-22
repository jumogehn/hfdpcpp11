//===--- hottub_off_command.cpp - -------------------------------*- C++ -*-===//
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
#include "hottub_off_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  HottubOffCommand::HottubOffCommand( const Hottub* hottub ) :
    hottub_( hottub )
  {
    std::cout << "HottubOffCommand::HottubOffCommand" << std::endl;
    assert( hottub );
  }

  void HottubOffCommand::Execute() const
  {
    std::cout << "HottubOffCommand::execute" << std::endl;
    hottub_->Cool();
    hottub_->TurnOff();
  }


} //namespace headfirst
