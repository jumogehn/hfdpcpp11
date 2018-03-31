//===--- sold_state.hpp - ---------------------------------------*- C++ -*-===//
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
#include "state.hpp"
#include "gumball_machine.hpp"

namespace headfirst {


  class SoldState : public State {

    GumballMachine* gumball_machine_;

    // Disable copy constructor and assignment operator
    SoldState( const SoldState& ) = delete;
    void operator=( const SoldState& ) = delete;

  public:
    explicit SoldState( GumballMachine* gumball_machine );
    void InsertQuarter() const;
    void EjectQuarter() const;
    void TurnCrank() const;
    void Dispense();
    std::string ToString() const;
  };


} //namespace headfirst
#endif

