//===--- TurkeyAdapter.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_ADAPTERMyTurkey_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTERMyTurkey_ADAPTER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "Turkey.hpp"


class TurkeyAdapter : public Duck {

  const std::shared_ptr<Turkey> MyTurkey;

  TurkeyAdapter( const TurkeyAdapter& ); // Disable copy constructor
  void operator=( const TurkeyAdapter& ); // Disable assignment operator

public:
  explicit TurkeyAdapter( const std::shared_ptr<Turkey> turkey );
  void fly() const;
  void quack() const;
};


#endif
