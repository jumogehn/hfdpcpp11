//===--- popcorn_popper.hpp - -----------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_POPCORN_POPPER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_POPCORN_POPPER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.


class PopcornPopper {

  std::string _description;

  PopcornPopper( const PopcornPopper& ); // Disable copy constructor
  void operator=( const PopcornPopper& ); // Disable assignment operator

public:
  PopcornPopper( std::string description);
  void on() const;
  void off() const;
  void pop() const;
  std::string toString() const;
};


#endif
