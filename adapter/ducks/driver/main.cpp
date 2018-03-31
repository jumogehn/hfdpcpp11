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


void TestDuck( const std::shared_ptr<headfirst::Duck> duck )
{
  std::cout << "TestDuck" << std::endl;
  duck->Quack();
  duck->Fly();
}

int main( int argc, char* argv[] )
{

  std::shared_ptr<headfirst::MallardDuck> duck
    = std::make_shared<headfirst::MallardDuck>();
  std::unique_ptr<headfirst::Turkey>
    duck_adapter( new headfirst::DuckAdapter(duck));

  for( auto i = 0; i < 10; i++ ) {
    std::cout << "The DuckAdapter says..." << std::endl;
    duck_adapter->Gobble();
    duck_adapter->Fly();
  }

  std::shared_ptr<headfirst::WildTurkey> turkey
    = std::make_shared<headfirst::WildTurkey>();
  std::shared_ptr<headfirst::TurkeyAdapter> turkey_adapter
    = std::make_shared<headfirst::TurkeyAdapter>(turkey);

  std::cout << "The Turkey says..." << std::endl;
  turkey->Gobble();
  turkey->Fly();

  std::cout << "The Duck says..." << std::endl;
  TestDuck(duck);

  std::cout << "The TurkeyAdapter says..." << std::endl;
  TestDuck(turkey_adapter);

  return 0;
}

