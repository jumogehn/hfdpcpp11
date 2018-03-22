//===--- beverage.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_BEVERAGE_HPP_
#define _HFDP_CPP_DECORATOR_BEVERAGE_HPP_


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.


namespace headfirst {

  class Beverage {

  protected:
    std::string description_;

    Beverage();
  public:
    virtual ~Beverage();
    virtual std::string GetDescription() const;
    virtual double Cost() const = 0;
  };


} //namespace headfirst
#endif
