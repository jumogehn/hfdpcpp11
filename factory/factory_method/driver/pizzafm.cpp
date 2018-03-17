//===--- pizzafm.cpp - ------------------------------------------*- C++ -*-===//
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
#include "chicago_pizza_store.hpp"
#include "ny_pizza_store.hpp"
#include "pizza.hpp"
#include "pizza_store.hpp"


int main( int argc, char* argv[] )
{

  auto ny_store = std::make_shared<NYPizzaStore>();
  auto chicago_store = std::make_shared<ChicagoPizzaStore>();

  auto pizza = ny_store->OrderPizza( "cheese" );
  std::cout << "Ethan ordered a " << pizza->GetName() << std::endl;

  pizza = chicago_store->OrderPizza( "cheese" );
  std::cout << "Joel ordered a " << pizza->GetName() << std::endl;

  pizza = ny_store->OrderPizza( "clam" );
  std::cout << "Ethan ordered a " << pizza->GetName() << std::endl;

  pizza = chicago_store->OrderPizza( "clam" );
  std::cout << "Joel ordered a " << pizza->GetName() << std::endl;

  pizza = ny_store->OrderPizza( "pepperoni" );
  std::cout << "Ethan ordered a " << pizza->GetName() << std::endl;

  pizza = chicago_store->OrderPizza( "pepperoni" );
  std::cout << "Joel ordered a " << pizza->GetName() << std::endl;

  pizza = ny_store->OrderPizza( "veggie" );
  std::cout << "Ethan ordered a " << pizza->GetName() << std::endl;

  pizza = chicago_store->OrderPizza( "veggie" );
  std::cout << "Joel ordered a " << pizza->GetName() << std::endl;

  return 0;
}

