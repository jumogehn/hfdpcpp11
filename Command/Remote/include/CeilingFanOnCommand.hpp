//===--- CeilingFanOnCommand.hpp - ------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_ON_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "CeilingFan.hpp"
#include "Command.hpp"


class CeilingFanOnCommand : public Command {

  const CeilingFan* _ceilingFan;

public:
  explicit CeilingFanOnCommand( const CeilingFan* ceilingFan );
  void execute() const;
};


#endif
