//===--- ny_style_veggie_pizza.cpp - ----------------------------*- C++ -*-===//
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
#include "ny_style_veggie_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


NYStyleVeggiePizza::NYStyleVeggiePizza()
{
  std::cout << "NYStyleVeggiePizza::NYStyleVeggiePizza" << std::endl;
  _name = "NY Style Veggie Pizza";
  _dough = "Thin Crust Dough";
  _sauce = "Marinara Sauce";
  _toppings.push_back( "Grated Reggiano Cheese" );
  _toppings.push_back( "Garlic" );
  _toppings.push_back( "Onion" );
  _toppings.push_back( "Mushrooms" );
  _toppings.push_back( "Red Pepper" );
}
