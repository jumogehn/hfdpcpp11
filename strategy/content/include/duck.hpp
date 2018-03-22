//===--- duck.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_DUCK_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"

namespace headfirst {


  class Duck {

    FlyBehavior* fly_behavior_;
    QuackBehavior* quack_behavior_;

    Duck(const Duck&); // Disable copy constructor
    void operator=(const Duck&); // Disable assignment operator

  protected:
    Duck(FlyBehavior* fly_behavior, QuackBehavior* quack_behavior);

  public:
    virtual ~Duck();
    void SetFlyBehavior(FlyBehavior* fb);
    void SetQuackBehavior(QuackBehavior* qb);
    void PerformFly() const;
    void PerformQuack() const;
    void Swim() const;
    virtual void Display() const = 0;
  };


} //namespace headfirst
#endif
