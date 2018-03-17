//===--- home_theater.cpp - -------------------------------------*- C++ -*-===//
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
#include "amplifier.hpp"
#include "cd_player.hpp"
#include "dvd_player.hpp"
#include "home_theater_facade.hpp"
#include "popcorn_popper.hpp"
#include "projector.hpp"
#include "screen.hpp"
#include "theater_lights.hpp"
#include "tuner.hpp"


int main( int argc, char* argv[] ) {

  std::cout << "main" << std::endl;

  std::unique_ptr<Amplifier>
    amp(new Amplifier( "Top-O-Line Amplifier" ));
  std::unique_ptr<Tuner>
    tuner(new Tuner( "Top-O-Line AM/FM Tuner", amp.get() ));
  std::unique_ptr<DvdPlayer>
    dvd(new DvdPlayer( "Top-O-Line DVD Player", amp.get() ));
  std::unique_ptr<CdPlayer>
    cd(new CdPlayer( "Top-O-Line CD Player", amp.get() ));
  std::unique_ptr<Projector>
    projector(new Projector( "Top-O-Line Projector", dvd.get() ));
  std::unique_ptr<TheaterLights>
    lights(new TheaterLights( "Theater Ceiling Lights" ));
  std::unique_ptr<Screen>
    screen(new Screen( "Theater Screen" ));
  std::unique_ptr<PopcornPopper>
    popper(new PopcornPopper( "Popcorn Popper" ));
  std::unique_ptr<HomeTheaterFacade>
    home_theater(new HomeTheaterFacade( amp.get(), tuner.get(), dvd.get(),
                                        cd.get(), projector.get(), screen.get(),
                                        lights.get(), popper.get() ));

  home_theater->WatchMovie( "Raiders of the Lost Ark" );
  home_theater->EndMovie();

  return 0;
}
