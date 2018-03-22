//===--- theater_lights.hpp - -----------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_THEATER_LIGHTS_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_THEATER_LIGHTS_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  class TheaterLights {

    std::string description_;

    TheaterLights( const TheaterLights& ); // Disable copy constructor
    void operator=( const TheaterLights& ); // Disable assignment operator

  public:
    TheaterLights( std::string description );
    void TurnOn();
    void TurnOff();
    void Dim( int level );
    std::string ToString();
  };

} //namespace headfirst
#endif
