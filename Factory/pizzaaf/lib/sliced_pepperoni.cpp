//===--- SlicedPepperoni.cpp - ----------------------------------*- C++ -*-===//
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
#include "sliced_pepperoni.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


std::string SlicedPepperoni::toString() const
{
  std::cout << "SlicedPepperoni::toString" << std::endl;
  return "Sliced Pepperoni";
}
