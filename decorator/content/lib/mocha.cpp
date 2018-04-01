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
#include <utility>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  Mocha::Mocha(std::unique_ptr<Beverage> beverage) :
    beverage_ (std::move(beverage))
  {
    assert(beverage_);
    std::cout << "Mocha::Mocha" << std::endl;
  }
  Mocha::~Mocha()
  {
    std::cout << "Mocha::~Mocha" << std::endl;
  }
  std::string Mocha::GetDescription() const
  {
    assert(beverage_);
    std::cout << "Mocha::GetDescription" << std::endl;
    return beverage_->GetDescription() + ", Mocha";
  }
  double Mocha::Cost() const
  {
    assert(beverage_);
    std::cout << "Mocha::cost" << std::endl;
    return 0.20 + beverage_->Cost();
  }

} //namespace headfirst
