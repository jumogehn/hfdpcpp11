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
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "Squeak.hpp"
#include "Utilities.hpp"


RubberDuck::RubberDuck() : Duck(std::make_shared<FlyNoWay>(), std::make_shared<Squeak>())
{
  PrintMessage("RubberDuck::RubberDuck");
}
void RubberDuck::display() const
{
  PrintMessage("RubberDuck::display");
  std::cout << "I'm a rubber duck" << std::endl;
}

