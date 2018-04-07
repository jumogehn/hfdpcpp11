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
#include <memory>
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

    sold_out_state_    = std::unique_ptr<State>(new SoldOutState( this ));
    no_quarter_state_  = std::unique_ptr<State>(new NoQuarterState( this ));
    has_quarter_state_ = std::unique_ptr<State>(new HasQuarterState( this ));
    sold_state_        = std::unique_ptr<State>(new SoldState( this ));
    winner_state_      = std::unique_ptr<State>(new WinnerState( this ));
    state_ = sold_out_state_.get();

    if( count_  > 0 ) {
      state_ = no_quarter_state_.get();
    }
  }

  GumballMachine::~GumballMachine()
  {
    std::cout << "GumballMachine::~GumballMachine" << std::endl;
  }
  void GumballMachine::InsertQuarter() const
  {
    assert(state_);
    std::cout << "GumballMachine::InsertQuarter" << std::endl;
    state_->InsertQuarter();
  }
  void GumballMachine::EjectQuarter() const
  {
    assert(state_);
    std::cout << "GumballMachine::EjectQuarter" << std::endl;
    state_->EjectQuarter();
  }
  void GumballMachine::TurnCrank() const
  {
    assert(state_);
    std::cout << "GumballMachine::TurnCrank" << std::endl;
    state_->TurnCrank();
    state_->Dispense();
  }
  void GumballMachine::SetState( State* state )
  {
    assert(state_);
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
    assert(state_);
    assert( count > 0 );
    std::cout << "GumballMachine::Refill" << std::endl;
    count_ = count;
    state_ = no_quarter_state_.get();
  }
  State* GumballMachine::GetState() const
  {
    std::cout << "GumballMachine::GetState" << std::endl;
    return state_;
  }
  State* GumballMachine::GetSoldOutState() const
  {
    assert(sold_out_state_);
    std::cout << "GumballMachine::GetSoldOutState" << std::endl;
    return sold_out_state_.get();
  }
  State* GumballMachine::GetNoQuarterState() const
  {
    assert(no_quarter_state_);
    std::cout << "GumballMachine::GetNoQuarterState" << std::endl;
    return no_quarter_state_.get();
  }
  State* GumballMachine::GetHasQuarterState() const
  {
    assert(has_quarter_state_);
    std::cout << "GumballMachine::GetHasQuarterState" << std::endl;
    return has_quarter_state_.get();
  }
  State* GumballMachine::GetSoldState() const
  {
    assert(sold_state_);
    std::cout << "GumballMachine::GetSoldState" << std::endl;
    return sold_state_.get();
  }
  State* GumballMachine::GetWinnerState() const
  {
    assert(winner_state_);
    std::cout << "GumballMachine::GetWinnerState" << std::endl;
    return winner_state_.get();
  }
  std::string GumballMachine::ToString() const
  {
    assert(state_);
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
