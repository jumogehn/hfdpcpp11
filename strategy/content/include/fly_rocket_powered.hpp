//===--- fly_rocket_powered.hpp - -------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_FLY_ROCKET_POWERED_HPP_
#define _HFDP_CPP_STRATEGY_FLY_ROCKET_POWERED_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "fly_behavior.hpp"

namespace headfirst {


  class FlyRocketPowered : public FlyBehavior {

  public:
    void Fly() const;
  };


} //namespace headfirst
#endif
