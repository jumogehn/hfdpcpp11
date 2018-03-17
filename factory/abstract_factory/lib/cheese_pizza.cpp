//===--- cheese_pizza.cpp - -------------------------------------*- C++ -*-===//
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
#include "cheese_pizza.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


CheesePizza::CheesePizza( std::shared_ptr<PizzaIngredientFactory> ingredient_factory ) :
  ingredient_factory_( ingredient_factory )
{
  assert( ingredient_factory );
  std::cout << "CheesePizza::CheesePizza" << std::endl;
}
void CheesePizza::Prepare() const
{
  std::cout << "CheesePizza::prepare" << std::endl;
  std::cout << "Preparing " << GetName().c_str() << std::endl;
  dough_ = ingredient_factory_->CreateDough();
  sauce_ = ingredient_factory_->CreateSauce();
  cheese_ = ingredient_factory_->CreateCheese();
}
