//===--- state.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STATE_GUMBALL_STATE_WINNER_STATE_HPP_
#define _HFDP_CPP_STATE_GUMBALL_STATE_WINNER_STATE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.


class State {

public:
  virtual ~State();
  virtual void InsertQuarter() const = 0;
  virtual void EjectQuarter() const = 0;
  virtual void TurnCrank() const = 0;
  virtual void Dispense() = 0;
  virtual std::string ToString() const = 0;
};


#endif
