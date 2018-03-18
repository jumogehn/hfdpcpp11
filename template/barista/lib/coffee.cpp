//===--- coffee.cpp - -------------------------------------------*- C++ -*-===//
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
#include "coffee.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


void Coffee::Brew() const
{
  std::cout << "Coffee::brew" << std::endl;
  std::cout << "Dripping Coffee through filter" << std::endl;
}
void Coffee::AddCondiments() const
{
  std::cout << "Coffee::AddCondiments" << std::endl;
  std::cout << "Adding Sugar and Milk" << std::endl;
}
