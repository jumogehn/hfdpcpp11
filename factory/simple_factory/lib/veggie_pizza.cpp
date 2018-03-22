//===--- veggie_pizza.cpp - -------------------------------------*- C++ -*-===//
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
//Your project's .h files.
#include "veggie_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.

namespace headfirst {


  VeggiePizza::VeggiePizza()
  {
    std::cout << "VeggiePizza::VeggiePizza" << std::endl;

    name_ = "Veggie Pizza";
    dough_ = "Crust";
    sauce_ = "Marinara Sauce";
    toppings_.push_back( "Fresh Mozzarella" );
    toppings_.push_back( "Grated Parmesan" );
    toppings_.push_back( "Diced onion" );
    toppings_.push_back( "Sliced mushrooms" );
    toppings_.push_back( "Sliced red pepper" );
    toppings_.push_back( "Sliced black olives" );
  }

} //namespace headfirst
