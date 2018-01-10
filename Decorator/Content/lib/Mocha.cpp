//===--- Mocha.hpp - --------------------------------------------*- C++ -*-===//
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
#include "Mocha.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


Mocha::Mocha(std::shared_ptr<const Beverage> beverage) :
  _beverage(beverage)
{
  assert(beverage);
  std::cout << "Mocha::Mocha" << std::endl;
}
Mocha::~Mocha()
{
  std::cout << "Mocha::~Mocha" << std::endl;
}
std::string Mocha::getDescription() const
{
  std::cout << "Mocha::getDescription" << std::endl;
  return _beverage->getDescription() + ", Mocha";
}
double Mocha::cost() const
{
  std::cout << "Mocha::cost" << std::endl;
  return 0.20 + _beverage->cost();
}

