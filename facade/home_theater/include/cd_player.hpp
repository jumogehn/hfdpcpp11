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



class Amplifier;

class CdPlayer {

  std::string description_;
  Amplifier* amplifier_;
  std::string title_;
  int current_track_;

  CdPlayer( const CdPlayer& ); // Disable copy constructor
  void operator=( const CdPlayer& ); // Disable assignment operator

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


#endif

