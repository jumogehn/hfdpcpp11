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


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "rca_control.hpp"
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "rca.hpp"
#include "remotes_config.h"


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
