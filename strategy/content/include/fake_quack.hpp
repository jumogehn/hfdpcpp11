//===--- fake_quack.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_FAKE_QUACK_HPP_
#define _HFDP_CPP_STRATEGY_FAKE_QUACK_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "quack_behavior.hpp"

namespace headfirst {

  class FakeQuack : public QuackBehavior {

  public:
    void Quack() const;
  };


} //namespace headfirst
#endif
