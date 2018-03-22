//===--- ny_style_clam_pizza.cpp - ------------------------------*- C++ -*-===//
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
#include "ny_style_clam_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  NYStyleClamPizza::NYStyleClamPizza()
  {
    std::cout << "NYStyleClamPizza::NYStyleClamPizza" << std::endl;
    name_ = "NY Style Clam Pizza";
    dough_ = "Thin Crust Dough";
    sauce_ = "Marinara Sauce";
    toppings_.push_back( "Grated Reggiano Cheese" );
    toppings_.push_back( "Fresh Clams from Long Island Sound" );
  }
} //namespace headfirst
