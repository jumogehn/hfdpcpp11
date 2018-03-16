//===--- sold_out_state.hpp - -----------------------------------*- C++ -*-===//
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
#include "sold_out_state.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"



SoldOutState::SoldOutState(GumballMachine* gumballMachine ) :
  _gumballMachine( gumballMachine )
{
  assert(gumballMachine );
  std::cout << "SoldOutState::SoldOutState" << std::endl;
}
void SoldOutState::insertQuarter() const
{
  std::cout << "SoldOutState::insertQuarter" << std::endl;
  std::cout << "You can't insert a quarter, the machine is sold out"
    << std::endl;
}
void SoldOutState::ejectQuarter() const
{
  std::cout << "SoldOutState::ejectQuarter" << std::endl;
  std::cout << "You can't eject, you haven't inserted a quarter yet"
    << std::endl;
}
void SoldOutState::turnCrank() const
{
  std::cout << "SoldOutState::turnCrank" << std::endl;
  std::cout << "You turned, but there are no gumballs" << std::endl;
}
void SoldOutState::dispense()
{
  std::cout << "SoldOutState::dispense" << std::endl;
  std::cout << "No gumball dispensed" << std::endl;
}
std::string SoldOutState::toString() const
{
  std::cout << "SoldOutState::toString" << std::endl;
  return "sold out";
}
