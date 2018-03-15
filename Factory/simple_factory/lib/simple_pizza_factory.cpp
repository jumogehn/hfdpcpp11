//===--- SimplePizzaFactory.cpp - -------------------------------*- C++ -*-===//
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


std::shared_ptr<Pizza> SimplePizzaFactory::createPizza( std::string type ) const
{
  std::cout << "SimplePizzaFactory::createPizza" << std::endl;
  std::shared_ptr<Pizza> pizza;
  if( type.compare( "cheese" ) == 0 ) {
    pizza = std::make_shared<CheesePizza>();
  } else if( type.compare( "pepperoni" ) == 0 ) {
    pizza = std::make_shared<PepperoniPizza>();
  } else if( type.compare( "clam" ) == 0 ) {
    pizza = std::make_shared<ClamPizza>();
  } else if( type.compare( "veggie" ) == 0 ) {
    pizza = std::make_shared<VeggiePizza>();
  }
  return pizza;
}

