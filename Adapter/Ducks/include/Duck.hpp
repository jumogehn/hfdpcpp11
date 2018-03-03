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

#ifndef	_HFDP_CPP_ADAPTER_DUCK_HPP_
#define _HFDP_CPP_ADAPTER_DUCK_HPP_


class Duck {

public:
  virtual ~Duck();
  virtual void fly() const = 0;
  virtual void quack() const = 0;
};


#endif
