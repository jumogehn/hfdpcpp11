//===--- RedHeadDuck.cpp - --------------------------------------*- C++ -*-===//
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
#include "RedHeadDuck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"
#include "Utilities.hpp"

using namespace HFDP::Strategy;

RedHead::RedHead() : Duck( new FlyWithWings(), new Quack() )
{
  PrintMessage("RedHead::RedHead");
}
void RedHead::display() const
{
  PrintMessage("RedHead::display");
  std::cout << "I'm a real Red Headed duck" << std::endl;
}

