//===--- gumball_machine.hpp - ----------------------------------*- C++ -*-===//
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
#include "gumball_machine.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "has_quarter_state.hpp"
#include "no_quarter_state.hpp"
#include "sold_out_state.hpp"
#include "sold_state.hpp"
#include "state.hpp"
#include "winner_state.hpp"

namespace headfirst {


  GumballMachine::GumballMachine(int number_gumballs)
  {
    std::cout << "GumballMachine::GumballMachine" << std::endl;

    assert( number_gumballs >= 0 );

    count_ = number_gumballs;

    sold_out_state_ = new SoldOutState( this );
    no_quarter_state_ = new NoQuarterState( this );
    has_quarter_state_ = new HasQuarterState( this );
    sold_state_ = new SoldState( this );
    winner_state_ = new WinnerState( this );
    state_ = sold_out_state_;

    if( count_  > 0 ) {
      state_ = no_quarter_state_;
    }
  }

  GumballMachine::~GumballMachine()
  {
    std::cout << "GumballMachine::~GumballMachine" << std::endl;
  }
  void GumballMachine::InsertQuarter() const
  {
    std::cout << "GumballMachine::InsertQuarter" << std::endl;
    state_->InsertQuarter();
  }
  void GumballMachine::EjectQuarter() const
  {
    std::cout << "GumballMachine::EjectQuarter" << std::endl;
    state_->EjectQuarter();
  }
  void GumballMachine::TurnCrank() const
  {
    std::cout << "GumballMachine::TurnCrank" << std::endl;
    state_->TurnCrank();
    state_->Dispense();
  }
  void GumballMachine::SetState( State* state )
  {
    assert( state );
    std::cout << "GumballMachine::SetState" << std::endl;
    state_ = state;
  }
  void GumballMachine::ReleaseBall()
  {
    std::cout << "GumballMachine::ReleaseBall" << std::endl;
    std::cout << "A gumball comes rolling out the slot..." << std::endl;
    if( count_ != 0) {
      count_--;
    }
  }
  int GumballMachine::GetCount() const
  {
    std::cout << "GumballMachine::GetCount" << std::endl;
    return count_;
  }
  void GumballMachine::Refill( int count )
  {
    assert( count > 0 );
    std::cout << "GumballMachine::Refill" << std::endl;
    count_ = count;
    state_ = no_quarter_state_;
  }
  State* GumballMachine::GetState() const
  {
    std::cout << "GumballMachine::GetState" << std::endl;
    return state_;
  }
  State* GumballMachine::GetSoldOutState() const
  {
    std::cout << "GumballMachine::GetSoldOutState" << std::endl;
    return sold_out_state_;
  }
  State* GumballMachine::GetNoQuarterState() const
  {
    std::cout << "GumballMachine::GetNoQuarterState" << std::endl;
    return no_quarter_state_;
  }
  State* GumballMachine::GetHasQuarterState() const
  {
    std::cout << "GumballMachine::GetHasQuarterState" << std::endl;
    return has_quarter_state_;
  }
  State* GumballMachine::GetSoldState() const
  {
    std::cout << "GumballMachine::GetSoldState" << std::endl;
    return sold_state_;
  }
  State* GumballMachine::GetWinnerState() const
  {
    std::cout << "GumballMachine::GetWinnerState" << std::endl;
    return winner_state_;
  }
  std::string GumballMachine::ToString() const
  {
    std::cout << "GumballMachine::ToString" << std::endl;
    std::stringstream value;
    value << std::endl << "Mighty Gumball, Inc.";
    value << std::endl << "C++-enabled Standing Gumball Model #2004";
    value << std::endl << "Inventory: " << count_ << " gumball";
    if( count_ > 1 ) {
      value << "s";
    }
    value << std::endl;
    value << "Machine is " << state_->ToString() << std::endl;
    return value.str();
  }
} //namespace headfirst
