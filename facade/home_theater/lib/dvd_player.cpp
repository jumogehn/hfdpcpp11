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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "dvd_player.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


DvdPlayer::DvdPlayer( std::string description, Amplifier* amplifier ) :
  description_( description ), amplifier_( amplifier ),
  current_track_( 0 )
{
  assert( amplifier );
  std::cout << "DvdPlayer::DvdPlayer" << std::endl;
}
void DvdPlayer::TurnOn() const
{
  std::cout << "DvdPlayer::on" << std::endl;
  std::cout << description_ << " on" << std::endl;
}
void DvdPlayer::TurnOff() const
{
  std::cout << "DvdPlayer::off" << std::endl;
  std::cout << description_ << " off" << std::endl;
}
void DvdPlayer::Eject()
{
  std::cout << "DvdPlayer::eject" << std::endl;
  movie_.empty();
  std::cout << description_ << " eject" << std::endl;
}
void DvdPlayer::Play( std::string movie )
{
  std::cout << "DvdPlayer::play" << std::endl;
  movie_ = movie;
  std::cout << description_ << " playing \"" << movie_ << "\""
    << std::endl;
}
void DvdPlayer::Play( int track )
{
  std::cout << "DvdPlayer::play" << std::endl;
  if( movie_.length() == 0 ) {
    std::cout << description_ << " can't play track " << track
      << " no dvd inserted" << std::endl;
  } else {
    current_track_ = track;
    std::cout << description_ << " playing track " << track
      << " of \"" << movie_ << "\"" << std::endl;
  }
}
void DvdPlayer::Stop()
{
  std::cout << "DvdPlayer::stop" << std::endl;
  current_track_ = 0;
  std::cout << description_ << " stopped \"" << movie_ << "\""
    << std::endl;
}
void DvdPlayer::Pause()
{
  std::cout << "DvdPlayer::pause" << std::endl;
  std::cout << description_ << " paused \"" << movie_ << "\""
    << std::endl;
}
void DvdPlayer::SetTwoChannelAudio()
{
  std::cout << "DvdPlayer::SetTwoChannelAudio" << std::endl;
  std::cout << description_ << " set two channel audio" << std::endl;
}
void DvdPlayer::SetSurroundAudio()
{
  std::cout << "DvdPlayer::SetSurroundAudio" << std::endl;
  std::cout << description_ << " set surround audio" << std::endl;
}
std::string DvdPlayer::ToString() const
{
  std::cout << "DvdPlayer::ToString" << std::endl;
  return description_;
}



