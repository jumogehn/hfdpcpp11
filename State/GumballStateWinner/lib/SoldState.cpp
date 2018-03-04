//===--- SoldState.hpp - ----------------------------------------*- C++ -*-===//
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
#include "SoldState.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "GumballMachine.hpp"



SoldState::SoldState( std::shared_ptr<GumballMachine> gumballMachine ) :
  _gumballMachine( gumballMachine )
{
  assert( gumballMachine );
  std::cout << "SoldState::SoldState" << std::endl;
}
void SoldState::insertQuarter() const
{
  std::cout << "SoldState::insertQuarter" << std::endl;
  std::cout << "Please wait, we're already giving you a gumball"
    << std::endl;
}
void SoldState::ejectQuarter() const
{
  std::cout << "SoldState::ejectQuarter" << std::endl;
  std::cout << "Sorry, you already turned the crank" << std::endl;
}
void SoldState::turnCrank() const
{
  std::cout << "SoldState::turnCrank" << std::endl;
  std::cout << "Turning twice doesn't get you another gumball!"
    << std::endl;
}
void SoldState::dispense()
{
  std::cout << "SoldState::dispense" << std::endl;
  _gumballMachine->releaseBall();
  if( _gumballMachine->getCount() > 0) {
    _gumballMachine->setState( _gumballMachine->getNoQuarterState() );
  } else {
    std::cout << "Oops, out of gumballs!" << std::endl;
    _gumballMachine->setState( _gumballMachine->getSoldOutState() );
  }
}
std::string SoldState::toString() const
{
  std::cout << "SoldState::toString" << std::endl;
  return "dispensing a gumball";
}
