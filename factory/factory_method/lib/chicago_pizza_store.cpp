//===--- chicago_pizza_store.cpp - ------------------------------*- C++ -*-===//
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
#include "chicago_pizza_store.hpp"
//C system files.
//C++ system files.
#include <memory>
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "chicago_style_cheese_pizza.hpp"
#include "chicago_style_clam_pizza.hpp"
#include "chicago_style_pepperoni_pizza.hpp"
#include "chicago_style_veggie_pizza.hpp"
#include "pizza.hpp"


std::unique_ptr< Pizza >
ChicagoPizzaStore::CreatePizza( std::string type ) const
{
  std::cout << "ChicagoPizzaStore::CreatePizza" << std::endl;
  std::unique_ptr< Pizza > pizza = nullptr;

  if( type.compare( "cheese" ) == 0 ) {
    pizza.reset(new ChicagoStyleCheesePizza());
  } else if( type.compare( "veggie" ) == 0 ) {
    pizza.reset(new ChicagoStyleVeggiePizza());
  } else if( type.compare( "clam" ) == 0 ) {
    pizza.reset(new ChicagoStyleClamPizza());
  } else if( type.compare( "pepperoni" ) == 0 ) {
    pizza.reset(new ChicagoStylePepperoniPizza());
  }

  return pizza;
}
