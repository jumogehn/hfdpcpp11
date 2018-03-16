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
#include "duck.hpp"
#include "duck_adapter.hpp"
#include "mallard_duck.hpp"
#include "turkey.hpp"
#include "turkey_adapter.hpp"
#include "wild_turkey.hpp"


void TestDuck( const Duck* duck )
{
  std::cout << "TestDuck" << std::endl;
  duck->Quack();
  duck->Fly();
}

int main( int argc, char* argv[] )
{

  std::unique_ptr<MallardDuck> duck( new MallardDuck() );
  std::unique_ptr<Turkey> duck_adapter( new DuckAdapter( duck.get() ));

  for( auto i = 0; i < 10; i++ ) {
    std::cout << "The DuckAdapter says..." << std::endl;
    duck_adapter->Gobble();
    duck_adapter->Fly();
  }

  std::unique_ptr<WildTurkey> turkey( new WildTurkey() );
  std::unique_ptr<Duck> turkey_adapter( new TurkeyAdapter(turkey.get()) );

  std::cout << "The Turkey says..." << std::endl;
  turkey->Gobble();
  turkey->Fly();

  std::cout << "The Duck says..." << std::endl;
  TestDuck( duck.get() );

  std::cout << "The TurkeyAdapter says..." << std::endl;
  TestDuck( turkey_adapter.get() );

  return 0;
}

