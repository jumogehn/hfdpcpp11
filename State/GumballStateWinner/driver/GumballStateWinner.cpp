//===--- GumballStateWinner.cpp - -------------------------------*- C++ -*-===//
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
#include <cassert>
#include <memory>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "GumballMachine.hpp"
#include "HasQuarterState.hpp"
#include "NoQuarterState.hpp"
#include "SoldOutState.hpp"
#include "SoldState.hpp"
#include "WinnerState.hpp"


//
// put here to resolve forward reference paradox where GumballMachine
// references State(s) and State references GumballMachine. Note, a
// simple forward 'class' reference is not sufficient to resolve the
// circular (chicken&egg) paradox. Morever, since the intent is to
// preserve as much of the original examples, this minor deviation is
// acceptable.
//
GumballMachine::GumballMachine(int numberGumballs) :
  _count( numberGumballs )
{
  assert( numberGumballs >= 0 );

  std::cout << "GumballMachine::GumballMachine" << std::endl;

  _soldOutState = std::make_shared<SoldOutState>( this );
  _noQuarterState = std::make_shared<NoQuarterState>( this );
  _hasQuarterState = std::make_shared<HasQuarterState>( this );
  _soldState = std::make_shared<SoldState>( this );
  _winnerState = std::make_shared<WinnerState>( this );
  _state = _soldOutState;

  if( _count  > 0 ) {
    _state = _noQuarterState;
  }
}

int main( int argc, char* argv[] ) {

  std::shared_ptr< GumballMachine > gumballMachine( std::make_shared<GumballMachine>( 10 ) );
  std::cout << gumballMachine->toString() << std::endl;

  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();
  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();

  std::cout << gumballMachine->toString() << std::endl;

  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();
  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();

  std::cout << gumballMachine->toString() << std::endl;

  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();
  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();

  std::cout << gumballMachine->toString() << std::endl;

  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();
  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();

  std::cout << gumballMachine->toString() << std::endl;

  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();
  gumballMachine->insertQuarter();
  gumballMachine->turnCrank();

  std::cout << gumballMachine->toString() << std::endl;

  return 0;
}
