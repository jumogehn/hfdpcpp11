//===--- beverage.hpp - -----------------------------------------*- C++ -*-===//
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
#include "beverage.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  Beverage::Beverage() :
    description_("Unknown Beverage")
  {
    std::cout << "Beverage::Beverage" << std::endl;
  }
  Beverage::~Beverage()
  {
    std::cout << "Beverage::~Beverage" << std::endl;
  }
  std::string Beverage::GetDescription() const
  {
    std::cout << "Beverage::GetDescription" << std::endl;
    return description_;
  }
} //namespace headfirst
