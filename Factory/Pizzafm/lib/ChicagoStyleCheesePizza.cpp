//===--- ChicagoStyleCheesePizza.cpp - --------------------------*- C++ -*-===//
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
#include "ChicagoStyleCheesePizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
  std::cout << "ChicagoStyleCheesePizza"
                     "::ChicagoStyleCheesePizza" << std::endl;
  _name = "Chicago Style Deep Dish Cheese Pizza";
  _dough = "Extra Thick Crust Dough";
  _sauce = "Plum Tomato Sauce";
  _toppings.push_back( "Shredded Mozzarella Cheese" );
}
void ChicagoStyleCheesePizza::cut() const
{
  std::cout << "ChicagoStyleCheesePizza::cut" << std::endl;
  std::cout << "Cutting the pizza into square slices" << std::endl;
}
