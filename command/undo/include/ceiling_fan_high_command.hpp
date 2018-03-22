//===--- ceiling_fan_high_command.hpp - -------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HIGH_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HIGH_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "ceiling_fan.hpp"
#include "command.hpp"

namespace headfirst {


  class CeilingFanHighCommand : public Command {

    const CeilingFan* ceiling_fan_;
    mutable int prev_speed_;

  public:
    explicit CeilingFanHighCommand( const CeilingFan* ceiling_fan );
    void Execute() const;
    void Undo() const;
  };


} //namespace headfirst
#endif
