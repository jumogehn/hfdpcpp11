//===--- WinnerState.hpp - --------------------------------------*- C++ -*-===//
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
#include "WinnerState.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "GumballMachine.hpp"



WinnerState::WinnerState( GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine )
{
  assert( gumballMachine );
  std::cout << "WinnerState::WinnerState" << std::endl;
}
void WinnerState::insertQuarter() const
{
  std::cout << "WinnerState::insertQuarter" << std::endl;
  std::cout << "Please wait, we're already giving you a Gumball"
    << std::endl;
}
void WinnerState::ejectQuarter() const
{
  std::cout << "WinnerState::ejectQuarter" << std::endl;
  std::cout << "Please wait, we're already giving you a Gumball"
    << std::endl;
}
void WinnerState::turnCrank() const
{
  std::cout << "WinnerState::turnCrank" << std::endl;
  std::cout << "Turning again doesn't get you another gumball!"
    << std::endl;
}
void WinnerState::dispense()
{
  std::cout << "WinnerState::dispense" << std::endl;
  std::cout << "YOU'RE A WINNER! You get two gumballs for your quarter"
    << std::endl;
  _gumballMachine->releaseBall();
  if( _gumballMachine->getCount() == 0 ) {
    _gumballMachine->setState( _gumballMachine->getSoldOutState() );
  } else {
    _gumballMachine->releaseBall();
    if( _gumballMachine->getCount() > 0 ) {
      _gumballMachine->setState( _gumballMachine->getNoQuarterState() );
    } else {
      std::cout << "Oops, out of gumballs!" << std::endl;
      _gumballMachine->setState( _gumballMachine->getSoldOutState() );
    }
  }
}
std::string WinnerState::toString() const
{
  std::cout << "WinnerState::toString" << std::endl;
  return "despensing two gumballs for your quarter,"
    " because YOU'RE A WINNER!";
}
