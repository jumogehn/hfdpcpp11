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


#include "remotes_config.h"
#include "sony.hpp"
#include "sony_control.hpp"
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
