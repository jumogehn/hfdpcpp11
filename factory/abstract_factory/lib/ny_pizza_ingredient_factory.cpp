//===--- ny_pizza_ingredient_factory.cpp - ----------------------*- C++ -*-===//
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
#include "ny_pizza_ingredient_factory.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese.hpp"
#include "clams.hpp"
#include "dough.hpp"
#include "fresh_clams.hpp"
#include "garlic.hpp"
#include "marinara_sauce.hpp"
#include "mushroom.hpp"
#include "onion.hpp"
#include "pepperoni.hpp"
#include "red_pepper.hpp"
#include "reggiano_cheese.hpp"
#include "sauce.hpp"
#include "sliced_pepperoni.hpp"
#include "thin_crust_dough.hpp"
#include "veggies.hpp"

namespace headfirst {


  std::unique_ptr<Dough> NYPizzaIngredientFactory::CreateDough() const
  {
    std::cout << "NYPizzaIngredientFactory::CreateDough" << std::endl;
    return std::unique_ptr<Dough>(new ThinCrustDough());
  }
  std::unique_ptr<Sauce> NYPizzaIngredientFactory::CreateSauce() const
  {
    std::cout << "NYPizzaIngredientFactory::CreateSauce" << std::endl;
    return std::unique_ptr<Sauce>(new MarinaraSauce());
  }
  std::unique_ptr<Cheese> NYPizzaIngredientFactory::CreateCheese() const
  {
    std::cout << "NYPizzaIngredientFactory::CreateCheese" << std::endl;
    return std::unique_ptr<Cheese>(new ReggianoCheese());
  }
  std::vector<Veggies*>*
    NYPizzaIngredientFactory::CreateVeggies() const
    {
      std::cout << "NYPizzaIngredientFactory::CreateVeggies" << std::endl;
      std::vector< Veggies* > *veggies = new std::vector< Veggies* >;
      veggies->push_back( new Garlic() );
      veggies->push_back( new Onion() );
      veggies->push_back( new Mushroom() );
      veggies->push_back( new RedPepper() );
      return veggies;
    }
  std::unique_ptr<Pepperoni> NYPizzaIngredientFactory::CreatePepperoni() const
  {
    std::cout << "NYPizzaIngredientFactory::CreatePepperoni" << std::endl;
    return std::unique_ptr<Pepperoni>(new SlicedPepperoni());
  }
  std::unique_ptr<Clams> NYPizzaIngredientFactory::CreateClam() const
  {
    std::cout << "NYPizzaIngredientFactory::CreateClam" << std::endl;
    return std::unique_ptr<Clams>(new FreshClams());
  }
} //namespace headfirst
