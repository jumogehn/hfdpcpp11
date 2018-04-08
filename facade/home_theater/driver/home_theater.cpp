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
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
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

  std::unique_ptr<headfirst::Amplifier>
    amp(new headfirst::Amplifier( "Top-O-Line Amplifier" ));
  std::unique_ptr<headfirst::Tuner>
    tuner(new headfirst::Tuner( "Top-O-Line AM/FM Tuner", amp.get() ));
  std::unique_ptr<headfirst::DvdPlayer>
    dvd(new headfirst::DvdPlayer( "Top-O-Line DVD Player", amp.get() ));
  std::unique_ptr<headfirst::CdPlayer>
    cd(new headfirst::CdPlayer( "Top-O-Line CD Player", amp.get() ));
  std::unique_ptr<headfirst::Projector>
    projector(new headfirst::Projector( "Top-O-Line Projector", dvd.get() ));
  std::unique_ptr<headfirst::TheaterLights>
    lights(new headfirst::TheaterLights( "Theater Ceiling Lights" ));
  std::unique_ptr<headfirst::Screen>
    screen(new headfirst::Screen( "Theater Screen" ));
  std::unique_ptr<headfirst::PopcornPopper>
    popper(new headfirst::PopcornPopper( "Popcorn Popper" ));
  std::unique_ptr<headfirst::HomeTheaterFacade>
    home_theater(
      new headfirst::HomeTheaterFacade( amp.get(), tuner.get(), dvd.get(),
                                        cd.get(), projector.get(), screen.get(),
                                        lights.get(), popper.get() ));

  home_theater->WatchMovie( "Raiders of the Lost Ark" );
  home_theater->EndMovie();

  return 0;
}
