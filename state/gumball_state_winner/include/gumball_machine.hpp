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
#include "state.hpp"

namespace headfirst {

  class GumballMachine {

    std::unique_ptr<State> sold_out_state_;
    std::unique_ptr<State> no_quarter_state_;
    std::unique_ptr<State> has_quarter_state_;
    std::unique_ptr<State> sold_state_;
    std::unique_ptr<State> winner_state_;
    State* state_;
    int count_;

    // Disable copy constructor and assignment operator
    GumballMachine( const GumballMachine& ) = delete;
    void operator=( const GumballMachine& ) = delete;

  public:
    explicit GumballMachine(int number_gumballs);
    ~GumballMachine();
    void InsertQuarter() const;
    void EjectQuarter() const;
    void TurnCrank() const;
    void SetState( State* state );
    void ReleaseBall();
    int GetCount() const;
    void Refill( int count );
    State* GetState() const;
    State* GetSoldOutState() const;
    State* GetNoQuarterState() const;
    State* GetHasQuarterState() const;
    State* GetSoldState() const;
    State* GetWinnerState() const;
    std::string ToString() const;
  };


} //namespace headfirst
#endif
