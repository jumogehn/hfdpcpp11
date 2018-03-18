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
#include "pizza_ingredient_factory.hpp"
#include "veggie_pizza.hpp"


std::shared_ptr< Pizza >
ChicagoPizzaStore::CreatePizza( std::string item ) const
{
  std::cout << "ChicagoPizzaStore::CreatePizza" << std::endl;

  std::shared_ptr< Pizza > pizza;
  std::shared_ptr<PizzaIngredientFactory> ingredient_factory =
    std::make_shared<NYPizzaIngredientFactory>();

  if( item.compare( "cheese" ) == 0 ) {
    pizza = std::make_shared<CheesePizza>( ingredient_factory );
    pizza->SetName( "Chicago Style Cheese Pizza" );
  } else if( item.compare( "veggie" ) == 0 ) {
    pizza = std::make_shared<VeggiePizza>( ingredient_factory );
    pizza->SetName( "Chicago Style Veggie Pizza" );
  } else if( item.compare( "clam" ) == 0 ) {
    pizza = std::make_shared<ClamPizza>( ingredient_factory );
    pizza->SetName( "Chicago Style Clam Pizza" );
  } else if( item.compare( "pepperoni" ) == 0 ) {
    pizza = std::make_shared<PepperoniPizza>( ingredient_factory );
    pizza->SetName( "Chicago Style Pepperoni Pizza" );
  }
  return pizza;
}
