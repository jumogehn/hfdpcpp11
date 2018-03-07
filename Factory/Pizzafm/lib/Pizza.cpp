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
#include <list>
//Other libraries' .h files.
//Your project's .h files.


Pizza::Pizza()
{
  std::cout << "Pizza::Pizza" << std::endl;
}

Pizza::~Pizza()
{
  std::cout << "Pizza::~Pizza" << std::endl;
}
void Pizza::prepare() const
{
  std::cout << "Pizza::prepare" << std::endl;
  std::cout << "Preparing " << _name.c_str() << std::endl;
  std::cout << "Tossing dough..." << std::endl;
  std::cout << "Adding sauce..." << std::endl;
  std::cout << "Adding toppings: " << std::endl;
  for( const std::string &topping : _toppings ) {
    std::cout << "   " << topping.c_str() << std::endl;
  }
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
std::string Pizza::getName() const
{
  std::cout << "Pizza::getName" << std::endl;
  return _name;
}
std::string Pizza::toString() const
{
  std::cout << "Pizza::toString" << std::endl;
  // code to display pizza name and ingredients
  std::stringstream value;
  value << "---- " << _name.c_str() << " ----" << std::endl;
  value << _dough.c_str() << std::endl;
  value << _sauce.c_str() << std::endl;
  for( const std::string &topping : _toppings ) {
    value << topping.c_str() << std::endl;
  }
  return value.str();
}
