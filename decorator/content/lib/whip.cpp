//===--- Whip.hpp - ---------------------------------------------*- C++ -*-===//
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
#include "whip.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


Whip::Whip(const Beverage* beverage) :
  _beverage(beverage)
{
  assert(beverage);
  std::cout << "Whip::Whip" << std::endl;
}
Whip::~Whip() {
  std::cout << "Whip::~Whip" << std::endl;
}
std::string Whip::getDescription() const
{
  std::cout << "Whip::getDescription" << std::endl;
  return _beverage->getDescription() + ", Whip";
}
double Whip::cost() const
{
  std::cout << "Whip::cost" << std::endl;
  return 0.10 + _beverage->cost();
}

