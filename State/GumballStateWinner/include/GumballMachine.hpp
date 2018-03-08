//===--- GumballMachine.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_GUMBALL_MACHINE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_GUMBALL_MACHINE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "State.hpp"

//C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
class GumballMachine : public std::enable_shared_from_this<GumballMachine> {

  std::shared_ptr<State> _soldOutState;
  std::shared_ptr<State> _noQuarterState;
  std::shared_ptr<State> _hasQuarterState;
  std::shared_ptr<State> _soldState;
  std::shared_ptr<State> _winnerState;
  std::shared_ptr<State> _state;
  int _count;

  GumballMachine( const GumballMachine& ); // Disable copy constructor
  void operator=( const GumballMachine& ); // Disable assignment operator

public:
  explicit GumballMachine();
  ~GumballMachine();
  int init(int numberGumballs );
  void insertQuarter() const;
  void ejectQuarter() const;
  void turnCrank() const;
  void setState( std::shared_ptr<State> state );
  void releaseBall();
  int getCount() const;
  void refill( int count );
  std::shared_ptr<State> getState() const;
  std::shared_ptr<State> getSoldOutState() const;
  std::shared_ptr<State> getNoQuarterState() const;
  std::shared_ptr<State> getHasQuarterState() const;
  std::shared_ptr<State> getSoldState() const;
  std::shared_ptr<State> getWinnerState() const;
  std::string toString() const;
};


#endif
