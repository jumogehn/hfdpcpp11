//===--- ClamPizza.cpp - ----------------------------------------*- C++ -*-===//
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
#include "clam_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

ClamPizza::ClamPizza()
{
  std::cout << "ClamPizza::ClamPizza" << std::endl;
  _name = "Clam Pizza";
  _dough = "Thin Crust";
  _sauce = "White garlic Sauce";
  _toppings.push_back( "Grated parmesan cheese" );
  _toppings.push_back( "Clams" );
}
