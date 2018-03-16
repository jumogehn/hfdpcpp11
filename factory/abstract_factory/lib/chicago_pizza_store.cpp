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


std::shared_ptr< Pizza > ChicagoPizzaStore::createPizza( std::string item ) const
{
  std::cout << "ChicagoPizzaStore::createPizza" << std::endl;

  std::shared_ptr< Pizza > pizza;
  std::shared_ptr<PizzaIngredientFactory> ingredientFactory =
    std::make_shared<NYPizzaIngredientFactory>();

  if( item.compare( "cheese" ) == 0 ) {
    pizza = std::make_shared<CheesePizza>( ingredientFactory );
    pizza->setName( "Chicago Style Cheese Pizza" );
  } else if( item.compare( "veggie" ) == 0 ) {
    pizza = std::make_shared<VeggiePizza>( ingredientFactory );
    pizza->setName( "Chicago Style Veggie Pizza" );
  } else if( item.compare( "clam" ) == 0 ) {
    pizza = std::make_shared<ClamPizza>( ingredientFactory );
    pizza->setName( "Chicago Style Clam Pizza" );
  } else if( item.compare( "pepperoni" ) == 0 ) {
    pizza = std::make_shared<PepperoniPizza>( ingredientFactory );
    pizza->setName( "Chicago Style Pepperoni Pizza" );
  }
  return pizza;
}
