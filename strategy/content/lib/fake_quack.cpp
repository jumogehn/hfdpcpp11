//===--- fake_quack.cpp - ---------------------------------------*- C++ -*-===//
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
#include "fake_quack.hpp"
//c system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


void FakeQuack::quack() const
{
  std::cout << "FakeQuack::quack" << std::endl;
  std::cout << "Qwak" << std::endl;
}

