//===--- RemoteControl.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "tv.hpp"

namespace headfirst {

  class RemoteControl {

    RemoteControl( const RemoteControl& ); // Disable copy constructor
    void operator=( const RemoteControl& ); // Disable assignment operator

  protected:
    TV* _implementor;
    RemoteControl();
    virtual void setChannel( unsigned int channel );

  public:
    virtual ~RemoteControl();
    virtual void on();
    virtual void off();
  };

} //namespace headfirst

#endif
