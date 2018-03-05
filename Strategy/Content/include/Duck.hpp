//===--- Duck.hpp - ---------------------------------------------*- C++ -*-===//
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
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"


class Duck {

  std::shared_ptr< FlyBehavior > _flyBehavior;
  std::shared_ptr< QuackBehavior > _quackBehavior;

  Duck(const Duck&); // Disable copy constructor
  void operator=(const Duck&); // Disable assignment operator

protected:
  Duck(std::shared_ptr<FlyBehavior> flyBehavior, std::shared_ptr<QuackBehavior> quackBehavior);

public:
  virtual ~Duck();
  void setFlyBehavior(std::shared_ptr<FlyBehavior> fb);
  void setQuackBehavior(std::shared_ptr<QuackBehavior> qb);
  void performFly() const;
  void performQuack() const;
  void swim() const;
  virtual void display() const = 0;
};


#endif
