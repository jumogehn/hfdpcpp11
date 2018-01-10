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



Dough* ChicagoPizzaIngredientFactory::createDough() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createDough" << std::endl;
  return new ThickCrustDough();
}
Sauce* ChicagoPizzaIngredientFactory::createSauce() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createSauce" << std::endl;
  return new PlumTomatoSauce();
}
Cheese* ChicagoPizzaIngredientFactory::createCheese() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createCheese" << std::endl;
  return new MozzarellaCheese();
}
std::vector< Veggies* > ChicagoPizzaIngredientFactory::createVeggies() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createVeggies" << std::endl;
  std::vector< Veggies* > value;
  value.push_back( new BlackOlives() );
  value.push_back( new Spinach() );
  value.push_back( new Eggplant() );
  return value;
}
Pepperoni* ChicagoPizzaIngredientFactory::createPepperoni() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createPepperoni" << std::endl;
  return new SlicedPepperoni();
}
Clams* ChicagoPizzaIngredientFactory::createClam() const
{
  std::cout << "ChicagoPizzaIngredientFactory::createClam" << std::endl;
  return new FrozenClams();
}
