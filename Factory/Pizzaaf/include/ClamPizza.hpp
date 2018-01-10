//===--- ClamPizza.hpp - ----------------------------------------*- C++ -*-===//
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
#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"


class ClamPizza : public Pizza {

  mutable std::unique_ptr< PizzaIngredientFactory > _ingredientFactory;

public:
  explicit ClamPizza(PizzaIngredientFactory* ingredientFactory);
  void prepare() const;
};


#endif
