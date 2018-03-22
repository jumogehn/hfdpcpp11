//===--- projector.hpp - ----------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "dvd_player.hpp"

namespace headfirst {


  class Projector {

    std::string description_;
    DvdPlayer*  dvd_player_;

    Projector( const Projector& ); // Disable copy constructor
    void operator=( const Projector& ); // Disable assignment operator

  public:
    Projector( std::string description, DvdPlayer* dvd_player );
    void TurnOn();
    void TurnOff();
    void WideScreenMode();
    void TvMode();
    std::string ToString();
  };

} //namespace headfirst
#endif

