//===--- pizza.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PIZZA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "cheese.hpp"
#include "clams.hpp"
#include "dough.hpp"
#include "pepperoni.hpp"
#include "sauce.hpp"
#include "veggies.hpp"


class Pizza {

  std::string name_;

  Pizza(const Pizza&); // Disable copy constructor
  void operator=(const Pizza&); // Disable assignment operator

protected:
  mutable std::unique_ptr< Dough > dough_;
  mutable std::unique_ptr< Sauce > sauce_;
  mutable std::vector< Veggies * > *veggies_;
  mutable std::unique_ptr< Cheese > cheese_;
  mutable std::unique_ptr< Pepperoni > pepperoni_;
  mutable std::unique_ptr< Clams > clam_;

  Pizza();

public:
  virtual void Prepare() const = 0;

  virtual ~Pizza();
  virtual void Bake() const;
  virtual void Cut() const;
  virtual void Box() const;
  void SetName(std::string name);
  std::string GetName() const;
  std::string ToString() const;
};


#endif
