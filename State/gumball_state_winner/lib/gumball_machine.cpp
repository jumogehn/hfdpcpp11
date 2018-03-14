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
#include "gumball_machine.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "has_quarter_state.hpp"
#include "no_quarter_state.hpp"
#include "sold_out_state.hpp"
#include "sold_state.hpp"
#include "state.hpp"
#include "winner_state.hpp"


GumballMachine::GumballMachine(int numberGumballs)
{
  std::cout << "GumballMachine::GumballMachine" << std::endl;

  assert( numberGumballs >= 0 );

  _count = numberGumballs;

  _soldOutState = new SoldOutState( this );
  _noQuarterState = new NoQuarterState( this );
  _hasQuarterState = new HasQuarterState( this );
  _soldState = new SoldState( this );
  _winnerState = new WinnerState( this );
  _state = _soldOutState;

  if( _count  > 0 ) {
    _state = _noQuarterState;
  }
}

GumballMachine::~GumballMachine()
{
  std::cout << "GumballMachine::~GumballMachine" << std::endl;
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
void GumballMachine::setState( State* state )
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
State* GumballMachine::getState() const
{
  std::cout << "GumballMachine::getState" << std::endl;
  return _state;
}
State* GumballMachine::getSoldOutState() const
{
  std::cout << "GumballMachine::getSoldOutState" << std::endl;
  return _soldOutState;
}
State* GumballMachine::getNoQuarterState() const
{
  std::cout << "GumballMachine::getNoQuarterState" << std::endl;
  return _noQuarterState;
}
State* GumballMachine::getHasQuarterState() const
{
  std::cout << "GumballMachine::getHasQuarterState" << std::endl;
  return _hasQuarterState;
}
State* GumballMachine::getSoldState() const
{
  std::cout << "GumballMachine::getSoldState" << std::endl;
  return _soldState;
}
State* GumballMachine::getWinnerState() const
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
