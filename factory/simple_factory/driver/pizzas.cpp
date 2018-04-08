//===--- pizzas.cpp - -------------------------------------------*- C++ -*-===//
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
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "pizza.hpp"
#include "pizza_store.hpp"


int main( int argc, char* argv[] )
{
  std::unique_ptr<headfirst::PizzaStore> store(new headfirst::PizzaStore());

  std::unique_ptr<headfirst::Pizza> pizza = store->OrderPizza( "cheese" );
  std::cout << "We ordered a " << pizza->GetName() << std::endl;

  pizza = store->OrderPizza( "veggie" );
  std::cout << "We ordered a " << pizza->GetName() << std::endl;

  return 0;
}

