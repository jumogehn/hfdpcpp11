//===--- MallardDuck.cpp - --------------------------------------*- C++ -*-===//
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
#include "mallard_duck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"
#include "fly_with_wings.hpp"
#include "quack.hpp"


MallardDuck::MallardDuck() : Duck(new FlyWithWings(), new Quack())
{
  std::cout << "MallardDuck::MallardDuck" << std::endl;
}
void MallardDuck::display() const
{
  std::cout << "MallardDuck::display" << std::endl;
  std::cout << "I'm a real Mallard duck" << std::endl;
}

