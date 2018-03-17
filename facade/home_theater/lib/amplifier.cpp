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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "amplifier.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "cd_player.hpp"
#include "dvd_player.hpp"
#include "tuner.hpp"


Amplifier::Amplifier( std::string description ) :
  description_( description ), tuner_( 0 ), dvd_( 0 ), cd_( 0 )
{
  std::cout << "Amplifier::Amplifier" << std::endl;
}
void Amplifier::TurnOn() const
{
  std::cout << "Amplifier::on" << std::endl;
  std::cout << description_ << " on" << std::endl;
}
void Amplifier::TurnOff() const
{
  std::cout << "Amplifier::off" << std::endl;
  std::cout << description_ << " off" << std::endl;
}
void Amplifier::SetStereoSound()
{
  std::cout << "Amplifier::SetStereoSound" << std::endl;
  std::cout << description_ << " stereo mode on" << std::endl;
}
void Amplifier::SetSurroundSound()
{
  std::cout << "Amplifier::SetSurroundSound" << std::endl;
  std::cout << description_
    << " surround sound on (5 speakers, 1 subwoofer)" << std::endl;
}
void Amplifier::SetVolume( int level )
{
  assert( 0 < level );
  std::cout << "Amplifier::SetVolume" << std::endl;
  std::cout << description_
    << " setting volume to " << level << std::endl;
}
void Amplifier::SetTuner( Tuner* tuner)
{
  assert( tuner );
  std::cout << "Amplifier::SetTuner" << std::endl;
  std::cout << description_
    << " setting tuner to " << tuner->ToString() << std::endl;
  tuner_ = tuner;
}
void Amplifier::SetDvd( DvdPlayer* dvd )
{
  assert( dvd );
  std::cout << "Amplifier::SetDvd" << std::endl;
  std::cout << description_
    << " setting DVD player to " << dvd->ToString()<< std::endl;
  dvd_ = dvd;
}
void Amplifier::SetCd( CdPlayer* cd )
{
  assert( cd );
  std::cout << "Amplifier::SetCd" << std::endl;
  std::cout << description_
    << " setting CD player to " << cd->ToString() << std::endl;
  cd_ = cd;
}
std::string Amplifier::ToString() const
{
  std::cout << "Amplifier::ToString" << std::endl;
  return description_.c_str();
}


