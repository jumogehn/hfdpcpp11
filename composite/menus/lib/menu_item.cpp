//===--- menu_item.cpp - ----------------------------------------*- C++ -*-===//
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
#include "menu_item.hpp"
//C system files.
//C++ system files.
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  MenuItem::MenuItem( const std::string name, const std::string description,
                      bool vegetarian, double price ) :
    name_( name ), description_( description ),
    vegetarian_( vegetarian ), price_( price )
  {
    std::cout << "MenuItem::MenuItem" << std::endl;
  }
  std::string MenuItem::GetName() const
  {
    std::cout << "MenuItem::GetName" << std::endl;
    return name_;
  }
  std::string MenuItem::GetDescription() const
  {
    std::cout << "MenuItem::GetDescription" << std::endl;
    return description_;
  }
  double MenuItem::GetPrice() const
  {
    std::cout << "MenuItem::getPrice" << std::endl;
    return price_;
  }
  bool MenuItem::IsVegetarian() const
  {
    std::cout << "MenuItem::isVegetarian" << std::endl;
    return vegetarian_;
  }
  void MenuItem::Print() const
  {
    std::cout << "MenuItem::print" << std::endl;
    std::cout << "  " << GetName().c_str();
    if( IsVegetarian() ) {
      std::cout << "(v)";
    }
    std::cout << ", " << GetPrice() << std::endl;
    std::cout << "     -- " << GetDescription().c_str() << std::endl;
  }


} //namespace headfirst
