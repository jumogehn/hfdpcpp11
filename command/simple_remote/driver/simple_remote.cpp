//===--- simple_remote.cpp - ------------------------------------*- C++ -*-===//
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
#include "garage_door.hpp"
#include "garage_door_open_command.hpp"
#include "light.hpp"
#include "light_on_command.hpp"
#include "simple_remote_control.hpp"


int main( int argc, char* argv[] ) {

  std::unique_ptr<SimpleRemoteControl> remote(new SimpleRemoteControl());
  std::unique_ptr<Light> light(new Light());
  std::unique_ptr<GarageDoor> garage_door(new GarageDoor());
  std::unique_ptr<LightOnCommand> light_on(new LightOnCommand( light.get() ));
  std::unique_ptr<GarageDoorOpenCommand>
    garage_open(new GarageDoorOpenCommand( garage_door.get() ));

  remote->SetCommand( light_on.get() );
  remote->ButtonWasPressed();
  remote->SetCommand( garage_open.get() );
  remote->ButtonWasPressed();

  return 0;
}
