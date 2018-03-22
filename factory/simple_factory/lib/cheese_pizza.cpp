//===--- cheese_pizza.cpp - -------------------------------------*- C++ -*-===//
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
#include "cheese_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  CheesePizza::CheesePizza()
  {
    std::cout << "CheesePizza::CheesePizza" << std::endl;

    name_ = "Cheese Pizza";
    dough_ = "Regular Crust";
    sauce_ = "Marinara Pizza Sauce";
    toppings_.push_back( "Shredded Mozzarella" );
    toppings_.push_back( "Parmesan" );
  }


} //namespace headfirst
