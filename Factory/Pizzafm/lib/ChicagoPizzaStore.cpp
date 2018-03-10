//===--- ChicagoPizzaStore.cpp - --------------------------------*- C++ -*-===//
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
#include "ChicagoPizzaStore.hpp"
//C system files.
//C++ system files.
#include <memory>
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStyleClamPizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"
#include "ChicagoStyleVeggiePizza.hpp"
#include "Pizza.hpp"


std::shared_ptr< Pizza > ChicagoPizzaStore::createPizza( std::string type ) const
{
  std::cout << "ChicagoPizzaStore::createPizza" << std::endl;

  if( type.compare( "cheese" ) == 0 ) {
    return std::make_shared<ChicagoStyleCheesePizza>();
  } else if( type.compare( "veggie" ) == 0 ) {
    return std::make_shared<ChicagoStyleVeggiePizza>();
  } else if( type.compare( "clam" ) == 0 ) {
    return std::make_shared<ChicagoStyleClamPizza>();
  } else if( type.compare( "pepperoni" ) == 0 ) {
    return std::make_shared<ChicagoStylePepperoniPizza>();
  } else return 0;
}
