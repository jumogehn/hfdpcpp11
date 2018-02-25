//===--- ChicagoStyleClamPizza.cpp - ----------------------------*- C++ -*-===//
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
#include "ChicagoStyleClamPizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
  std::cout << "ChicagoStyleClamPizza::ChicagoStyleClamPizza" << std::endl;
  _name = "Chicago Style Clam Pizza";
  _dough = "Extra Thick Crust Dough";
  _sauce = "Plum Tomato Sauce";
  _toppings.push_back( "Shredded Mozzarella Cheese" );
  _toppings.push_back( "Frozen Clams from Chesapeake Bay" );
}
void ChicagoStyleClamPizza::cut() const
{
  std::cout << "ChicagoStyleClamPizza::cut" << std::endl;
  std::cout << "Cutting the pizza into square slices" << std::endl;
}

