//===--- has_quarter_state.hpp - --------------------------------*- C++ -*-===//
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
#include "has_quarter_state.hpp"
//C system files.
#ifdef WIN32
#include <process.h>
#else
#include <sys/types.h>
#include <unistd.h>
#endif
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"

namespace headfirst {



  HasQuarterState::HasQuarterState( GumballMachine* gumball_machine ) :
    gumball_machine_( gumball_machine ), random_( 0 )
  {
    assert( gumball_machine_ );
    std::cout << "HasQuarterState::HasQuarterState" << std::endl;
#ifdef WIN32
    srand( _getpid() );
#else
    srand( getpid() );
#endif
  }
  void HasQuarterState::InsertQuarter() const
  {
    std::cout << "HasQuarterState::InsertQuarter" << std::endl;
    std::cout << "You can't insert another quarter" << std::endl;
  }
  void HasQuarterState::EjectQuarter() const
  {
    assert( gumball_machine_ );
    std::cout << "HasQuarterState::EjectQuarter" << std::endl;
    std::cout << "Quarter returned" << std::endl;
    gumball_machine_->SetState( gumball_machine_->GetNoQuarterState() );
  }
  void HasQuarterState::TurnCrank() const
  {
    assert( gumball_machine_ );
    std::cout << "HasQuarterState::TurnCrank" << std::endl;
    std::cout << "You turned..." << std::endl;
    int winner = rand() % 5;
    if( ( winner == 0 ) && ( gumball_machine_->GetCount() > 0 ) ) {
      gumball_machine_->SetState( gumball_machine_->GetWinnerState() );
    } else {
      gumball_machine_->SetState( gumball_machine_->GetSoldState() );
    }
  }
  void HasQuarterState::Dispense()
  {
    std::cout << "HasQuarterState::Dispense" << std::endl;
    std::cout << "No gumball Dispensed" << std::endl;
  }
  std::string HasQuarterState::ToString() const
  {
    std::cout << "HasQuarterState::ToString" << std::endl;
    return "waiting for turn of crank";
  }
} //namespace headfirst
