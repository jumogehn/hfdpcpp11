//===--- Espresso.hpp - -----------------------------------------*- C++ -*-===//
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
#include "Espresso.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


Espresso::Espresso()
{
  std::cout << "Espresso::Espresso" << std::endl;
  _description = "Espresso";
}

double Espresso::cost() const
{
  std::cout << "Espresso::cost" << std::endl;
  return 1.99;
}
