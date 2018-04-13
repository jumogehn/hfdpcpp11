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
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "tv.hpp"

namespace headfirst {

  class RemoteControl {

    // Disable copy constructor and assignment operator
    RemoteControl( const RemoteControl& ) = delete;
    void operator=( const RemoteControl& ) = delete;

  protected:
    std::unique_ptr<TV> implementor_;
    RemoteControl();
    virtual void SetChannel( unsigned int channel );

  public:
    virtual ~RemoteControl();
    virtual void On();
    virtual void Off();
  };

} //namespace headfirst

#endif
