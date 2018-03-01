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
#include "Pizza.hpp"
#include "PizzaStore.hpp"
#include "SimplePizzaFactory.hpp"


int main( int argc, char* argv[] )
{
  std::shared_ptr<SimplePizzaFactory> factory = std::make_shared<SimplePizzaFactory>();
  PizzaStore store(factory);

  std::shared_ptr<Pizza>pizza(store.orderPizza( "cheese" ) );
  std::cout << "We ordered a " << pizza->getName() << std::endl;

  pizza = std::shared_ptr<Pizza>(store.orderPizza( "veggie" ) );
  std::cout << "We ordered a " << pizza->getName() << std::endl;

  return 0;
}

