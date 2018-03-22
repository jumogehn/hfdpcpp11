//===--- projector.hpp - ----------------------------------------*- C++ -*-===//
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
#include "projector.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "dvd_player.hpp"

namespace headfirst {


  Projector::Projector( std::string description, DvdPlayer* dvd_player ) :
    description_( description ), dvd_player_( dvd_player )
  {
    assert( dvd_player );
    std::cout << "Projector::Projector" << std::endl;
  }
  void Projector::TurnOn()
  {
    std::cout << "Projector::on" << std::endl;
    std::cout << description_.c_str() << " on" << std::endl;
  }
  void Projector::TurnOff()
  {
    std::cout << "Projector::off" << std::endl;
    std::cout << description_.c_str() << " off" << std::endl;
  }
  void Projector::WideScreenMode()
  {
    std::cout << "Projector::wideScreenMode" << std::endl;
    std::cout << description_.c_str()
      << " in widescreen mode (16x9 aspect ratio)" << std::endl;
  }
  void Projector::TvMode()
  {
    std::cout << "Projector::tvMode" << std::endl;
    std::cout << description_.c_str()
      << " in tv mode (4x3 aspect ratio)" << std::endl;
  }
  std::string Projector::ToString()
  {
    std::cout << "Projector::ToString" << std::endl;
    return description_;
  }



} //namespace headfirst
