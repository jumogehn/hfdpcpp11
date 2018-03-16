//===--- wild_turkey.cpp - --------------------------------------*- C++ -*-===//
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
#include "wild_turkey.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


void WildTurkey::Fly() const
{
  std::cout << "WildTurkey::fly" << std::endl;
  std::cout << "I'm flying a short distance" << std::endl;
}

void WildTurkey::Gobble() const
{
  std::cout << "WildTurkey::gobble" << std::endl;
  std::cout << "Gobble gobble" << std::endl;
}

