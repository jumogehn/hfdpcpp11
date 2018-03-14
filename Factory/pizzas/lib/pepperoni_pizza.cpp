//===--- PepperoniPizza.cpp - -----------------------------------*- C++ -*-===//
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
#include "pepperoni_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


PepperoniPizza::PepperoniPizza()
{
  std::cout << "PepperoniPizza::PepperoniPizza" << std::endl;
  _name = "Pepperoni Pizza";
  _dough = "Crust";
  _sauce = "Marinara sauce";
  _toppings.push_back( "Sliced Pepperoni" );
  _toppings.push_back( "Sliced Onion" );
  _toppings.push_back( "Grated parmesan cheese" );
}

