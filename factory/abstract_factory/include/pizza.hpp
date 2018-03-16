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

  std::string _name;

  Pizza(const Pizza&); // Disable copy constructor
  void operator=(const Pizza&); // Disable assignment operator

protected:
  mutable std::shared_ptr< Dough > _dough;
  mutable std::shared_ptr< Sauce > _sauce;
  mutable std::vector< std::shared_ptr<Veggies> > _veggies;
  mutable std::shared_ptr< Cheese > _cheese;
  mutable std::shared_ptr< Pepperoni > _pepperoni;
  mutable std::shared_ptr< Clams > _clam;

  Pizza();

public:
  virtual void prepare() const = 0;

  virtual ~Pizza();
  virtual void bake() const;
  virtual void cut() const;
  virtual void box() const;
  void setName(std::string name);
  std::string getName() const;
  std::string toString() const;
};


#endif
