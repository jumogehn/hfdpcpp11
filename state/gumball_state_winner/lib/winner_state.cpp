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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "winner_state.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"

namespace headfirst {



  WinnerState::WinnerState( GumballMachine* gumball_machine ) :
    gumball_machine_( gumball_machine )
  {
    assert( gumball_machine_ );
    std::cout << "WinnerState::WinnerState" << std::endl;
  }
  void WinnerState::InsertQuarter() const
  {
    std::cout << "WinnerState::InsertQuarter" << std::endl;
    std::cout << "Please wait, we're already giving you a Gumball"
      << std::endl;
  }
  void WinnerState::EjectQuarter() const
  {
    std::cout << "WinnerState::EjectQuarter" << std::endl;
    std::cout << "Please wait, we're already giving you a Gumball"
      << std::endl;
  }
  void WinnerState::TurnCrank() const
  {
    std::cout << "WinnerState::TurnCrank" << std::endl;
    std::cout << "Turning again doesn't get you another gumball!"
      << std::endl;
  }
  void WinnerState::Dispense()
  {
    assert( gumball_machine_ );
    std::cout << "WinnerState::Dispense" << std::endl;
    std::cout << "YOU'RE A WINNER! You get two gumballs for your quarter"
      << std::endl;
    gumball_machine_->ReleaseBall();
    if( gumball_machine_->GetCount() == 0 ) {
      gumball_machine_->SetState( gumball_machine_->GetSoldOutState() );
    } else {
      gumball_machine_->ReleaseBall();
      if( gumball_machine_->GetCount() > 0 ) {
        gumball_machine_->SetState( gumball_machine_->GetNoQuarterState() );
      } else {
        std::cout << "Oops, out of gumballs!" << std::endl;
        gumball_machine_->SetState( gumball_machine_->GetSoldOutState() );
      }
    }
  }
  std::string WinnerState::ToString() const
  {
    std::cout << "WinnerState::ToString" << std::endl;
    return "despensing two gumballs for your quarter,"
      " because YOU'RE A WINNER!";
  }
} //namespace headfirst
