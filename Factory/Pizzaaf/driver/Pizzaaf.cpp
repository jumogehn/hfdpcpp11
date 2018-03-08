//===--- Pizzaaf.cpp - ------------------------------------------*- C++ -*-===//
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
//Your project's .h files.
#include "ChicagoPizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "Pizza.hpp"
#include "PizzaStore.hpp"


int main(int argc, char* argv[]) {

  auto nyStore = std::make_shared<NYPizzaStore>();
  auto chicagoStore = std::make_shared<ChicagoPizzaStore>();

  auto pizza = nyStore->orderPizza("cheese");
  std::cout << "Ethan ordered a " << pizza->toString() << std::endl;

  pizza = chicagoStore->orderPizza("cheese");
  std::cout << "Joel ordered a " << pizza->toString() << std::endl;

  pizza = nyStore->orderPizza("clam");
  std::cout << "Ethan ordered a " << pizza->toString() << std::endl;

  pizza = chicagoStore->orderPizza("clam");
  std::cout << "Joel ordered a " << pizza->toString() << std::endl;

  pizza = nyStore->orderPizza("pepperoni");
  std::cout << "Ethan ordered a " << pizza->toString() << std::endl;

  pizza = chicagoStore->orderPizza("pepperoni");
  std::cout << "Joel ordered a " << pizza->toString() << std::endl;

  pizza = nyStore->orderPizza("veggie");
  std::cout << "Ethan ordered a " + pizza->toString() << std::endl;

  pizza = chicagoStore->orderPizza("veggie");
  std::cout << "Joel ordered a " << pizza->toString() << std::endl;

  return 0;
}

