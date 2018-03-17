//===--- chicago_pizza_ingredient_factory.hpp - -----------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_INGREDIENT_FACTORY_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHICAGO_INGREDIENT_FACTORY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <vector>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese.hpp"
#include "clams.hpp"
#include "dough.hpp"
#include "sauce.hpp"
#include "pepperoni.hpp"
#include "pizza_ingredient_factory.hpp"
#include "veggies.hpp"


class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {

public:
  std::shared_ptr<Dough> CreateDough() const;
  std::shared_ptr<Sauce> CreateSauce() const;
  std::shared_ptr<Cheese> CreateCheese() const;
  std::vector< std::shared_ptr<Veggies> > CreateVeggies() const;
  std::shared_ptr<Pepperoni> CreatePepperoni() const;
  std::shared_ptr<Clams> CreateClam() const;
};


#endif
