//===--- RemoteControl.cpp - ------------------------------------*- C++ -*-===//
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
#include "remote_control.hpp"
//C system files.
//C++ system files.
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "remotes_config.h"


namespace headfirst {

  RemoteControl::RemoteControl() :
    _implementor( 0 )
  {}

  void RemoteControl::setChannel( unsigned int channel )
  {
    assert( _implementor );
    _implementor->tuneChannel( channel );
  }

  RemoteControl::~RemoteControl()
  {
    delete _implementor;
  }

  void RemoteControl::on()
  {
    assert( _implementor );
    _implementor->on();
  }

  void RemoteControl::off()
  {
    assert( _implementor );
    _implementor->off();
  }

} //namespace headfirst
