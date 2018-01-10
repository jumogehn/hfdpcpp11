//===--- PizzaStore.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_STORE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_STORE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "Pizza.hpp"



class PizzaStore {

protected:
  PizzaStore();
public:
  virtual ~PizzaStore();
  std::unique_ptr< Pizza > orderPizza(std::string type) const;
  virtual std::unique_ptr< Pizza > createPizza(std::string type) const = 0;
};

#endif
