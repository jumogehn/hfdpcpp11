//===--- VegiePizza.cpp - ---------------------------------------*- C++ -*-===//
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
#include "VeggiePizza.hpp"
//C system files.
//C++ system files.
#include <memory>
#include <iostream>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "Cheese.hpp"
#include "Dough.hpp"
#include "Sauce.hpp"


VeggiePizza::VeggiePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory) :
  _ingredientFactory(ingredientFactory)
{
  assert(ingredientFactory);
  std::cout << "VeggiePizza::VeggiePizza" << std::endl;
}
void VeggiePizza::prepare() const
{
  std::cout << "VeggiePizza::prepare" << std::endl;
  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = _ingredientFactory->createDough();
  _sauce = _ingredientFactory->createSauce();
  _cheese = _ingredientFactory->createCheese();
  if (_veggies.empty())
    _veggies = _ingredientFactory->createVeggies();
}
