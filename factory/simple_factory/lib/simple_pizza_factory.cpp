//===--- simple_pizza_factory.cpp - -----------------------------*- C++ -*-===//
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
#include "simple_pizza_factory.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese_pizza.hpp"
#include "clam_pizza.hpp"
#include "pepperoni_pizza.hpp"
#include "pizza.hpp"
#include "veggie_pizza.hpp"

namespace headfirst {


  std::unique_ptr<Pizza> SimplePizzaFactory::CreatePizza( std::string type ) const
  {
    std::cout << "SimplePizzaFactory::CreatePizza" << std::endl;
    std::unique_ptr<Pizza> pizza;
    if( type.compare( "cheese" ) == 0 ) {
      pizza.reset(new CheesePizza());
    } else if( type.compare( "pepperoni" ) == 0 ) {
      pizza.reset(new PepperoniPizza());
    } else if( type.compare( "clam" ) == 0 ) {
      pizza.reset(new ClamPizza());
    } else if( type.compare( "veggie" ) == 0 ) {
      pizza.reset(new VeggiePizza());
    }
    return pizza;
  }

} //namespace headfirst
