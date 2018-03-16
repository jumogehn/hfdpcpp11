//===--- clam_pizza.cpp - ---------------------------------------*- C++ -*-===//
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
#include "clam_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese.hpp"
#include "clams.hpp"
#include "dough.hpp"
#include "sauce.hpp"


ClamPizza::ClamPizza( std::shared_ptr<PizzaIngredientFactory> ingredientFactory ) :
  _ingredientFactory( ingredientFactory )
{
  assert( ingredientFactory );
  std::cout << "ClamPizza::ClamPizza" << std::endl;
}
void ClamPizza::prepare() const
{
  std::cout << "ClamPizza::prepare" << std::endl;

  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = _ingredientFactory->createDough();
  _sauce = _ingredientFactory->createSauce();
  _cheese = _ingredientFactory->createCheese();
  _clam = _ingredientFactory->createClam();
}
