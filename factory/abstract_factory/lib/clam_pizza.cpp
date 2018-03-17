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


ClamPizza::ClamPizza( std::shared_ptr<PizzaIngredientFactory> ingredient_factory ) :
  ingredient_factory_( ingredient_factory )
{
  assert( ingredient_factory );
  std::cout << "ClamPizza::ClamPizza" << std::endl;
}
void ClamPizza::Prepare() const
{
  std::cout << "ClamPizza::prepare" << std::endl;

  std::cout << "Preparing " << GetName().c_str() << std::endl;
  dough_ = ingredient_factory_->CreateDough();
  sauce_ = ingredient_factory_->CreateSauce();
  cheese_ = ingredient_factory_->CreateCheese();
  clam_ = ingredient_factory_->CreateClam();
}
