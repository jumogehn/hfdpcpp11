#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_DVD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_DVD_PLAYER_HPP_

//===--- DvdPlayer.hpp - ----------------------------------------*- C++ -*-===//
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



class Amplifier;

class DvdPlayer {
  std::string _description;
  Amplifier* _amplifier;
  int _currentTrack;
  std::string _movie;

  DvdPlayer( const DvdPlayer& ); // Disable copy constructor
  void operator=( const DvdPlayer& ); // Disable assignment operator

public:
  DvdPlayer( std::string description, Amplifier* amplifier );
  void on() const;
  void off() const;
  void eject();
  void play( std::string movie );
  void play( int track );
  void stop();
  void pause();
  void setTwoChannelAudio();
  void setSurroundAudio();
  std::string toString() const;
};

#endif

