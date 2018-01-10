//===--- Soy.hpp - ----------------------------------------------*- C++ -*-===//
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
#include "Soy.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


Soy::Soy(const Beverage* beverage) :
  _beverage(beverage)
{
  assert(beverage);
  std::cout << "Soy::Soy" << std::endl;
}
Soy::~Soy()
{
  std::cout << "Soy::~Soy" << std::endl;
  delete _beverage;
}
std::string Soy::getDescription() const
{
  std::cout << "Soy::getDescription" << std::endl;
  return _beverage->getDescription() + ", Soy";
}
double Soy::cost() const
{
  std::cout << "Soy::cost" << std::endl;
  return 0.15 + _beverage->cost();
}

