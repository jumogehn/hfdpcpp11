//===--- condiment_decorator.hpp - ------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_CONDIMENT_HPP_
#define _HFDP_CPP_DECORATOR_CONDIMENT_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "beverage.hpp"


namespace headfirst {


  class CondimentDecorator : public Beverage {

    // Disable copy constructor and assignment operator
    CondimentDecorator(const CondimentDecorator&) = delete;
    void operator=(const CondimentDecorator&) = delete;

  protected:
    CondimentDecorator();
  public:
    virtual ~CondimentDecorator();
    virtual std::string GetDescription() const = 0;
  };


} //namespace headfirst
#endif
