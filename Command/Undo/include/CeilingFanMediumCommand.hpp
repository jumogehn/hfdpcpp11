//===--- ceilingFanMediumCommand.hpp - --------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_CEILING_FAN_MEDIUM_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_CEILING_FAN_MEDIUM_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "CeilingFan.hpp"
#include "Command.hpp"


class CeilingFanMediumCommand : public Command {

  const std::shared_ptr<CeilingFan> _ceilingFan;
  mutable int _prevSpeed;

public:
  explicit CeilingFanMediumCommand( const std::shared_ptr<CeilingFan> ceilingFan );
  void execute() const;
  void undo() const;
};


#endif
