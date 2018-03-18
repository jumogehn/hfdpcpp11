//===--- chicago_pizza_ingredient_factory.cpp - -----------------*- C++ -*-===//
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
#include "chicago_pizza_ingredient_factory.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "black_olives.hpp"
#include "egg_plant.hpp"
#include "frozen_clams.hpp"
#include "mozzarella_cheese.hpp"
#include "plum_tomato_sauce.hpp"
#include "sliced_pepperoni.hpp"
#include "spinach.hpp"
#include "thick_crust_dough.hpp"
#include "veggies.hpp"



std::shared_ptr<Dough> ChicagoPizzaIngredientFactory::CreateDough() const
{
  std::cout << "ChicagoPizzaIngredientFactory::CreateDough" << std::endl;
  return std::make_shared<ThickCrustDough>();
}
std::shared_ptr<Sauce> ChicagoPizzaIngredientFactory::CreateSauce() const
{
  std::cout << "ChicagoPizzaIngredientFactory::CreateSauce" << std::endl;
  return std::make_shared<PlumTomatoSauce>();
}
std::shared_ptr<Cheese> ChicagoPizzaIngredientFactory::CreateCheese() const
{
  std::cout << "ChicagoPizzaIngredientFactory::CreateCheese" << std::endl;
  return std::make_shared<MozzarellaCheese>();
}
std::vector< std::shared_ptr<Veggies> >
ChicagoPizzaIngredientFactory::CreateVeggies() const
{
  std::cout << "ChicagoPizzaIngredientFactory::CreateVeggies" << std::endl;
  std::vector< std::shared_ptr<Veggies> > value;
  value.push_back( std::make_shared<BlackOlives>() );
  value.push_back( std::make_shared<Spinach>() );
  value.push_back( std::make_shared<Eggplant>() );
  return value;
}
std::shared_ptr<Pepperoni>
ChicagoPizzaIngredientFactory::CreatePepperoni() const
{
  std::cout << "ChicagoPizzaIngredientFactory::CreatePepperoni" << std::endl;
  return std::make_shared<SlicedPepperoni>();
}
std::shared_ptr<Clams> ChicagoPizzaIngredientFactory::CreateClam() const
{
  std::cout << "ChicagoPizzaIngredientFactory::CreateClam" << std::endl;
  return std::make_shared<FrozenClams>();
}
