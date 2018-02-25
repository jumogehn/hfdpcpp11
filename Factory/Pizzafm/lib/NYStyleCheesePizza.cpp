//===--- NYStyleCheesePizza.cpp - -------------------------------*- C++ -*-===//
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
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "NYStyleCheesePizza.hpp"


NYStyleCheesePizza::NYStyleCheesePizza()
{
  std::cout << "NYStyleCheesePizza::NYStyleCheesePizza" << std::endl;
  _name = "NY Style Sauce and Cheese Pizza";
  _dough = "Thin Crust Dough";
  _sauce = "Marinara Sauce";
  _toppings.push_back( "Grated Reggiano Cheese" );
}
