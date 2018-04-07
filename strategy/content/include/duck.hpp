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
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"

namespace headfirst {


  class Duck {

    std::unique_ptr<FlyBehavior> fly_behavior_;
    std::unique_ptr<QuackBehavior> quack_behavior_;

    // Disable copy constructor and assignment operator
    Duck(const Duck&) = delete;
    void operator=(const Duck&) = delete;

  protected:
    Duck(std::unique_ptr<FlyBehavior> fly_behavior
         , std::unique_ptr<QuackBehavior> quack_behavior);

  public:
    virtual ~Duck();
    void SetFlyBehavior(std::unique_ptr<FlyBehavior> fb);
    void SetQuackBehavior(std::unique_ptr<QuackBehavior> qb);
    void PerformFly() const;
    void PerformQuack() const;
    void Swim() const;
    virtual void Display() const = 0;
  };


} //namespace headfirst
#endif
