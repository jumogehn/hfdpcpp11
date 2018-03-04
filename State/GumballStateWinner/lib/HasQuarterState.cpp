//===--- HasQuarterState.hpp - ----------------------------------*- C++ -*-===//
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
#include "HasQuarterState.hpp"
//C system files.
#ifdef WIN32
#include <process.h>
#else
#include <sys/types.h>
#include <unistd.h>
#endif
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "GumballMachine.hpp"



HasQuarterState::HasQuarterState( GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine ), _random( 0 )
{
  assert( gumballMachine );
  std::cout << "HasQuarterState::HasQuarterState" << std::endl;
#ifdef WIN32
  srand( _getpid() );
#else
  srand( getpid() );
#endif
}
void HasQuarterState::insertQuarter() const
{
  std::cout << "HasQuarterState::insertQuarter" << std::endl;
  std::cout << "You can't insert another quarter" << std::endl;
}
void HasQuarterState::ejectQuarter() const
{
  std::cout << "HasQuarterState::ejectQuarter" << std::endl;
  std::cout << "Quarter returned" << std::endl;
  _gumballMachine->setState( _gumballMachine->getNoQuarterState() );
}
void HasQuarterState::turnCrank() const
{
  std::cout << "HasQuarterState::turnCrank" << std::endl;
  std::cout << "You turned..." << std::endl;
  int winner = rand() % 5;
  if( ( winner == 0 ) && ( _gumballMachine->getCount() > 0 ) ) {
    _gumballMachine->setState( _gumballMachine->getWinnerState() );
  } else {
    _gumballMachine->setState( _gumballMachine->getSoldState() );
  }
}
void HasQuarterState::dispense()
{
  std::cout << "HasQuarterState::dispense" << std::endl;
  std::cout << "No gumball dispensed" << std::endl;
}
std::string HasQuarterState::toString() const
{
  std::cout << "HasQuarterState::toString" << std::endl;
  return "waiting for turn of crank";
}
