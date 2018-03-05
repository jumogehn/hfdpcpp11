//===--- HomeTheater.cpp - --------------------------------------*- C++ -*-===//
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
#include <iostream>
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "Amplifier.hpp"
#include "CdPlayer.hpp"
#include "DvdPlayer.hpp"
#include "HomeTheaterFacade.hpp"
#include "PopcornPopper.hpp"
#include "Projector.hpp"
#include "Screen.hpp"
#include "TheaterLights.hpp"
#include "Tuner.hpp"


int main( int argc, char* argv[] ) {

  std::cout << "main" << std::endl;

  std::shared_ptr< Amplifier > amp(
    std::make_shared<Amplifier>( "Top-O-Line Amplifier" ) );
  std::shared_ptr< Tuner > tuner(
    std::make_shared<Tuner>( "Top-O-Line AM/FM Tuner", amp ) );
  std::shared_ptr< DvdPlayer > dvd(
    std::make_shared<DvdPlayer>( "Top-O-Line DVD Player", amp ) );
  std::shared_ptr< CdPlayer > cd(
    std::make_shared<CdPlayer>( "Top-O-Line CD Player", amp ) );
  std::shared_ptr< Projector > projector(
    std::make_shared<Projector>( "Top-O-Line Projector", dvd ) );
  std::shared_ptr< TheaterLights > lights(
    std::make_shared<TheaterLights>( "Theater Ceiling Lights" ) );
  std::shared_ptr< Screen > screen(
    std::make_shared<Screen>( "Theater Screen" ) );
  std::shared_ptr< PopcornPopper > popper(
    std::make_shared<PopcornPopper>( "Popcorn Popper" ) );
  std::shared_ptr< HomeTheaterFacade > homeTheater(
    std::make_shared<HomeTheaterFacade>( amp, tuner, dvd, cd,
                           projector, screen, lights,
                           popper ) );

  homeTheater->watchMovie( "Raiders of the Lost Ark" );
  homeTheater->endMovie();

  return 0;
}
