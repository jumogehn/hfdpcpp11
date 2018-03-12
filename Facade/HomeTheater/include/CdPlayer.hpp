#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_

//===--- CdPlayer.hpp - -----------------------------------------*- C++ -*-===//
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

class CdPlayer {

  std::string _description;
  Amplifier* _amplifier;
  std::string _title;
  int _currentTrack;

  CdPlayer( const CdPlayer& ); // Disable copy constructor
  void operator=( const CdPlayer& ); // Disable assignment operator

public:
  CdPlayer( std::string description, Amplifier* amplifier );
  void on() const;
  void off() const;
  void eject();
  void play( std::string title);
  void play( int track );
  void stop();
  void pause();
  std::string toString() const;
};


#endif

