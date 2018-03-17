//===--- pizza_ingredient_factory.hpp - -------------------------*- C++ -*-===//
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
#include <memory>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese.hpp"
#include "clams.hpp"
#include "dough.hpp"
#include "pepperoni.hpp"
#include "sauce.hpp"
#include "veggies.hpp"



class PizzaIngredientFactory {
public:
  virtual std::shared_ptr<Dough> CreateDough() const = 0;
  virtual std::shared_ptr<Sauce> CreateSauce() const = 0;
  virtual std::shared_ptr<Cheese> CreateCheese() const = 0;
  virtual std::vector< std::shared_ptr<Veggies> > CreateVeggies() const = 0;
  virtual std::shared_ptr<Pepperoni> CreatePepperoni() const = 0;
  virtual std::shared_ptr<Clams> CreateClam() const = 0;
  virtual ~PizzaIngredientFactory();
};


#endif
