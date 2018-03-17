//===--- clam_pizza.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CLAM_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CLAM_PIZZA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"
#include "pizza_ingredient_factory.hpp"


class ClamPizza : public Pizza {

  mutable std::shared_ptr< PizzaIngredientFactory > ingredient_factory_;

public:
  explicit ClamPizza(std::shared_ptr<PizzaIngredientFactory> ingredient_factory);
  void Prepare() const;
};


#endif
