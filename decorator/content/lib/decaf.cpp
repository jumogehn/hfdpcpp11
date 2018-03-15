//===--- Decaf.hpp - --------------------------------------------*- C++ -*-===//
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
#include "decaf.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


Decaf::Decaf()
{
  std::cout << "Decaf::Decaf" << std::endl;
  _description = "Decaf Coffee";
}

double Decaf::cost() const
{
  std::cout << "Decaf::cost" << std::endl;
  return 1.05;
}
