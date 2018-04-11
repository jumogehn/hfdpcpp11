//===--- RCAControl.cpp - ---------------------------------------*- C++ -*-===//
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
#include "rca.hpp"
#include "rca_control.hpp"


namespace headfirst {

  RCAControl::RCAControl( const std::string& location ) :
    _currentStation( 0 )
  {
    _implementor = new RCA( location );
  }

  void RCAControl::setStation( unsigned int channel )
  {
    _currentStation = channel;
    setChannel( _currentStation );
  }

  void RCAControl::nextChannel()
  {
    _currentStation++;
    setChannel( _currentStation );
  }

  void RCAControl::previousChannel()
  {
    _currentStation--;
    setChannel( _currentStation );
  }

} //namespace headfirst
