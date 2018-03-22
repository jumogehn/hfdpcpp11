//===--- decoy_duck.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_DECOY_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_DECOY_DUCK_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"

namespace headfirst {

  class DecoyDuck : public Duck {

  public:
    DecoyDuck();
    void Display() const;
  };


} //namespace headfirst
#endif
