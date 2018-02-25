//===--- CheesePizza.cpp - --------------------------------------*- C++ -*-===//
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
#include "CheesePizza.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


CheesePizza::CheesePizza( std::shared_ptr<PizzaIngredientFactory> ingredientFactory ) :
  _ingredientFactory( ingredientFactory )
{
  assert( ingredientFactory );
  std::cout << "CheesePizza::CheesePizza" << std::endl;
}
void CheesePizza::prepare() const
{
  std::cout << "CheesePizza::prepare" << std::endl;
  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = std::shared_ptr<Dough>( _ingredientFactory->createDough() );
  _sauce = std::shared_ptr<Sauce>( _ingredientFactory->createSauce() );
  _cheese = std::shared_ptr<Cheese>( _ingredientFactory->createCheese() );
}
