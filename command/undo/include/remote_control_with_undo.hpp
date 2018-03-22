//===--- remote_control_with_undo.hpp - -------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_CONTROL_WITH_UNDO_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CONTROL_WITH_UNDO_HPP_

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
  class RemoteControlWithUndo {

    static const int kSlots = 7;

    Command* on_commands_[kSlots];
    Command* off_commands_[kSlots];
    Command* no_command_;
    mutable Command* undo_command_;

  public:
    RemoteControlWithUndo();
    ~RemoteControlWithUndo();
    void SetCommand( int slot, Command* on_command, Command* off_command );
    void OnButtonWasPushed( int slot ) const;
    void OffButtonWasPushed( int slot ) const;
    void UndoButtonWasPushed() const;
    std::string ToString() const;
  };


} //namespace headfirst
#endif
