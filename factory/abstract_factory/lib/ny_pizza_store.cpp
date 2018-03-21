//===--- ny_pizza_store.cpp - -----------------------------------*- C++ -*-===//
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
#include "ny_pizza_store.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese_pizza.hpp"
#include "clam_pizza.hpp"
#include "ny_pizza_ingredient_factory.hpp"
#include "pepperoni_pizza.hpp"
#include "pizza.hpp"
#include "veggie_pizza.hpp"


std::unique_ptr< Pizza > NYPizzaStore::CreatePizza( std::string item ) const
{
  std::cout << "NYPizzaStore::CreatePizza" << std::endl;

  std::unique_ptr< Pizza > pizza;

  if( item.compare( "cheese" ) == 0 ) {
    pizza.reset(new CheesePizza(new NYPizzaIngredientFactory()));
    pizza->SetName( "New York Style Cheese Pizza" );
  } else if( item.compare( "veggie" ) == 0 ) {
    pizza.reset(new VeggiePizza(new NYPizzaIngredientFactory()));
    pizza->SetName( "New York Style Veggie Pizza" );
  } else if( item.compare( "clam" ) == 0 ) {
    pizza.reset(new ClamPizza(new NYPizzaIngredientFactory()));
    pizza->SetName( "New York Style Clam Pizza" );
  } else if( item.compare( "pepperoni" ) == 0 ) {
    pizza.reset(new PepperoniPizza(new NYPizzaIngredientFactory()));
    pizza->SetName( "New York Style Pepperoni Pizza" );
  }
  return pizza;
}
