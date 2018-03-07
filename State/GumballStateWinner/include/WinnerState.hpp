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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_WINNER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_WINNER_STATE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "GumballMachine.hpp"
#include "State.hpp"


class WinnerState : public State {

  std::shared_ptr<GumballMachine> _gumballMachine;

  WinnerState( const WinnerState& ); // Disable copy constructor
  void operator=( const WinnerState& ); // Disable assignment operator

public:
  explicit WinnerState( std::shared_ptr<GumballMachine> gumballMachine );
  void insertQuarter() const;
  void ejectQuarter() const;
  void turnCrank() const;
  void dispense();
  std::string toString() const;
};


#endif

