//===--- clam_pizza.cpp - ---------------------------------------*- C++ -*-===//
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
#include "clam_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {

  ClamPizza::ClamPizza()
  {
    std::cout << "ClamPizza::ClamPizza" << std::endl;
    name_ = "Clam Pizza";
    dough_ = "Thin Crust";
    sauce_ = "White garlic Sauce";
    toppings_.push_back( "Grated parmesan cheese" );
    toppings_.push_back( "Clams" );
  }
} //namespace headfirst
