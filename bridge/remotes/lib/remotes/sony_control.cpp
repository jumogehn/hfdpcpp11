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
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "remotes_config.h"
#include "sony.hpp"
#include "tv.hpp"

namespace headfirst {

  SonyControl::SonyControl( const std::string& location ) :
    current_station_( 0 )
  {
    implementor_ = std::unique_ptr<TV>(new Sony( location ));
  }

  void SonyControl::SetStation( unsigned int channel )
  {
    current_station_ = channel;
    SetChannel( current_station_ );
  }

  void SonyControl::NextChannel()
  {
    current_station_++;
    SetChannel( current_station_ );
  }

  void SonyControl::PreviousChannel()
  {
    current_station_--;
    SetChannel( current_station_ );
  }


} //namespace headfirst
