//===--- remote_control.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "command.hpp"

namespace headfirst {


  //
  // This is the invoker
  //
  class RemoteControl {

    static const int kSlots = 7;

    Command* on_commands_[kSlots];
    Command* off_commands_[kSlots];
    Command* no_command_;

    // Disable copy constructor and assignment operator
    RemoteControl( const RemoteControl& ) = delete;
    void operator=( const RemoteControl& ) = delete;

  public:
    RemoteControl();
    ~RemoteControl();
    void SetCommand( int slot, Command* on_command, Command* off_command );
    void OnButtonWasPushed( int slot ) const;
    void OffButtonWasPushed( int slot ) const;
    std::string ToString() const;
  };


} //namespace headfirst
#endif
