//===--- duck.cpp - ---------------------------------------------*- C++ -*-===//
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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "duck.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
#include <utility>
//Other libraries' .h files.
//Your project's .h files.
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"

namespace headfirst {


  Duck::Duck(std::unique_ptr<FlyBehavior> fly_behavior,
             std::unique_ptr<QuackBehavior> quack_behavior) :
    fly_behavior_(std::move(fly_behavior))
    , quack_behavior_(std::move(quack_behavior))
  {
    assert(fly_behavior_);
    assert(quack_behavior_);
    std::cout << "Duck::Duck" << std::endl;
  }

  Duck::~Duck()
  {
    std::cout << "Duck::~Duck" << std::endl;
  }
  void Duck::SetFlyBehavior(std::unique_ptr<FlyBehavior> fb)
  {
    assert(fb);
    std::cout << "Duck::SetFlyBehavior" << std::endl;
    fly_behavior_ = std::move(fb);
  }
  void Duck::SetQuackBehavior(std::unique_ptr<QuackBehavior> qb)
  {
    assert(qb);
    std::cout << "Duck::SetQuackBehavior" << std::endl;
    quack_behavior_ = std::move(qb);
  }
  void Duck::PerformFly() const
  {
    assert(fly_behavior_);
    std::cout << "Duck::PerformFly" << std::endl;
    fly_behavior_->Fly();
  }
  void Duck::PerformQuack() const
  {
    assert(quack_behavior_);
    std::cout << "Duck::PerformQuack" << std::endl;
    quack_behavior_->Quack();
  }
  void Duck::Swim() const
  {
    std::cout << "Duck::Swim" << std::endl;
    std::cout << "All ducks float, even decoys!" << std::endl;
  }

} //namespace headfirst
