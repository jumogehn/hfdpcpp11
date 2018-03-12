#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_

//===--- HomeTheaterFacade.hpp - --------------------------------*- C++ -*-===//
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
#include "Amplifier.hpp"
#include "CdPlayer.hpp"
#include "DvdPlayer.hpp"
#include "PopcornPopper.hpp"
#include "Projector.hpp"
#include "Screen.hpp"
#include "TheaterLights.hpp"
#include "Tuner.hpp"



class HomeTheaterFacade {

  Amplifier* _amp;
  Tuner* _tuner;
  DvdPlayer* _dvd;
  CdPlayer* _cd;
  Projector* _projector;
  TheaterLights* _lights;
  Screen* _screen;
  PopcornPopper* _popper;

  HomeTheaterFacade( const HomeTheaterFacade& );
  void operator=( const HomeTheaterFacade& );

public:
  HomeTheaterFacade( Amplifier* amp, Tuner* tuner, DvdPlayer* dvd,
                     CdPlayer* cd, Projector* projector, Screen* screen,
                     TheaterLights* lights, PopcornPopper* popper );
  void watchMovie( std::string movie );
  void endMovie();
  void listenToCd( std::string cdTitle );
  void endCd();
  void listenToRadio( double frequency );
  void endRadio();
};

#endif

