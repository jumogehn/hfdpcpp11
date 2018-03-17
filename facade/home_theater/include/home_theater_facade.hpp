//===--- home_theater_facade.hpp - ------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "amplifier.hpp"
#include "cd_player.hpp"
#include "dvd_player.hpp"
#include "popcorn_popper.hpp"
#include "projector.hpp"
#include "screen.hpp"
#include "theater_lights.hpp"
#include "tuner.hpp"



class HomeTheaterFacade {

  Amplifier* amp_;
  Tuner* tuner_;
  DvdPlayer* dvd_;
  CdPlayer* cd_;
  Projector* projector_;
  TheaterLights* lights_;
  Screen* screen_;
  PopcornPopper* popper_;

  HomeTheaterFacade( const HomeTheaterFacade& );
  void operator=( const HomeTheaterFacade& );

public:
  HomeTheaterFacade( Amplifier* amp, Tuner* tuner, DvdPlayer* dvd,
                     CdPlayer* cd, Projector* projector, Screen* screen,
                     TheaterLights* lights, PopcornPopper* popper );
  void WatchMovie( std::string movie );
  void EndMovie();
  void ListenToCd( std::string cd_title );
  void EndCd();
  void ListenToRadio( double frequency );
  void EndRadio();
};

#endif

