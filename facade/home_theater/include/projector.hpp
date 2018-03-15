#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_

//===--- Projector.hpp - ----------------------------------------*- C++ -*-===//
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
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "dvd_player.hpp"


class Projector {

  std::string _description;
  DvdPlayer*  _dvdPlayer;

  Projector( const Projector& ); // Disable copy constructor
  void operator=( const Projector& ); // Disable assignment operator

public:
  Projector( std::string description, DvdPlayer* dvdPlayer );
  void on();
  void off();
  void wideScreenMode();
  void tvMode();
  std::string toString();
};

#endif

