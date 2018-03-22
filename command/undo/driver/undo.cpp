//===--- undo.cpp - ---------------------------------------------*- C++ -*-===//
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
#include "ceiling_fan.hpp"
#include "ceiling_fan_high_command.hpp"
#include "ceiling_fan_medium_command.hpp"
#include "ceiling_fan_off_command.hpp"
#include "light.hpp"
#include "light_off_command.hpp"
#include "light_on_command.hpp"
#include "remote_control_with_undo.hpp"


int main( int argc, char* argv[] ) {

  std::unique_ptr<headfirst::RemoteControlWithUndo>
    remote_control(new headfirst::RemoteControlWithUndo());
  std::unique_ptr<headfirst::Light>
    living_room_light(new headfirst::Light( "Living Room" ));
  std::unique_ptr<headfirst::LightOnCommand>
    living_room_light_on(
      new headfirst::LightOnCommand( living_room_light.get() ));
  std::unique_ptr<headfirst::LightOffCommand>
    living_room_light_off(
      new headfirst::LightOffCommand( living_room_light.get() ));

  remote_control->SetCommand( 0, living_room_light_on.get(),
                              living_room_light_off.get() );

  remote_control->OnButtonWasPushed( 0 );
  remote_control->OffButtonWasPushed( 0 );
  std::cout << remote_control->ToString() << std::endl;
  remote_control->UndoButtonWasPushed();
  remote_control->OffButtonWasPushed( 0 );
  remote_control->OnButtonWasPushed( 0 );
  std::cout << remote_control->ToString() << std::endl;
  remote_control->UndoButtonWasPushed();

  std::unique_ptr<headfirst::CeilingFan>
    ceiling_fan(new headfirst::CeilingFan( "Living Room" ));
  std::unique_ptr<headfirst::CeilingFanMediumCommand>
    ceiling_fan_medium(
      new headfirst::CeilingFanMediumCommand( ceiling_fan.get() ));
  std::unique_ptr<headfirst::CeilingFanHighCommand>
    ceiling_fan_high(new headfirst::CeilingFanHighCommand( ceiling_fan.get() ));
  std::unique_ptr<headfirst::CeilingFanOffCommand>
    ceiling_fan_off(new headfirst::CeilingFanOffCommand( ceiling_fan.get() ));

  remote_control->SetCommand( 0, ceiling_fan_medium.get(),
                              ceiling_fan_off.get() );
  remote_control->SetCommand( 1, ceiling_fan_high.get(),
                              ceiling_fan_off.get() );

  remote_control->OnButtonWasPushed( 0 );
  remote_control->OffButtonWasPushed( 0 );
  std::cout << remote_control->ToString() << std::endl;
  remote_control->UndoButtonWasPushed();

  remote_control->OnButtonWasPushed( 1 );
  std::cout << remote_control->ToString() << std::endl;
  remote_control->UndoButtonWasPushed();

  return 0;
}
