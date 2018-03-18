//===--- coffee.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_COFFEE_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_COFFEE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "caffeine_beverage.hpp"


class Coffee : public CaffeineBeverage {

public:
  void Brew() const;
  void AddCondiments() const;
};


#endif
