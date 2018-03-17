//===--- vegie_pizza.cpp - --------------------------------------*- C++ -*-===//
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
#include "veggie_pizza.hpp"
//C system files.
//C++ system files.
#include <memory>
#include <iostream>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese.hpp"
#include "dough.hpp"
#include "sauce.hpp"


VeggiePizza::VeggiePizza(std::shared_ptr<PizzaIngredientFactory> ingredient_factory) :
  ingredient_factory_(ingredient_factory)
{
  assert(ingredient_factory);
  std::cout << "VeggiePizza::VeggiePizza" << std::endl;
}
void VeggiePizza::Prepare() const
{
  std::cout << "VeggiePizza::prepare" << std::endl;
  std::cout << "Preparing " << GetName().c_str() << std::endl;
  dough_ = ingredient_factory_->CreateDough();
  sauce_ = ingredient_factory_->CreateSauce();
  cheese_ = ingredient_factory_->CreateCheese();
  if (veggies_.empty())
    veggies_ = ingredient_factory_->CreateVeggies();
}
