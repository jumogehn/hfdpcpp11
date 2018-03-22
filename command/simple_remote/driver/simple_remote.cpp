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

  std::unique_ptr<headfirst::SimpleRemoteControl>
    remote(new headfirst::SimpleRemoteControl());
  std::unique_ptr<headfirst::Light>
    light(new headfirst::Light());
  std::unique_ptr<headfirst::GarageDoor>
    garage_door(new headfirst::GarageDoor());
  std::unique_ptr<headfirst::LightOnCommand>
    light_on(new headfirst::LightOnCommand( light.get() ));
  std::unique_ptr<headfirst::GarageDoorOpenCommand>
    garage_open(new headfirst::GarageDoorOpenCommand( garage_door.get() ));

  remote->SetCommand( light_on.get() );
  remote->ButtonWasPressed();
  remote->SetCommand( garage_open.get() );
  remote->ButtonWasPressed();

  return 0;
}
