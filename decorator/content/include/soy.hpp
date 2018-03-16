//===--- soy.hpp - ----------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_SOY_HPP_
#define _HFDP_CPP_DECORATOR_SOY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "beverage.hpp"
#include "condiment_decorator.hpp"


class Soy : public CondimentDecorator {

  const Beverage* _beverage;

public:
  explicit Soy(const Beverage* beverage);
  ~Soy();
  std::string getDescription() const;
  double cost() const;
};


#endif
