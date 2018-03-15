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
#include "pizza_store.hpp"
//C system files.
//C++ system files.
#include <memory>
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


PizzaStore::PizzaStore()
{
  std::cout << "PizzaStore::PizzaStore" << std::endl;
}
PizzaStore::~PizzaStore()
{
  std::cout << "PizzaStore::~PizzaStore" << std::endl;
}
std::shared_ptr< Pizza > PizzaStore::orderPizza( std::string type ) const
{
  std::cout << "PizzaStore::orderPizza" << std::endl;
  std::shared_ptr< Pizza > pizza = createPizza( type );
  std::cout << "--- Making a " << pizza->getName() << " ---" << std::endl;
  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();
  return pizza;
}
