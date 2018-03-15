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
#include "pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <sstream>
#include <string>
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
std::string Pizza::getName() const
{
  std::cout << "Pizza::getName" << std::endl;
  return _name;
}
void Pizza::prepare() const
{
  std::cout << "Pizza::prepare" << std::endl;
  std::cout << "Preparing " << _name.c_str() << std::endl;
}
void Pizza::bake() const
{
  std::cout << "Pizza::bake" << std::endl;
  std::cout << "Baking " << _name.c_str() << std::endl;
}
void Pizza::cut() const
{
  std::cout << "Pizza::cut" << std::endl;
  std::cout << "Cutting " << _name.c_str() << std::endl;
}
void Pizza::box() const
{
  std::cout << "Pizza::box" << std::endl;
  std::cout << "Boxing " << _name.c_str() << std::endl;
}
std::string Pizza::toString() const
{
  std::cout << "Pizza::toString" << std::endl;
  // code to display pizza name and ingredients
  std::stringstream value;
  value << "---- " << _name.c_str() << " ----" << std::endl;
  value << _dough.c_str() << std::endl;
  value << _sauce.c_str() << std::endl;
  //http://en.cppreference.com/w/cpp/language/range-for
  for( const std::string &topping : _toppings ) {
    value << topping.c_str() << std::endl;
  }
  return value.str();
}

