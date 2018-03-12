//===--- HottubOnCommand.cpp - ----------------------------------*- C++ -*-===//
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
#include "HottubOnCommand.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Hottub.hpp"


HottubOnCommand::HottubOnCommand( const Hottub* hottub ) :
  _hottub( hottub )
{
  std::cout << "HottubOnCommand::HottubOnCommand" << std::endl;
  assert( hottub );
}

void HottubOnCommand::execute() const
{
  std::cout << "HottubOnCommand::execute" << std::endl;
  _hottub->on();
  _hottub->heat();
  _hottub->bubblesOn();
}

