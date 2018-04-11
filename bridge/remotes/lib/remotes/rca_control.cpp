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
    current_station_( 0 )
  {
    implementor_ = new RCA( location );
  }

  void RCAControl::SetStation( unsigned int channel )
  {
    current_station_ = channel;
    SetChannel( current_station_ );
  }

  void RCAControl::NextChannel()
  {
    current_station_++;
    SetChannel( current_station_ );
  }

  void RCAControl::PreviousChannel()
  {
    current_station_--;
    SetChannel( current_station_ );
  }

} //namespace headfirst
