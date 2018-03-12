//===--- DuckAdapter.cpp - --------------------------------------*- C++ -*-===//
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
#include "DuckAdapter.hpp"
//C system files.
#ifdef WIN32
#include <process.h>
#else
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#endif
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


DuckAdapter::DuckAdapter( const Duck* duck ) :
  MyDuck ( duck )
{
  std::cout << "DuckAdapter::DuckAdapter" << std::endl;
#ifdef WIN32
  srand( _getpid() );
#else
  srand( getpid() );
#endif
  _random = rand() % 5;
  if( _random == 0 )
    _random = 1;
}

void DuckAdapter::fly() const
{
  std::cout << "DuckAdapter::fly" << std::endl;
  for( int i = 0; i < _random; i++ ) {
    MyDuck->fly();
  }
}

void DuckAdapter::gobble() const
{
  std::cout << "DuckAdapter::gobble" << std::endl;
  MyDuck->quack();
}

