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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "cd_player.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


namespace headfirst {


  CdPlayer::CdPlayer( std::string description, Amplifier* amplifier ) :
    description_( description ), amplifier_( amplifier ),
    current_track_( 0 )
  {
    assert( amplifier );
    std::cout << "CdPlayer::CdPlayer" << std::endl;
  }
  void CdPlayer::TurnOn() const
  {
    std::cout << "CdPlayer::on" << std::endl;
    std::cout << description_.c_str() << " on" << std::endl;
  }
  void CdPlayer::TurnOff() const
  {
    std::cout << "CdPlayer::off" << std::endl;
    std::cout << description_.c_str() << " off" << std::endl;
  }
  void CdPlayer::Eject()
  {
    std::cout << "CdPlayer::eject" << std::endl;
    title_.empty();
    std::cout << description_.c_str() << " eject" << std::endl;
  }
  void CdPlayer::Play( std::string title)
  {
    std::cout << "CdPlayer::play" << std::endl;
    title_ = title;
    std::cout << description_.c_str() << " playing \"" << title_
      << "\"" << std::endl;
  }
  void CdPlayer::Play( int track )
  {
    std::cout << "CdPlayer::play" << std::endl;
    if( title_.length() == 0 ) {
      std::cout << description_.c_str() << " can't play track "
        << current_track_ << ", no cd inserted" << std::endl;
    } else {
      current_track_ = track;
      std::cout << description_.c_str() << " playing track "
        << current_track_ << std::endl;
    }
  }
  void CdPlayer::Stop()
  {
    std::cout << "CdPlayer::stop" << std::endl;
    current_track_ = 0;
    std::cout << description_.c_str() << " stopped" << std::endl;
  }
  void CdPlayer::Pause()
  {
    std::cout << "CdPlayer::pause" << std::endl;
    std::cout << description_.c_str() << " paused \"" << title_ << "\""
      << std::endl;
  }
  std::string CdPlayer::ToString() const
  {
    std::cout << "CdPlayer::ToString" << std::endl;
    return description_;
  }


} //namespace headfirst
