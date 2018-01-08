//===--- FakeQuack.cpp - ----------------------------------------*- C++ -*-===//
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
#include "FakeQuack.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Utilities.hpp"

using namespace HFDP::Strategy;

void FakeQuack::quack () const
{
  PrintMessage("FakeQuack::quack");
  std::cout << "Qwak" << std::endl;
}

