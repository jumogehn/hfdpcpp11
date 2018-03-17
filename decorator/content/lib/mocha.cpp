//===--- mocha.hpp - --------------------------------------------*- C++ -*-===//
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
#include "mocha.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


Mocha::Mocha(const Beverage* beverage) :
  beverage_(beverage)
{
  assert(beverage);
  std::cout << "Mocha::Mocha" << std::endl;
}
Mocha::~Mocha()
{
  std::cout << "Mocha::~Mocha" << std::endl;
}
std::string Mocha::GetDescription() const
{
  std::cout << "Mocha::GetDescription" << std::endl;
  return beverage_->GetDescription() + ", Mocha";
}
double Mocha::Cost() const
{
  std::cout << "Mocha::cost" << std::endl;
  return 0.20 + beverage_->Cost();
}

