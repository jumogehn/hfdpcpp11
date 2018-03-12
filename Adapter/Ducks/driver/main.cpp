//===--- main.cpp - ---------------------------------------------*- C++ -*-===//
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
//C system files.
//C++ system files.
#include <memory>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "DuckAdapter.hpp"
#include "MallardDuck.hpp"
#include "Turkey.hpp"
#include "TurkeyAdapter.hpp"
#include "WildTurkey.hpp"


void testDuck( const Duck* duck )
{
  std::cout << "testDuck" << std::endl;
  duck->quack();
  duck->fly();
}

int main( int argc, char* argv[] )
{

  std::unique_ptr<MallardDuck> duck( new MallardDuck() );
  std::unique_ptr<Turkey> duckAdapter( new DuckAdapter( duck.get() ));

  for( auto i = 0; i < 10; i++ ) {
    std::cout << "The DuckAdapter says..." << std::endl;
    duckAdapter->gobble();
    duckAdapter->fly();
  }

  std::unique_ptr<WildTurkey> turkey( new WildTurkey() );
  std::unique_ptr<Duck> turkeyAdapter( new TurkeyAdapter(turkey.get()) );

  std::cout << "The Turkey says..." << std::endl;
  turkey->gobble();
  turkey->fly();

  std::cout << "The Duck says..." << std::endl;
  testDuck( duck.get() );

  std::cout << "The TurkeyAdapter says..." << std::endl;
  testDuck( turkeyAdapter.get() );

  return 0;
}

