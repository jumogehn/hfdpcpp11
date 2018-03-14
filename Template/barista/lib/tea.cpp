//===--- Tea.cpp - ----------------------------------------------*- C++ -*-===//
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
#include "tea.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


void Tea::brew() const
{
  std::cout << "Tea::brew" << std::endl;
  std::cout << "Steeping the tea" << std::endl;
}
void Tea::addCondiments() const
{
  std::cout << "Tea::addCondiments" << std::endl;
  std::cout << "Adding Lemon" << std::endl;
}
