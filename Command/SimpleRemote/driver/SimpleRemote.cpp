//===--- SimpleRemote.cpp - -------------------------------------*- C++ -*-===//
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


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "GarageDoor.hpp"
#include "GarageDoorOpenCommand.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "SimpleRemoteControl.hpp"


int main( int argc, char* argv[] ) {

  auto remote = std::make_shared<SimpleRemoteControl>();
  auto light = std::make_shared<Light>();
  auto garageDoor = std::make_shared<GarageDoor>();
  auto lightOn = std::make_shared<LightOnCommand>( light );
  auto garageOpen = std::make_shared<GarageDoorOpenCommand>( garageDoor );

  remote->setCommand( lightOn );
  remote->buttonWasPressed();
  remote->setCommand( garageOpen );
  remote->buttonWasPressed();

  return 0;
}
