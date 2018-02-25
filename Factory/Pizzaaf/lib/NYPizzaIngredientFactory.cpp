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
#include <memory>
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


std::shared_ptr<Dough> NYPizzaIngredientFactory::createDough() const
{
  std::cout << "NYPizzaIngredientFactory::createDough" << std::endl;
  return std::make_shared<ThinCrustDough>();
}
std::shared_ptr<Sauce> NYPizzaIngredientFactory::createSauce() const
{
  std::cout << "NYPizzaIngredientFactory::createSauce" << std::endl;
  return std::make_shared<MarinaraSauce>();
}
std::shared_ptr<Cheese> NYPizzaIngredientFactory::createCheese() const
{
  std::cout << "NYPizzaIngredientFactory::createCheese" << std::endl;
  return std::make_shared<ReggianoCheese>();
}
std::vector< std::shared_ptr<Veggies> > NYPizzaIngredientFactory::createVeggies() const
{
  std::cout << "NYPizzaIngredientFactory::createVeggies" << std::endl;
  std::vector< std::shared_ptr<Veggies> > veggies;
  veggies.push_back( std::make_shared<Garlic>() );
  veggies.push_back( std::make_shared<Onion>() );
  veggies.push_back( std::make_shared<Mushroom>() );
  veggies.push_back( std::make_shared<RedPepper>() );
  return veggies;
}
std::shared_ptr<Pepperoni> NYPizzaIngredientFactory::createPepperoni() const
{
  std::cout << "NYPizzaIngredientFactory::createPepperoni" << std::endl;
  return std::make_shared<SlicedPepperoni>();
}
std::shared_ptr<Clams> NYPizzaIngredientFactory::createClam() const
{
  std::cout << "NYPizzaIngredientFactory::createClam" << std::endl;
  return std::make_shared<FreshClams>();
}
