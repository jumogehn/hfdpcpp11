//===--- quack_behavior.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_QUACK_BEHAVIOR_HPP_
#define _HFDP_CPP_STRATEGY_QUACK_BEHAVIOR_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.



class QuackBehavior {

public:
  virtual ~QuackBehavior();
  virtual void Quack() const = 0;
};


#endif
