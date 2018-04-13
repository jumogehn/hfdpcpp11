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
    implementor_( nullptr )
  {}

  void RemoteControl::SetChannel( unsigned int channel )
  {
    assert( implementor_ );
    implementor_->TuneChannel( channel );
  }

  RemoteControl::~RemoteControl()
  {
  }

  void RemoteControl::On()
  {
    assert( implementor_ );
    implementor_->On();
  }

  void RemoteControl::Off()
  {
    assert( implementor_ );
    implementor_->Off();
  }

} //namespace headfirst
