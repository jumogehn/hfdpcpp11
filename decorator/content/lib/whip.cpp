//===--- whip.hpp - ---------------------------------------------*- C++ -*-===//
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

namespace headfirst {


  Whip::Whip(const Beverage* beverage) :
    beverage_(beverage)
  {
    assert(beverage);
    std::cout << "Whip::Whip" << std::endl;
  }
  Whip::~Whip() {
    std::cout << "Whip::~Whip" << std::endl;
  }
  std::string Whip::GetDescription() const
  {
    std::cout << "Whip::GetDescription" << std::endl;
    return beverage_->GetDescription() + ", Whip";
  }
  double Whip::Cost() const
  {
    std::cout << "Whip::cost" << std::endl;
    return 0.10 + beverage_->Cost();
  }

} //namespace headfirst
