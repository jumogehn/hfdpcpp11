//===--- Milk.hpp - ---------------------------------------------*- C++ -*-===//
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
#include "Milk.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


Milk::Milk(const Beverage* beverage) :
  _beverage(beverage)
{
  assert(beverage);
  std::cout << "Milk::Milk" << std::endl;
}
Milk::~Milk()
{
  std::cout << "Milk::~Milk" << std::endl;
}
std::string Milk::getDescription() const
{
  std::cout << "Milk::getDescription" << std::endl;
  return _beverage->getDescription() + ", Milk";
}
double Milk::cost() const
{
  std::cout << "Milk::cost" << std::endl;
  return 0.10 + _beverage->cost();
}
