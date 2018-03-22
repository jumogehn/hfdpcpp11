//===--- chicago_style_cheese_pizza.cpp - -----------------------*- C++ -*-===//
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
#include "chicago_style_cheese_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
  {
    std::cout << "ChicagoStyleCheesePizza"
      "::ChicagoStyleCheesePizza" << std::endl;
    name_ = "Chicago Style Deep Dish Cheese Pizza";
    dough_ = "Extra Thick Crust Dough";
    sauce_ = "Plum Tomato Sauce";
    toppings_.push_back( "Shredded Mozzarella Cheese" );
  }
  void ChicagoStyleCheesePizza::Cut() const
  {
    std::cout << "ChicagoStyleCheesePizza::Cut" << std::endl;
    std::cout << "Cutting the pizza into square slices" << std::endl;
  }
} //namespace headfirst
