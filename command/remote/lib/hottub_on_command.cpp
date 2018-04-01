//===--- hottub_on_command.cpp - --------------------------------*- C++ -*-===//
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
#include "hottub_on_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "hottub.hpp"

namespace headfirst {


  HottubOnCommand::HottubOnCommand( const Hottub* hottub ) :
    hottub_( hottub )
  {
    assert( hottub_ );
    std::cout << "HottubOnCommand::HottubOnCommand" << std::endl;
  }

  void HottubOnCommand::Execute() const
  {
    assert( hottub_ );
    std::cout << "HottubOnCommand::HottubOnCommand" << std::endl;
    std::cout << "HottubOnCommand::execute" << std::endl;
    hottub_->TurnOn();
    hottub_->Heat();
    hottub_->BubblesOn();
  }

} //namespace headfirst
