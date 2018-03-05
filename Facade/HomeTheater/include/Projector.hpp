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
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "DvdPlayer.hpp"


class Projector {

  std::string _description;
  std::shared_ptr<DvdPlayer>  _dvdPlayer;

  Projector( const Projector& ); // Disable copy constructor
  void operator=( const Projector& ); // Disable assignment operator

public:
  Projector( std::string description, std::shared_ptr<DvdPlayer> dvdPlayer );
  void on();
  void off();
  void wideScreenMode();
  void tvMode();
  std::string toString();
};

#endif

