//===--- Duck.cpp - ---------------------------------------------*- C++ -*-===//
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
#include "Duck.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"


Duck::Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior) :
  _flyBehavior(flyBehavior), _quackBehavior(quackBehavior)
{
  assert(flyBehavior); assert(quackBehavior);
  std::cout << "Duck::Duck" << std::endl;
}

Duck::~Duck()
{
  std::cout << "Duck::~Duck" << std::endl;
}
void Duck::setFlyBehavior(FlyBehavior* fb)
{
  assert(fb);
  std::cout << "Duck::setFlyBehavior" << std::endl;
  _flyBehavior = fb;
}
void Duck::setQuackBehavior(QuackBehavior* qb)
{
  assert(qb);
  std::cout << "Duck::setQuackBehavior" << std::endl;
  _quackBehavior = qb;
}
void Duck::performFly() const
{
  std::cout << "Duck::performFly" << std::endl;
  _flyBehavior->fly();
}
void Duck::performQuack() const
{
  std::cout << "Duck::performQuack" << std::endl;
  _quackBehavior->quack();
}
void Duck::swim() const
{
  std::cout << "Duck::swim" << std::endl;
  std::cout << "All ducks float, even decoys!" << std::endl;
}

