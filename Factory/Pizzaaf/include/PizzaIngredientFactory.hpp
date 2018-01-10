//===--- PizzaIngredientFactory.hpp - ---------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_INGREDIENT_FACTORY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "Pepperoni.hpp"
#include "Sauce.hpp"
#include "Veggies.hpp"



class PizzaIngredientFactory {
public:
  virtual Dough* createDough() const = 0;
  virtual Sauce* createSauce() const = 0;
  virtual Cheese* createCheese() const = 0;
  virtual std::vector< Veggies* > createVeggies() const = 0;
  virtual Pepperoni* createPepperoni() const = 0;
  virtual Clams* createClam() const = 0;
  virtual ~PizzaIngredientFactory();
};


#endif
