//===--- duck_adapter.cpp - -------------------------------------*- C++ -*-===//
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
#include "duck_adapter.hpp"
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


namespace headfirst {

  DuckAdapter::DuckAdapter( const Duck* duck ) :
    my_duck_ ( duck )
  {
    assert(my_duck_);
    std::cout << "DuckAdapter::DuckAdapter" << std::endl;
#ifdef WIN32
    srand( _getpid() );
#else
    srand( getpid() );
#endif
    random_num_ = rand() % 5;
    if( random_num_ == 0 )
      random_num_ = 1;
  }

  void DuckAdapter::Fly() const
  {
    assert(my_duck_);
    std::cout << "DuckAdapter::fly" << std::endl;
    for( int i = 0; i < random_num_; i++ ) {
      my_duck_->Fly();
    }
  }

  void DuckAdapter::Gobble() const
  {
    assert(my_duck_);
    std::cout << "DuckAdapter::gobble" << std::endl;
    my_duck_->Quack();
  }

} //namespace headfirst
