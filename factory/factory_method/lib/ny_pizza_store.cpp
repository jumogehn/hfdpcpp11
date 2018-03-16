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


std::shared_ptr< Pizza > NYPizzaStore::createPizza( std::string type ) const
{
  std::cout << "NYPizzaStore::createPizza" << std::endl;
  if( type.compare( "cheese" ) == 0 ) {
    return std::make_shared<NYStyleCheesePizza>();
  } else if( type.compare( "veggie" ) == 0 ) {
    return std::make_shared<NYStyleVeggiePizza>();
  } else if( type.compare( "clam" ) == 0 ) {
    return std::make_shared<NYStyleClamPizza>();
  } else if( type.compare( "pepperoni" ) == 0 ) {
    return std::make_shared<NYStylePepperoniPizza>();
  } else return 0;
}
