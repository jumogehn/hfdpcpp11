//===--- PizzaStore.cpp - ---------------------------------------*- C++ -*-===//
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
#include "PizzaStore.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <string>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "Pizza.hpp"
#include "SimplePizzaFactory.hpp"


PizzaStore::PizzaStore( std::shared_ptr<SimplePizzaFactory> factory ) :
  _factory( factory )
{
  assert( factory );
  std::cout << "PizzaStore::PizzaStore" << std::endl;
}

std::shared_ptr<Pizza> PizzaStore::orderPizza( std::string type )
{
  std::cout << "PizzaStore::orderPizza" << std::endl;
  std::shared_ptr<Pizza> pizza;
  pizza = _factory->createPizza( type );
  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();
  return pizza;
}

