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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_STATE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "State.hpp"
#include "GumballMachine.hpp"


class SoldState : public State {

  GumballMachine* _gumballMachine;

  SoldState( const SoldState& ); // Disable copy constructor
  void operator=( const SoldState& ); // Disable assignment operator

public:
  explicit SoldState( GumballMachine* gumballMachine );
  void insertQuarter() const;
  void ejectQuarter() const;
  void turnCrank() const;
  void dispense();
  std::string toString() const;
};


#endif

