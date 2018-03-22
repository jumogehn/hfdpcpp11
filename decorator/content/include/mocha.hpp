//===--- mocha.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_MOCHA_HPP_
#define _HFDP_CPP_DECORATOR_MOCHA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "beverage.hpp"
#include "condiment_decorator.hpp"

namespace headfirst {


  class Mocha : public CondimentDecorator {

    const Beverage* beverage_;

  public:
    explicit Mocha(const Beverage* beverage);
    ~Mocha();
    std::string GetDescription() const;
    double Cost() const;
  };


} //namespace headfirst
#endif
