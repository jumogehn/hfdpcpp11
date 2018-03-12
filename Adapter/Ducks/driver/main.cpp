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
//#include "DucksConfig.h"
#include "MallardDuck.hpp"
#include "Turkey.hpp"
#include "TurkeyAdapter.hpp"
#include "WildTurkey.hpp"


void testDuck( const std::shared_ptr<Duck> duck )
{
  std::cout << "testDuck" << std::endl;
  duck->quack();
  duck->fly();
}

int main( int argc, char* argv[] )
{
//  std::cout << argv[0] << " Version " << Ducks_VERSION_MAJOR << "."
//    << Ducks_VERSION_MINOR << std::endl << std::endl;

  auto duck( std::make_shared<MallardDuck>() );
  std::shared_ptr< Turkey > duckAdapter = std::make_shared<DuckAdapter>( duck );

  for( int i = 0; i < 10; i++ ) {
    std::cout << "The DuckAdapter says..." << std::endl;
    duckAdapter->gobble();
    duckAdapter->fly();
  }

  auto turkey( std::make_shared<WildTurkey>() );
  std::shared_ptr< Duck > turkeyAdapter = std::make_shared<TurkeyAdapter>( turkey );

  std::cout << "The Turkey says..." << std::endl;
  turkey->gobble();
  turkey->fly();

  std::cout << "The Duck says..." << std::endl;
  testDuck( duck );

  std::cout << "The TurkeyAdapter says..." << std::endl;
  testDuck( turkeyAdapter );

  return 0;
}

