//===--- fly_with_wings.cpp - -----------------------------------*- C++ -*-===//
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
#include "fly_with_wings.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


void FlyWithWings::fly() const
{
  std::cout << "FlyWithWings::fly" << std::endl;
  std::cout << "I'm flying!!" << std::endl;
}

