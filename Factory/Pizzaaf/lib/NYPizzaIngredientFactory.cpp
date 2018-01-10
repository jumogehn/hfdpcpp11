//===--- NYPizzaIngredientFactory.cpp - -------------------------*- C++ -*-===//
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
#include "NYPizzaIngredientFactory.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "FreshClams.hpp"
#include "Garlic.hpp"
#include "MarinaraSauce.hpp"
#include "Mushroom.hpp"
#include "Onion.hpp"
#include "Pepperoni.hpp"
#include "RedPepper.hpp"
#include "ReggianoCheese.hpp"
#include "Sauce.hpp"
#include "SlicedPepperoni.hpp"
#include "ThinCrustDough.hpp"
#include "Veggies.hpp"


Dough* NYPizzaIngredientFactory::createDough() const
{
  std::cout << "NYPizzaIngredientFactory::createDough" << std::endl;
  return new ThinCrustDough();
}
Sauce* NYPizzaIngredientFactory::createSauce() const
{
  std::cout << "NYPizzaIngredientFactory::createSauce" << std::endl;
  return new MarinaraSauce();
}
Cheese* NYPizzaIngredientFactory::createCheese() const
{
  std::cout << "NYPizzaIngredientFactory::createCheese" << std::endl;
  return new ReggianoCheese();
}
std::vector< Veggies* > NYPizzaIngredientFactory::createVeggies() const
{
  std::cout << "NYPizzaIngredientFactory::createVeggies" << std::endl;
  std::vector< Veggies* > veggies;
  veggies.push_back( new Garlic() );
  veggies.push_back( new Onion() );
  veggies.push_back( new Mushroom() );
  veggies.push_back( new RedPepper() );
  return veggies;
}
Pepperoni* NYPizzaIngredientFactory::createPepperoni() const
{
  std::cout << "NYPizzaIngredientFactory::createPepperoni" << std::endl;
  return new SlicedPepperoni();
}
Clams* NYPizzaIngredientFactory::createClam() const
{
  std::cout << "NYPizzaIngredientFactory::createClam" << std::endl;
  return new FreshClams();
}
