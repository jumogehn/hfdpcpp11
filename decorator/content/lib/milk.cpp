//===--- milk.hpp - ---------------------------------------------*- C++ -*-===//
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
#include "milk.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


Milk::Milk(const Beverage* beverage) :
  beverage_(beverage)
{
  assert(beverage);
  std::cout << "Milk::Milk" << std::endl;
}
Milk::~Milk()
{
  std::cout << "Milk::~Milk" << std::endl;
}
std::string Milk::GetDescription() const
{
  std::cout << "Milk::GetDescription" << std::endl;
  return beverage_->GetDescription() + ", Milk";
}
double Milk::Cost() const
{
  std::cout << "Milk::cost" << std::endl;
  return 0.10 + beverage_->Cost();
}
