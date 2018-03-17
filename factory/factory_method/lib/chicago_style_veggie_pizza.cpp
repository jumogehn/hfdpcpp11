//===--- chicago_style_veggie_pizza.cpp - -----------------------*- C++ -*-===//
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
#include "chicago_style_veggie_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
  std::cout << "ChicagoStyleVeggiePizza"
                     "::ChicagoStyleVeggiePizza" << std::endl;
  name_ = "Chicago Deep Dish Veggie Pizza";
  dough_ = "Extra Thick Crust Dough";
  sauce_ = "Plum Tomato Sauce";
  toppings_.push_back( "Shredded Mozzarella Cheese" );
  toppings_.push_back( "Black Olives" );
  toppings_.push_back( "Spinach" );
  toppings_.push_back( "Eggplant" );
}
void ChicagoStyleVeggiePizza::Cut() const
{
  std::cout << "ChicagoStyleVeggiePizza::Cut" << std::endl;
  std::cout << "Cutting the pizza into square slices" << std::endl;
}
