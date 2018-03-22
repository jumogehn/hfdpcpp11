//===--- winner_state.hpp - -------------------------------------*- C++ -*-===//
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
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"
#include "state.hpp"

namespace headfirst {


  class WinnerState : public State {

    GumballMachine* gumball_machine_;

    WinnerState( const WinnerState& ); // Disable copy constructor
    void operator=( const WinnerState& ); // Disable assignment operator

  public:
    explicit WinnerState( GumballMachine* gumball_machine );
    void InsertQuarter() const;
    void EjectQuarter() const;
    void TurnCrank() const;
    void Dispense();
    std::string ToString() const;
  };


} //namespace headfirst
#endif

