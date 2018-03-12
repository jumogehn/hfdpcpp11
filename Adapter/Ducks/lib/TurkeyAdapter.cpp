//===--- TurkeyAdapter.cpp - ------------------------------------*- C++ -*-===//
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
#include "TurkeyAdapter.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


TurkeyAdapter::TurkeyAdapter( const Turkey* turkey ) :
  MyTurkey( turkey )
{
  std::cout << "TurkeyAdapter::TurkeyAdapter" << std::endl;
}

void TurkeyAdapter::fly() const
{
  std::cout << "TurkeyAdapter::fly" << std::endl;
  for( auto i = 0; i < 5; i++ ) {
    MyTurkey->fly();
  }
}

void TurkeyAdapter::quack() const
{
  std::cout << "TurkeyAdapter::quack" << std::endl;
  MyTurkey->gobble();
}

