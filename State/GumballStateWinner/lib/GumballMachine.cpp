//===--- GumballMachine.hpp - -----------------------------------*- C++ -*-===//
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
#include "GumballMachine.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "HasQuarterState.hpp"
#include "NoQuarterState.hpp"
#include "SoldOutState.hpp"
#include "SoldState.hpp"
#include "State.hpp"
#include "WinnerState.hpp"


GumballMachine::GumballMachine()
{
  std::cout << "GumballMachine::GumballMachine" << std::endl;
}

int GumballMachine::init(int numberGumballs )
{
  assert( numberGumballs >= 0 );

  std::cout << "GumballMachine::init" << std::endl;

  _count = numberGumballs;

  _soldOutState = std::make_shared<SoldOutState>( shared_from_this() );
  _noQuarterState = std::make_shared<NoQuarterState>( shared_from_this() );
  _hasQuarterState = std::make_shared<HasQuarterState>( shared_from_this() );
  _soldState = std::make_shared<SoldState>( shared_from_this() );
  _winnerState = std::make_shared<WinnerState>( shared_from_this() );
  _state = _soldOutState;

  if( _count  > 0 ) {
    _state = _noQuarterState;
  }

  return 0;
}
GumballMachine::~GumballMachine()
{
  std::cout << "GumballMachine::~GumballMachine" << std::endl;

  //delete _soldOutState;
  //delete _noQuarterState;
  //delete _hasQuarterState;
  //delete _soldState;
  //delete _winnerState;
}
void GumballMachine::insertQuarter() const
{
  std::cout << "GumballMachine::insertQuarter" << std::endl;
  _state->insertQuarter();
}
void GumballMachine::ejectQuarter() const
{
  std::cout << "GumballMachine::ejectQuarter" << std::endl;
  _state->ejectQuarter();
}
void GumballMachine::turnCrank() const
{
  std::cout << "GumballMachine::turnCrank" << std::endl;
  _state->turnCrank();
  _state->dispense();
}
void GumballMachine::setState( std::shared_ptr<State> state )
{
  assert( state );
  std::cout << "GumballMachine::setState" << std::endl;
  _state = state;
}
void GumballMachine::releaseBall()
{
  std::cout << "GumballMachine::releaseBall" << std::endl;
  std::cout << "A gumball comes rolling out the slot..." << std::endl;
  if( _count != 0) {
    _count--;
  }
}
int GumballMachine::getCount() const
{
  std::cout << "GumballMachine::getCount" << std::endl;
  return _count;
}
void GumballMachine::refill( int count )
{
  assert( count > 0 );
  std::cout << "GumballMachine::refill" << std::endl;
  _count = count;
  _state = _noQuarterState;
}
std::shared_ptr<State> GumballMachine::getState() const
{
  std::cout << "GumballMachine::getState" << std::endl;
  return _state;
}
std::shared_ptr<State> GumballMachine::getSoldOutState() const
{
  std::cout << "GumballMachine::getSoldOutState" << std::endl;
  return _soldOutState;
}
std::shared_ptr<State> GumballMachine::getNoQuarterState() const
{
  std::cout << "GumballMachine::getNoQuarterState" << std::endl;
  return _noQuarterState;
}
std::shared_ptr<State> GumballMachine::getHasQuarterState() const
{
  std::cout << "GumballMachine::getHasQuarterState" << std::endl;
  return _hasQuarterState;
}
std::shared_ptr<State> GumballMachine::getSoldState() const
{
  std::cout << "GumballMachine::getSoldState" << std::endl;
  return _soldState;
}
std::shared_ptr<State> GumballMachine::getWinnerState() const
{
  std::cout << "GumballMachine::getWinnerState" << std::endl;
  return _winnerState;
}
std::string GumballMachine::toString() const
{
  std::cout << "GumballMachine::toString" << std::endl;
  std::stringstream value;
  value << std::endl << "Mighty Gumball, Inc.";
  value << std::endl << "C++-enabled Standing Gumball Model #2004";
  value << std::endl << "Inventory: " << _count << " gumball";
  if( _count > 1 ) {
    value << "s";
  }
  value << std::endl;
  value << "Machine is " << _state->toString() << std::endl;
  return value.str();
}
