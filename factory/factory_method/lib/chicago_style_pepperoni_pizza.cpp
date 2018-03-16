//===--- chicago_style_pepperoni_pizza.cpp - --------------------*- C++ -*-===//
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
#include "chicago_style_pepperoni_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
  std::cout << "ChicagoStylePepperoniPizza"
                     "::ChicagoStylePepperoniPizza" << std::endl;
  _name = "Chicago Style Pepperoni Pizza";
  _dough = "Extra Thick Crust Dough";
  _sauce = "Plum Tomato Sauce";
  _toppings.push_back( "Shredded Mozzarella Cheese" );
  _toppings.push_back( "Black Olives" );
  _toppings.push_back( "Spinach" );
  _toppings.push_back( "Eggplant" );
  _toppings.push_back( "Sliced Pepperoni" );
}
void ChicagoStylePepperoniPizza::cut() const
{
  std::cout << "ChicagoStylePepperoniPizza::cut" << std::endl;
  std::cout << "Cutting the pizza into square slices" << std::endl;
}

