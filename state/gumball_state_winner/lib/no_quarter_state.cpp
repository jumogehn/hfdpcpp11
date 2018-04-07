//===--- no_quarter_state.hpp - ---------------------------------*- C++ -*-===//
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
#include "no_quarter_state.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"

namespace headfirst {


  NoQuarterState::NoQuarterState( GumballMachine* gumball_machine ) :
    gumball_machine_( gumball_machine )
  {
    assert( gumball_machine_ );
    std::cout << "NoQuarterState::NoQuarterState" << std::endl;
  }
  void NoQuarterState::InsertQuarter() const
  {
    assert( gumball_machine_ );
    std::cout << "NoQuarterState::InsertQuarter" << std::endl;
    std::cout << "You inserted a quarter" << std::endl;
    gumball_machine_->SetState( gumball_machine_->GetHasQuarterState() );
  }
  void NoQuarterState::EjectQuarter() const
  {
    std::cout << "NoQuarterState::EjectQuarter" << std::endl;
    std::cout << "You haven't inserted a quarter" << std::endl;
  }
  void NoQuarterState::TurnCrank() const
  {
    std::cout << "NoQuarterState::TurnCrank" << std::endl;
    std::cout << "You turned, but there's no quarter" << std::endl;
  }
  void NoQuarterState::Dispense()
  {
    std::cout << "NoQuarterState::Dispense" << std::endl;
    std::cout << "You need to pay first" << std::endl;
  }
  std::string NoQuarterState::ToString() const
  {
    std::cout << "NoQuarterState::ToString" << std::endl;
    return "waiting for quarter";
  }
} //namespace headfirst
