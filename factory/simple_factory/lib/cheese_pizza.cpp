//===--- CheesePizza.cpp - --------------------------------------*- C++ -*-===//
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


CheesePizza::CheesePizza()
{
  std::cout << "CheesePizza::CheesePizza" << std::endl;

  _name = "Cheese Pizza";
  _dough = "Regular Crust";
  _sauce = "Marinara Pizza Sauce";
  _toppings.push_back( "Shredded Mozzarella" );
  _toppings.push_back( "Parmesan" );
}


