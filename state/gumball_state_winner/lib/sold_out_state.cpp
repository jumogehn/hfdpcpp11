//===--- sold_out_state.hpp - -----------------------------------*- C++ -*-===//
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
#include "sold_out_state.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"

namespace headfirst {



  SoldOutState::SoldOutState(GumballMachine* gumball_machine ) :
    gumball_machine_( gumball_machine )
  {
    assert(gumball_machine_ );
    std::cout << "SoldOutState::SoldOutState" << std::endl;
  }
  void SoldOutState::InsertQuarter() const
  {
    std::cout << "SoldOutState::InsertQuarter" << std::endl;
    std::cout << "You can't insert a quarter, the machine is sold out"
      << std::endl;
  }
  void SoldOutState::EjectQuarter() const
  {
    std::cout << "SoldOutState::EjectQuarter" << std::endl;
    std::cout << "You can't eject, you haven't inserted a quarter yet"
      << std::endl;
  }
  void SoldOutState::TurnCrank() const
  {
    std::cout << "SoldOutState::TurnCrank" << std::endl;
    std::cout << "You turned, but there are no gumballs" << std::endl;
  }
  void SoldOutState::Dispense()
  {
    std::cout << "SoldOutState::Dispense" << std::endl;
    std::cout << "No gumball Dispensed" << std::endl;
  }
  std::string SoldOutState::ToString() const
  {
    std::cout << "SoldOutState::ToString" << std::endl;
    return "sold out";
  }
} //namespace headfirst
