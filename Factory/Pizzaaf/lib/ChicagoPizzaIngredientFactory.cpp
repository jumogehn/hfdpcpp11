//===--- ChicagoPizzaIngredientFactory.cpp - --------------------*- C++ -*-===//
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
#include "ChicagoPizzaIngredientFactory.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "BlackOlives.hpp"
#include "EggPlant.hpp"
#include "FrozenClams.hpp"
#include "MozzarellaCheese.hpp"
#include "PlumTomatoSauce.hpp"
#include "SlicedPepperoni.hpp"
#include "Spinach.hpp"
#include "ThickCrustDough.hpp"
#include "Veggies.hpp"



std::shared_ptr<Dough> ChicagoPizzaIngredientFactory::createDough() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createDough" << std::endl;
  return std::make_shared<ThickCrustDough>();
}
std::shared_ptr<Sauce> ChicagoPizzaIngredientFactory::createSauce() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createSauce" << std::endl;
  return std::make_shared<PlumTomatoSauce>();
}
std::shared_ptr<Cheese> ChicagoPizzaIngredientFactory::createCheese() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createCheese" << std::endl;
  return std::make_shared<MozzarellaCheese>();
}
std::vector< std::shared_ptr<Veggies> > ChicagoPizzaIngredientFactory::createVeggies() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createVeggies" << std::endl;
  std::vector< std::shared_ptr<Veggies> > value;
  value.push_back( std::make_shared<BlackOlives>() );
  value.push_back( std::make_shared<Spinach>() );
  value.push_back( std::make_shared<Eggplant>() );
  return value;
}
std::shared_ptr<Pepperoni> ChicagoPizzaIngredientFactory::createPepperoni() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createPepperoni" << std::endl;
  return std::make_shared<SlicedPepperoni>();
}
std::shared_ptr<Clams> ChicagoPizzaIngredientFactory::createClam() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createClam" << std::endl;
  return std::make_shared<FrozenClams>();
}
