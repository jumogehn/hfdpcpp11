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


VeggiePizza::VeggiePizza()
{
  std::cout << "VeggiePizza::VeggiePizza" << std::endl;

  _name = "Veggie Pizza";
  _dough = "Crust";
  _sauce = "Marinara Sauce";
  _toppings.push_back( "Fresh Mozzarella" );
  _toppings.push_back( "Grated Parmesan" );
  _toppings.push_back( "Diced onion" );
  _toppings.push_back( "Sliced mushrooms" );
  _toppings.push_back( "Sliced red pepper" );
  _toppings.push_back( "Sliced black olives" );
}

