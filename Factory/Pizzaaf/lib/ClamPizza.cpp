//===--- ClamPizza.cpp - ----------------------------------------*- C++ -*-===//
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
#include "ClamPizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "Sauce.hpp"


ClamPizza::ClamPizza( PizzaIngredientFactory* ingredientFactory ) :
  _ingredientFactory( ingredientFactory )
{
  assert( ingredientFactory );
  std::cout << "ClamPizza::ClamPizza" << std::endl;
}
void ClamPizza::prepare() const
{
  std::cout << "ClamPizza::prepare" << std::endl;

  std::cout << "Preparing " << getName().c_str() << std::endl;
  _dough = std::unique_ptr< Dough>( _ingredientFactory->createDough() );
  _sauce = std::unique_ptr< Sauce>( _ingredientFactory->createSauce() );
  _cheese = std::unique_ptr< Cheese>( _ingredientFactory->createCheese() );
  _clam = std::unique_ptr< Clams>( _ingredientFactory->createClam() );
}
