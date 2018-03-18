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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "sold_state.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "gumball_machine.hpp"



SoldState::SoldState( GumballMachine* gumball_machine ) :
  gumball_machine_( gumball_machine )
{
  assert( gumball_machine );
  std::cout << "SoldState::SoldState" << std::endl;
}
void SoldState::InsertQuarter() const
{
  std::cout << "SoldState::InsertQuarter" << std::endl;
  std::cout << "Please wait, we're already giving you a gumball"
    << std::endl;
}
void SoldState::EjectQuarter() const
{
  std::cout << "SoldState::EjectQuarter" << std::endl;
  std::cout << "Sorry, you already turned the crank" << std::endl;
}
void SoldState::TurnCrank() const
{
  std::cout << "SoldState::TurnCrank" << std::endl;
  std::cout << "Turning twice doesn't get you another gumball!"
    << std::endl;
}
void SoldState::Dispense()
{
  std::cout << "SoldState::Dispense" << std::endl;
  gumball_machine_->ReleaseBall();
  if( gumball_machine_->GetCount() > 0) {
    gumball_machine_->SetState( gumball_machine_->GetNoQuarterState() );
  } else {
    std::cout << "Oops, out of gumballs!" << std::endl;
    gumball_machine_->SetState( gumball_machine_->GetSoldOutState() );
  }
}
std::string SoldState::ToString() const
{
  std::cout << "SoldState::ToString" << std::endl;
  return "dispensing a gumball";
}
