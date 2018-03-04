//===--- NoQuarterState.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_NO_QUARTER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_NO_QUARTER_STATE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "State.hpp"
#include "GumballMachine.hpp"


class NoQuarterState : public State {

  std::shared_ptr<GumballMachine> _gumballMachine;

  NoQuarterState( const NoQuarterState& ); // Disable copy constructor
  void operator=( const NoQuarterState& ); // Disable assignment operator

public:
  explicit NoQuarterState( std::shared_ptr<GumballMachine> gumballMachine );
  void insertQuarter() const;
  void ejectQuarter() const;
  void turnCrank() const;
  void dispense();
  std::string toString() const;
};


#endif

