//===--- pizza_store.cpp - --------------------------------------*- C++ -*-===//
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
#include "pizza_store.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"
#include "simple_pizza_factory.hpp"


PizzaStore::PizzaStore()
{
  factory_.reset(new SimplePizzaFactory());
  std::cout << "PizzaStore::PizzaStore" << std::endl;
}

std::unique_ptr<Pizza> PizzaStore::OrderPizza( std::string type )
{
  std::cout << "PizzaStore::OrderPizza" << std::endl;
  std::unique_ptr<Pizza> pizza;
  pizza = factory_->CreatePizza( type );
  pizza->Prepare();
  pizza->Bake();
  pizza->Cut();
  pizza->Box();
  return pizza;
}

