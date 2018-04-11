//===--- SonyControl.cpp - --------------------------------------*- C++ -*-===//
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
#include "sony_control.hpp"
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "remotes_config.h"
#include "sony.hpp"
#include <string>

namespace headfirst {

  SonyControl::SonyControl( const std::string& location ) :
    _currentStation( 0 )
  {
    _implementor = new Sony( location );
  }

  void SonyControl::setStation( unsigned int channel )
  {
    _currentStation = channel;
    setChannel( _currentStation );
  }

  void SonyControl::nextChannel()
  {
    _currentStation++;
    setChannel( _currentStation );
  }

  void SonyControl::previousChannel()
  {
    _currentStation--;
    setChannel( _currentStation );
  }


} //namespace headfirst
