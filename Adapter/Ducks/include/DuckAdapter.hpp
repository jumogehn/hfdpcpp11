//===--- DuckAdapter.hpp - --------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_ADAPTERMyDuck_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTERMyDuck_ADAPTER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "DuckAdapter.hpp"
#include "Turkey.hpp"


class DuckAdapter : public Turkey {

  const std::shared_ptr<Duck> MyDuck;
  int _random;

  DuckAdapter( const DuckAdapter& ); // Disable copy constructor
  void operator=( const DuckAdapter& ); // Disable assignment operator

public:
  explicit DuckAdapter( const std::shared_ptr<Duck> duck );
  void fly() const;
  void gobble() const;
};

#endif
