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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "home_theater_facade.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
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



HomeTheaterFacade::HomeTheaterFacade( Amplifier* amp, Tuner* tuner,
                                      DvdPlayer* dvd, CdPlayer* cd,
                                      Projector* projector, Screen* screen,
                                      TheaterLights* lights,
                                      PopcornPopper* popper ) :
  amp_( amp ), tuner_( tuner ), dvd_( dvd ), cd_( cd ),
  projector_( projector ), lights_( lights ), screen_( screen ),
  popper_( popper )
{
  assert(amp);
  assert(tuner);
  assert(dvd);
  assert(cd);
  assert(projector);
  assert(screen);
  assert(lights);
  assert(popper);
  std::cout << "HomeTheaterFacade::~HomeTheaterFacade" << std::endl;
}
void HomeTheaterFacade::WatchMovie( std::string movie )
{
  std::cout << "HomeTheaterFacade::WatchMovie" << std::endl;
  std::cout << "Get ready to watch a movie..." << std::endl;
  popper_->TurnOn();
  popper_->Pop();
  lights_->Dim( 10 );
  screen_->Down();
  projector_->TurnOn();
  projector_->WideScreenMode();
  amp_->TurnOn();
  amp_->SetDvd( dvd_ );
  amp_->SetSurroundSound();
  amp_->SetVolume( 5 );
  dvd_->TurnOn();
  dvd_->Play( movie );
}
void HomeTheaterFacade::EndMovie()
{
  std::cout << "HomeTheaterFacade::EndMovie" << std::endl;
  std::cout << "Shutting movie theater down..." << std::endl;
  popper_->TurnOff();
  lights_->TurnOn();
  screen_->CloseUp();
  projector_->TurnOff();
  amp_->TurnOff();
  dvd_->Stop();
  dvd_->Eject();
  dvd_->TurnOff();
}
void HomeTheaterFacade::ListenToCd( std::string cd_title )
{
  std::cout << "HomeTheaterFacade::ListenToCd" << std::endl;
  std::cout << "Get ready for an audiopile experence..." << std::endl;
  lights_->TurnOn();
  amp_->TurnOn();
  amp_->SetVolume( 5 );
  amp_->SetCd( cd_ );
  amp_->SetStereoSound();
  cd_->TurnOn();
  cd_->Play( cd_title );
}
void HomeTheaterFacade::EndCd()
{
  std::cout << "HomeTheaterFacade::EndCd" << std::endl;
  std::cout << "Shutting down CD..." << std::endl;
  amp_->TurnOff();
  amp_->SetCd( cd_ );
  cd_->Eject();
  cd_->TurnOff();
}
void HomeTheaterFacade::ListenToRadio( double frequency )
{
  std::cout << "HomeTheaterFacade::ListenToRadio" << std::endl;
  std::cout << "Tuning in the airwaves..." << std::endl;
  tuner_->TurnOn();
  tuner_->SetFrequency( frequency );
  amp_->TurnOn();
  amp_->SetVolume( 5 );
  amp_->SetTuner( tuner_ );
}
void HomeTheaterFacade::EndRadio()
{
  std::cout << "HomeTheaterFacade::EndRadio" << std::endl;
  std::cout << "Shutting down the tuner..." << std::endl;
  tuner_->TurnOff();
  amp_->TurnOff();
}



