//===--- Beverage.hpp - -----------------------------------------*- C++ -*-===//
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
#include "Beverage.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


Beverage::Beverage() :
  _description("Unknown Beverage")
{
  std::cout << "Beverage::Beverage" << std::endl;
}
Beverage::~Beverage()
{
  std::cout << "Beverage::~Beverage" << std::endl;
}
std::string Beverage::getDescription() const
{
  std::cout << "Beverage::getDescription" << std::endl;
  return _description;
}
