//===--- SoldOutState.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_OUT_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_SOLD_OUT_STATE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "State.hpp"
#include "GumballMachine.hpp"


class SoldOutState : public State {
  //std::shared_ptr<GumballMachine> _gumballMachine;
  GumballMachine* _gumballMachine;

  SoldOutState( const SoldOutState& ); // Disable copy constructor
  void operator=( const SoldOutState& ); // Disable assignment operator

public:
  //explicit SoldOutState(std::shared_ptr<GumballMachine> gumballMachine );
  explicit SoldOutState(GumballMachine* gumballMachine );
  void insertQuarter() const;
  void ejectQuarter() const;
  void turnCrank() const;
  void dispense();
  std::string toString() const;
};


#endif

