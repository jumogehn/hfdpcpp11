//===--- soy.hpp - ----------------------------------------------*- C++ -*-===//
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
#include "soy.hpp"
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


  Soy::Soy(std::unique_ptr<Beverage> beverage) :
    beverage_(std::move(beverage))
  {
    assert(beverage_);
    std::cout << "Soy::Soy" << std::endl;
  }
  Soy::~Soy()
  {
    std::cout << "Soy::~Soy" << std::endl;
  }
  std::string Soy::GetDescription() const
  {
    assert(beverage_);
    std::cout << "Soy::GetDescription" << std::endl;
    return beverage_->GetDescription() + ", Soy";
  }
  double Soy::Cost() const
  {
    assert(beverage_);
    std::cout << "Soy::cost" << std::endl;
    return 0.15 + beverage_->Cost();
  }

} //namespace headfirst
