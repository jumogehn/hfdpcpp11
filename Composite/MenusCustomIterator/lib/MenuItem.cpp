//===--- MenuItem.cpp - -----------------------------------------*- C++ -*-===//
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
#include "MenuItem.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


MenuItem::MenuItem( const std::string name, const std::string description,
                    bool vegetarian, double price ) :
  _name( name ), _description( description ),
  _vegetarian( vegetarian ), _price( price )
{
  std::cout << "MenuItem::MenuItem" << std::endl;
}
std::string MenuItem::getName() const
{
  std::cout << "MenuItem::getName" << std::endl;
  return _name;
}
std::string MenuItem::getDescription() const
{
  std::cout << "MenuItem::getDescription" << std::endl;
  return _description;
}
double MenuItem::getPrice() const
{
  std::cout << "MenuItem::getPrice" << std::endl;
  return _price;
}
bool MenuItem::isVegetarian() const
{
  std::cout << "MenuItem::isVegetarian" << std::endl;
  return _vegetarian;
}
void MenuItem::print() const
{
  std::cout << "MenuItem::print" << std::endl;
  std::cout << "  " << getName().c_str();
  if( isVegetarian() ) {
    std::cout << "(v)";
  }
  std::cout << ", " << getPrice() << std::endl;
  std::cout << "     -- " << getDescription().c_str() << std::endl;
}
