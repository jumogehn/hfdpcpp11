//===--- amplifier.hpp - ----------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_
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

  std::string description_;
  Tuner* tuner_;
  DvdPlayer* dvd_;
  CdPlayer* cd_;

  Amplifier( const Amplifier& ); // Disable copy constructor
  void operator=( const Amplifier& ); // Disable assignment operator

public:
  explicit Amplifier( std::string description );
  void TurnOn() const;
  void TurnOff() const;
  void SetStereoSound();
  void SetSurroundSound();
  void SetVolume( int level );
  void SetTuner( Tuner* tuner);
  void SetDvd( DvdPlayer* dvd );
  void SetCd( CdPlayer* cd );
  std::string ToString() const;
};


#endif
