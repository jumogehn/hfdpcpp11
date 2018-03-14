//===--- Pizzas.cpp - -------------------------------------------*- C++ -*-===//
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
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"
#include "pizza_store.hpp"
#include "simple_pizza_factory.hpp"


int main( int argc, char* argv[] )
{
  auto factory = std::make_shared<SimplePizzaFactory>();
  PizzaStore store(factory);

  auto pizza = store.orderPizza( "cheese" );
  std::cout << "We ordered a " << pizza->getName() << std::endl;

  pizza = store.orderPizza( "veggie" );
  std::cout << "We ordered a " << pizza->getName() << std::endl;

  return 0;
}

