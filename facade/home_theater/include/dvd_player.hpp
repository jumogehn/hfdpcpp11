//===--- dvd_player.hpp - ---------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_DVD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_DVD_PLAYER_HPP_
//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.


namespace headfirst {


  class Amplifier;

  class DvdPlayer {
    std::string description_;
    Amplifier* amplifier_;
    int current_track_;
    std::string movie_;

    DvdPlayer( const DvdPlayer& ); // Disable copy constructor
    void operator=( const DvdPlayer& ); // Disable assignment operator

  public:
    DvdPlayer( std::string description, Amplifier* amplifier );
    void TurnOn() const;
    void TurnOff() const;
    void Eject();
    void Play( std::string movie );
    void Play( int track );
    void Stop();
    void Pause();
    void SetTwoChannelAudio();
    void SetSurroundAudio();
    std::string ToString() const;
  };

} //namespace headfirst
#endif

