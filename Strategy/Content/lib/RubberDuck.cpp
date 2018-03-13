//===--- RubberDuck.cpp - ---------------------------------------*- C++ -*-===//
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
#include "RubberDuck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "Squeak.hpp"


RubberDuck::RubberDuck() : Duck(new FlyNoWay(), new Squeak())
{
  std::cout << "RubberDuck::RubberDuck" << std::endl;
}
void RubberDuck::display() const
{
  std::cout << "RubberDuck::display" << std::endl;
  std::cout << "I'm a rubber duck" << std::endl;
}

