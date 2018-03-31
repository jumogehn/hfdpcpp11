//===--- cd_player.hpp - ----------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_
//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.


namespace headfirst {


  class Amplifier;

  class CdPlayer {

    std::string description_;
    Amplifier* amplifier_;
    std::string title_;
    int current_track_;

    // Disable copy constructor and assignment operator
    CdPlayer( const CdPlayer& ) = delete;
    void operator=( const CdPlayer& ) = delete;

  public:
    CdPlayer( std::string description, Amplifier* amplifier );
    void TurnOn() const;
    void TurnOff() const;
    void Eject();
    void Play( std::string title);
    void Play( int track );
    void Stop();
    void Pause();
    std::string ToString() const;
  };


} //namespace headfirst
#endif

