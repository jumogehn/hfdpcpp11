//===--- GarageDoorOpenCommand.hpp - ----------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_OPEN_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_OPEN_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Command.hpp"
#include "GarageDoor.hpp"


class GarageDoorOpenCommand : public Command {

  const std::shared_ptr<GarageDoor> _garageDoor;

public:
  explicit GarageDoorOpenCommand( const std::shared_ptr<GarageDoor> garageDoor);
  void execute() const;
};


#endif
