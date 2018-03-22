//===--- ny_style_cheese_pizza.cpp - ----------------------------*- C++ -*-===//
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
#include "ny_style_cheese_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  NYStyleCheesePizza::NYStyleCheesePizza()
  {
    std::cout << "NYStyleCheesePizza::NYStyleCheesePizza" << std::endl;
    name_ = "NY Style Sauce and Cheese Pizza";
    dough_ = "Thin Crust Dough";
    sauce_ = "Marinara Sauce";
    toppings_.push_back( "Grated Reggiano Cheese" );
  }
} //namespace headfirst
