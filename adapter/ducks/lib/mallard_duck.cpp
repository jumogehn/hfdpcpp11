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


void MallardDuck::Fly() const
{
  std::cout << "MallardDuck::fly" << std::endl;
  std::cout << "I'm flying" << std::endl;
}

void MallardDuck::Quack() const
{
  std::cout << "MallardDuck::quack" << std::endl;
  std::cout << "Quack" << std::endl;
}

