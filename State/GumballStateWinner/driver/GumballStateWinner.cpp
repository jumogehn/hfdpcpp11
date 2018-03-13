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



int main( int argc, char* argv[] ) {

  std::unique_ptr<GumballMachine> gumballMachine( new GumballMachine(10) );
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
