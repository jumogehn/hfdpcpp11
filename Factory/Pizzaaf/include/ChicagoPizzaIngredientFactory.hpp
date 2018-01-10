//===--- ChicagoPizzaIngredientFactory.hpp - --------------------*- C++ -*-===//
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
//Other libraries' .h files.
//Your project's .h files.
#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "Sauce.hpp"
#include "Pepperoni.hpp"
#include "PizzaIngredientFactory.hpp"
#include "Veggies.hpp"


class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {

public:
  Dough * createDough() const;
  Sauce* createSauce() const;
  Cheese* createCheese() const;
  std::vector< Veggies* > createVeggies() const;
  Pepperoni* createPepperoni() const;
  Clams* createClam() const;
};


#endif
