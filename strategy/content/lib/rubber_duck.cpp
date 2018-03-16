//===--- rubber_duck.cpp - --------------------------------------*- C++ -*-===//
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
#include "rubber_duck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"
#include "fly_no_way.hpp"
#include "squeak.hpp"


RubberDuck::RubberDuck() : Duck(new FlyNoWay(), new Squeak())
{
  std::cout << "RubberDuck::RubberDuck" << std::endl;
}
void RubberDuck::display() const
{
  std::cout << "RubberDuck::display" << std::endl;
  std::cout << "I'm a rubber duck" << std::endl;
}

