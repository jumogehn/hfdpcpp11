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
#include <memory>
#include <string>
#include <utility>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  Milk::Milk(std::unique_ptr<Beverage> beverage) :
    beverage_(std::move(beverage))
  {
    assert(beverage_);
    std::cout << "Milk::Milk" << std::endl;
  }
  Milk::~Milk()
  {
    std::cout << "Milk::~Milk" << std::endl;
  }
  std::string Milk::GetDescription() const
  {
    assert(beverage_);
    std::cout << "Milk::GetDescription" << std::endl;
    return beverage_->GetDescription() + ", Milk";
  }
  double Milk::Cost() const
  {
    assert(beverage_);
    std::cout << "Milk::cost" << std::endl;
    return 0.10 + beverage_->Cost();
  }
} //namespace headfirst
