//===--- DimmerLightOffCommand.hpp - ----------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_OFF_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Command.hpp"
#include "Light.hpp"


class DimmerLightOffCommand : public Command {

  const std::shared_ptr<Light> _light;
  mutable int _prevLevel;

public:
  explicit DimmerLightOffCommand( const std::shared_ptr<Light> light );
  void execute() const;
  void undo() const;
};


#endif