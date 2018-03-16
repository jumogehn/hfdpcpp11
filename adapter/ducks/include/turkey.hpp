//===--- Turkey.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_ADAPTER_TURKEY_HPP_
#define _HFDP_CPP_ADAPTER_TURKEY_HPP_



class Turkey {

public:
  virtual ~Turkey();
  virtual void Gobble() const = 0;
  virtual void Fly() const = 0;
};


#endif
