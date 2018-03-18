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
#include <iostream>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "fly_behavior.hpp"
#include "quack_behavior.hpp"


Duck::Duck(FlyBehavior* fly_behavior, QuackBehavior* quack_behavior) :
  fly_behavior_(fly_behavior), quack_behavior_(quack_behavior)
{
  assert(fly_behavior); assert(quack_behavior);
  std::cout << "Duck::Duck" << std::endl;
}

Duck::~Duck()
{
  std::cout << "Duck::~Duck" << std::endl;
}
void Duck::SetFlyBehavior(FlyBehavior* fb)
{
  assert(fb);
  std::cout << "Duck::SetFlyBehavior" << std::endl;
  fly_behavior_ = fb;
}
void Duck::SetQuackBehavior(QuackBehavior* qb)
{
  assert(qb);
  std::cout << "Duck::SetQuackBehavior" << std::endl;
  quack_behavior_ = qb;
}
void Duck::PerformFly() const
{
  std::cout << "Duck::PerformFly" << std::endl;
  fly_behavior_->Fly();
}
void Duck::PerformQuack() const
{
  std::cout << "Duck::PerformQuack" << std::endl;
  quack_behavior_->Quack();
}
void Duck::Swim() const
{
  std::cout << "Duck::Swim" << std::endl;
  std::cout << "All ducks float, even decoys!" << std::endl;
}

