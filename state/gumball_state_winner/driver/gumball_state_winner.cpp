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
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "gumball_machine.hpp"



int main( int argc, char* argv[] ) {

  std::unique_ptr<headfirst::GumballMachine>
    gumball_machine( new headfirst::GumballMachine(10) );
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
