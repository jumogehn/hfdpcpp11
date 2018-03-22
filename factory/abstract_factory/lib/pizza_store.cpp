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
#include <memory>
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  PizzaStore::PizzaStore()
  {
    std::cout << "PizzaStore::PizzaStore" << std::endl;
  }
  PizzaStore::~PizzaStore()
  {
    std::cout << "PizzaStore::~PizzaStore" << std::endl;
  }
  std::unique_ptr< Pizza > PizzaStore::OrderPizza( std::string type ) const
  {
    std::cout << "PizzaStore::OrderPizza" << std::endl;
    std::unique_ptr< Pizza > pizza = CreatePizza( type );
    std::cout << "--- Making a " << pizza->GetName() << " ---" << std::endl;
    pizza->Prepare();
    pizza->Bake();
    pizza->Cut();
    pizza->Box();
    return pizza;
  }
} //namespace headfirst
