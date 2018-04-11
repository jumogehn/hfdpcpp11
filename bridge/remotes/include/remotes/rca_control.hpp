//===--- RCAControl.hpp - ---------------------------------------*- C++ -*-===//
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



#ifndef	_HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "remote_control.hpp"


namespace headfirst {

  class RCAControl : public RemoteControl {

    unsigned int current_station_;

  public:
    explicit RCAControl( const std::string& location );
    void SetStation( unsigned int channel );
    void NextChannel();
    void PreviousChannel();
  };

} //namespace headfirst

#endif
