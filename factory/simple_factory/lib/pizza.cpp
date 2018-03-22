//===--- pizza.cpp - --------------------------------------------*- C++ -*-===//
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

namespace headfirst {


  Pizza::Pizza()
  {
    std::cout << "Pizza::Pizza" << std::endl;
  }

  Pizza::~Pizza()
  {
    std::cout << "Pizza::~Pizza" << std::endl;
  }
  std::string Pizza::GetName() const
  {
    std::cout << "Pizza::GetName" << std::endl;
    return name_;
  }
  void Pizza::Prepare() const
  {
    std::cout << "Pizza::Prepare" << std::endl;
    std::cout << "Preparing " << name_.c_str() << std::endl;
  }
  void Pizza::Bake() const
  {
    std::cout << "Pizza::Bake" << std::endl;
    std::cout << "Baking " << name_.c_str() << std::endl;
  }
  void Pizza::Cut() const
  {
    std::cout << "Pizza::Cut" << std::endl;
    std::cout << "Cutting " << name_.c_str() << std::endl;
  }
  void Pizza::Box() const
  {
    std::cout << "Pizza::Box" << std::endl;
    std::cout << "Boxing " << name_.c_str() << std::endl;
  }
  std::string Pizza::ToString() const
  {
    std::cout << "Pizza::ToString" << std::endl;
    // code to display pizza name and ingredients
    std::stringstream value;
    value << "---- " << name_.c_str() << " ----" << std::endl;
    value << dough_.c_str() << std::endl;
    value << sauce_.c_str() << std::endl;
    //http://en.cppreference.com/w/cpp/language/range-for
    for( const std::string &topping : toppings_ ) {
      value << topping.c_str() << std::endl;
    }
    return value.str();
  }

} //namespace headfirst
