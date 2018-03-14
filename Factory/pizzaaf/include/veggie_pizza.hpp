//===--- VegiePizza.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_VEGGIE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_VEGGIE_PIZZA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"
#include "pizza_ingredient_factory.hpp"


class VeggiePizza : public Pizza {

  mutable std::shared_ptr<PizzaIngredientFactory> _ingredientFactory;

public:
  explicit VeggiePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory);
public:
  void prepare() const;
};


#endif
