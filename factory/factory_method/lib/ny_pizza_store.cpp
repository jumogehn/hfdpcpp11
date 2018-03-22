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
#include <memory>
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "ny_style_cheese_pizza.hpp"
#include "ny_style_clam_pizza.hpp"
#include "ny_style_pepperoni_pizza.hpp"
#include "ny_style_veggie_pizza.hpp"

namespace headfirst {


  std::unique_ptr<Pizza> NYPizzaStore::CreatePizza( std::string type ) const
  {
    std::cout << "NYPizzaStore::CreatePizza" << std::endl;
    std::unique_ptr<Pizza> pizza = nullptr;

    if( type.compare( "cheese" ) == 0 ) {
      pizza.reset(new NYStyleCheesePizza());
    } else if( type.compare( "veggie" ) == 0 ) {
      pizza.reset(new NYStyleVeggiePizza());
    } else if( type.compare( "clam" ) == 0 ) {
      pizza.reset(new NYStyleClamPizza());
    } else if( type.compare( "pepperoni" ) == 0 ) {
      pizza.reset(new NYStylePepperoniPizza());
    }

    return pizza;
  }

} //namespace headfirst
