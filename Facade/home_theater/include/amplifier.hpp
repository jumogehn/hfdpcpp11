#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_

//===--- Amplifier.hpp - ----------------------------------------*- C++ -*-===//
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


class Tuner;
class DvdPlayer;
class CdPlayer;

class Amplifier {

  std::string _description;
  Tuner* _tuner;
  DvdPlayer* _dvd;
  CdPlayer* _cd;

  Amplifier( const Amplifier& ); // Disable copy constructor
  void operator=( const Amplifier& ); // Disable assignment operator

public:
  explicit Amplifier( std::string description );
  void on() const;
  void off() const;
  void setStereoSound();
  void setSurroundSound();
  void setVolume( int level );
  void setTuner( Tuner* tuner);
  void setDvd( DvdPlayer* dvd );
  void setCd( CdPlayer* cd );
  std::string toString() const;
};


#endif
