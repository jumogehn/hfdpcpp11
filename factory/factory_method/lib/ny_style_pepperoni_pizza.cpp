//===--- ny_style_pepperoni_pizza.cpp - -------------------------*- C++ -*-===//
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
#include "ny_style_pepperoni_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  NYStylePepperoniPizza::NYStylePepperoniPizza()
  {
    std::cout << "NYStylePepperoniPizza::NYStylePepperoniPizza" << std::endl;
    name_ = "NY Style Pepperoni Pizza";
    dough_ = "Thin Crust Dough";
    sauce_ = "Marinara Sauce";
    toppings_.push_back( "Grated Reggiano Cheese" );
    toppings_.push_back( "Sliced Pepperoni" );
    toppings_.push_back( "Garlic" );
    toppings_.push_back( "Onion" );
    toppings_.push_back( "Mushrooms" );
    toppings_.push_back( "Red Pepper" );
  }
} //namespace headfirst
