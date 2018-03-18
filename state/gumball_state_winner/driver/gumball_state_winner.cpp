//===--- gumball_state_winner.cpp - -----------------------------*- C++ -*-===//
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
#include "gumball_machine.hpp"



int main( int argc, char* argv[] ) {

  std::unique_ptr<GumballMachine> gumball_machine( new GumballMachine(10) );
  std::cout << gumball_machine->ToString() << std::endl;

  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();
  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();

  std::cout << gumball_machine->ToString() << std::endl;

  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();
  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();

  std::cout << gumball_machine->ToString() << std::endl;

  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();
  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();

  std::cout << gumball_machine->ToString() << std::endl;

  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();
  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();

  std::cout << gumball_machine->ToString() << std::endl;

  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();
  gumball_machine->InsertQuarter();
  gumball_machine->TurnCrank();

  std::cout << gumball_machine->ToString() << std::endl;

  return 0;
}
