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
#include <memory>
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

  std::shared_ptr<Amplifier> _amp;
  std::shared_ptr<Tuner> _tuner;
  std::shared_ptr<DvdPlayer> _dvd;
  std::shared_ptr<CdPlayer> _cd;
  std::shared_ptr<Projector> _projector;
  std::shared_ptr<TheaterLights> _lights;
  std::shared_ptr<Screen> _screen;
  std::shared_ptr<PopcornPopper> _popper;

  HomeTheaterFacade( const HomeTheaterFacade& );
  void operator=( const HomeTheaterFacade& );

public:
  HomeTheaterFacade( std::shared_ptr<Amplifier> amp, std::shared_ptr<Tuner> tuner, std::shared_ptr<DvdPlayer> dvd,
                     std::shared_ptr<CdPlayer> cd, std::shared_ptr<Projector> projector, std::shared_ptr<Screen> screen,
                     std::shared_ptr<TheaterLights> lights, std::shared_ptr<PopcornPopper> popper );
  void watchMovie( std::string movie );
  void endMovie();
  void listenToCd( std::string cdTitle );
  void endCd();
  void listenToRadio( double frequency );
  void endRadio();
};

#endif

