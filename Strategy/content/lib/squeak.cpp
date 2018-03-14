//===--- Squeak.cpp - -------------------------------------------*- C++ -*-===//
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
#include "squeak.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

void Squeak::quack() const
{
  std::cout << "Squeak::quack" << std::endl;
  std::cout << "Squeak" << std::endl;
}

