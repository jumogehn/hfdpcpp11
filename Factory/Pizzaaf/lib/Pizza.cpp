//===--- Pizza.cpp - --------------------------------------------*- C++ -*-===//
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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "Pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.


Pizza::Pizza()
{
  std::cout << "Pizza::Pizza" << std::endl;
}

Pizza::~Pizza()
{
  std::cout << "Pizza::~Pizza" << std::endl;
  for (std::vector< Veggies* >::iterator iterator = _veggies.begin();
    _veggies.end() != iterator; ++iterator) {
    delete *iterator;
  }
  _veggies.clear();
}
void Pizza::bake() const
{
  std::cout << "Pizza::bake" << std::endl;
  std::cout << "Bake for 25 minutes at 350" << std::endl;
}
void Pizza::cut() const
{
  std::cout << "Pizza::cut" << std::endl;
  std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}
void Pizza::box() const
{
  std::cout << "Pizza::box" << std::endl;
  std::cout << "Place pizza in official PizzaStore box" << std::endl;
}
void Pizza::setName(std::string name)
{
  std::cout << "Pizza::setName" << std::endl;
  _name = name;
}
std::string Pizza::getName() const
{
  std::cout << "Pizza::getName" << std::endl;
  return _name;
}
std::string Pizza::toString() const
{
  std::cout << "Pizza::toString" << std::endl;
  std::stringstream value;
  value << "---- " << _name.c_str() << " ----" << std::endl;

  if (_dough.get() != 0) {
    value << _dough->toString();
    value << std::endl;
  }
  if (_sauce.get() != 0) {
    value << _sauce->toString();
    value << std::endl;
  }
  if (_cheese.get() != 0) {
    value << _cheese->toString();
    value << std::endl;
  }
  if (_clam.get() != 0) {
    value << _clam->toString();
    value << std::endl;
  }
  if (_pepperoni.get() != 0) {
    value << _pepperoni->toString();
    value << std::endl;
  }
  if (_veggies.size() != 0) {
    for (std::vector< Veggies* >::iterator iterator = _veggies.begin();
      _veggies.end() != iterator; ++iterator) {
      value << (*iterator)->toString() << ", ";
    }
    value << std::endl;
  }

  return value.str();
}
