//===--- PepperoniPizza.cpp - -----------------------------------*- C++ -*-===//
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
#include "pepperoni_pizza.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


PepperoniPizza::PepperoniPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory) :
  _ingredientFactory(ingredientFactory)
{
  assert(ingredientFactory);
  std::cout << "PepperoniPizza::PepperoniPizza" << std::endl;
}
void PepperoniPizza::prepare() const
{
  std::cout << "PepperoniPizza::prepare" << std::endl;
  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = _ingredientFactory->createDough();
  _sauce = _ingredientFactory->createSauce();
  _cheese = _ingredientFactory->createCheese();
  _pepperoni = _ingredientFactory->createPepperoni();
  if (_veggies.empty())
    _veggies = _ingredientFactory->createVeggies();
}
