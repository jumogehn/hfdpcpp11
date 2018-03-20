//===--- pizza_store.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_METHOD_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_METHOD_PIZZA_STORE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "pizza.hpp"


class PizzaStore {
protected:
  PizzaStore();
public:
  virtual ~PizzaStore();
  virtual std::unique_ptr< Pizza > CreatePizza( std::string type) const = 0;
  std::unique_ptr< Pizza > OrderPizza( std::string type) const;
};


#endif
