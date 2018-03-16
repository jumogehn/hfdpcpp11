//===--- no_quarter_state.hpp - ---------------------------------*- C++ -*-===//
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
#include "no_quarter_state.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"


NoQuarterState::NoQuarterState( GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine )
{
  assert( gumballMachine );
  std::cout << "NoQuarterState::NoQuarterState" << std::endl;
}
void NoQuarterState::insertQuarter() const
{
  std::cout << "NoQuarterState::insertQuarter" << std::endl;
  std::cout << "You inserted a quarter" << std::endl;
  _gumballMachine->setState( _gumballMachine->getHasQuarterState() );
}
void NoQuarterState::ejectQuarter() const
{
  std::cout << "NoQuarterState::ejectQuarter" << std::endl;
  std::cout << "You haven't inserted a quarter" << std::endl;
}
void NoQuarterState::turnCrank() const
{
  std::cout << "NoQuarterState::turnCrank" << std::endl;
  std::cout << "You turned, but there's no quarter" << std::endl;
}
void NoQuarterState::dispense()
{
  std::cout << "NoQuarterState::dispense" << std::endl;
  std::cout << "You need to pay first" << std::endl;
}
std::string NoQuarterState::toString() const
{
  std::cout << "NoQuarterState::toString" << std::endl;
  return "waiting for quarter";
}
