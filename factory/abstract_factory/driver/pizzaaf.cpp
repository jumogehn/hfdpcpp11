//===--- pizzaaf.cpp - ------------------------------------------*- C++ -*-===//
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
#include <memory>
#include <iostream>
//Other libraries' .h files.
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "chicago_pizza_store.hpp"
#include "ny_pizza_store.hpp"
#include "pizza.hpp"
#include "pizza_store.hpp"


int main(int argc, char* argv[]) {

  std::unique_ptr<headfirst::PizzaStore>
    ny_store (new headfirst::NYPizzaStore());
  std::unique_ptr<headfirst::PizzaStore>
    chicago_store(new headfirst::ChicagoPizzaStore());

  std::unique_ptr<headfirst::Pizza> pizza = ny_store->OrderPizza("cheese");
  std::cout << "Ethan ordered a " << pizza->ToString() << std::endl;

  pizza = chicago_store->OrderPizza("cheese");
  std::cout << "Joel ordered a " << pizza->ToString() << std::endl;

  pizza = ny_store->OrderPizza("clam");
  std::cout << "Ethan ordered a " << pizza->ToString() << std::endl;

  pizza = chicago_store->OrderPizza("clam");
  std::cout << "Joel ordered a " << pizza->ToString() << std::endl;

  pizza = ny_store->OrderPizza("pepperoni");
  std::cout << "Ethan ordered a " << pizza->ToString() << std::endl;

  pizza = chicago_store->OrderPizza("pepperoni");
  std::cout << "Joel ordered a " << pizza->ToString() << std::endl;

  pizza = ny_store->OrderPizza("veggie");
  std::cout << "Ethan ordered a " + pizza->ToString() << std::endl;

  pizza = chicago_store->OrderPizza("veggie");
  std::cout << "Joel ordered a " << pizza->ToString() << std::endl;

  return 0;
}

