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
#include "chicago_pizza_ingredient_factory.hpp"
#include "clam_pizza.hpp"
#include "pepperoni_pizza.hpp"
#include "pizza.hpp"
#include "pizza_ingredient_factory.hpp"
#include "veggie_pizza.hpp"

namespace headfirst {


  std::unique_ptr< Pizza >
    ChicagoPizzaStore::CreatePizza( std::string item ) const
    {
      std::cout << "ChicagoPizzaStore::CreatePizza" << std::endl;

      std::unique_ptr< Pizza > pizza = nullptr;
      std::unique_ptr<ChicagoPizzaIngredientFactory>
        ingredient_factory(new ChicagoPizzaIngredientFactory());

      if( item.compare( "cheese" ) == 0 ) {
        pizza.reset( new CheesePizza( std::move(ingredient_factory) ) );
        pizza->SetName( "Chicago Style Cheese Pizza" );
      } else if( item.compare( "veggie" ) == 0 ) {
        pizza.reset( new VeggiePizza( std::move(ingredient_factory) ) );
        pizza->SetName( "Chicago Style Veggie Pizza" );
      } else if( item.compare( "clam" ) == 0 ) {
        pizza.reset( new ClamPizza( std::move(ingredient_factory) ) );
        pizza->SetName( "Chicago Style Clam Pizza" );
      } else if( item.compare( "pepperoni" ) == 0 ) {
        pizza.reset( new PepperoniPizza( std::move(ingredient_factory) ) );
        pizza->SetName( "Chicago Style Pepperoni Pizza" );
      }
      return pizza;
    }
} //namespace headfirst
