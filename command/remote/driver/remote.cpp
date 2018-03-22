//===--- remote.cpp - -------------------------------------------*- C++ -*-===//
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
#include "ceiling_fan_off_command.hpp"
#include "ceiling_fan_on_command.hpp"
#include "garage_door.hpp"
#include "garage_door_down_command.hpp"
#include "garage_door_up_command.hpp"
#include "light.hpp"
#include "light_off_command.hpp"
#include "light_on_command.hpp"
#include "remote_control.hpp"
#include "stereo.hpp"
#include "stereo_off_command.hpp"
#include "stereo_on_with_cd_command.hpp"



int main( int argc, char* argv[] ) {

  std::unique_ptr<headfirst::RemoteControl>
    remote_control(new headfirst::RemoteControl());

  std::unique_ptr<headfirst::Light>
    living_room_light(new headfirst::Light( "Living Room" ));
  std::unique_ptr<headfirst::Light>
    kitchen_light(new headfirst::Light( "Kitchen" ));
  std::unique_ptr<headfirst::CeilingFan>
    ceiling_fan(new headfirst::CeilingFan( "Living Room" ));
  std::unique_ptr<headfirst::GarageDoor>
    garage_door(new headfirst::GarageDoor( "Garage" ));
  std::unique_ptr<headfirst::Stereo>
    stereo(new headfirst::Stereo( "Living Room" ));

  std::unique_ptr<headfirst::LightOnCommand>
    living_room_light_on(
      new headfirst::LightOnCommand( living_room_light.get() ));
  std::unique_ptr<headfirst::LightOffCommand>
    living_room_light_off(
      new headfirst::LightOffCommand( living_room_light.get() ));
  std::unique_ptr<headfirst::LightOnCommand>
    kitchen_light_on(new headfirst::LightOnCommand( kitchen_light.get() ));
  std::unique_ptr<headfirst::LightOffCommand>
    kitchen_light_off(new headfirst::LightOffCommand( kitchen_light.get() ));
  std::unique_ptr<headfirst::CeilingFanOnCommand>
    ceiling_fan_on(new headfirst::CeilingFanOnCommand( ceiling_fan.get() ));
  std::unique_ptr<headfirst::CeilingFanOffCommand>
    ceiling_fan_off(new headfirst::CeilingFanOffCommand( ceiling_fan.get() ));
  std::unique_ptr<headfirst::GarageDoorUpCommand>
    garage_door_up(new headfirst::GarageDoorUpCommand( garage_door.get() ));
  std::unique_ptr<headfirst::GarageDoorDownCommand>
    garage_door_down(new headfirst::GarageDoorDownCommand( garage_door.get() ));
  std::unique_ptr<headfirst::StereoOnWithCDCommand>
    stereo_on_with_cd(new headfirst::StereoOnWithCDCommand( stereo.get() ));
  std::unique_ptr<headfirst::StereoOffCommand>
    stereo_off(new headfirst::StereoOffCommand( stereo.get() ));

  remote_control->SetCommand( 0, living_room_light_on.get(),
                              living_room_light_off.get() );
  remote_control->SetCommand( 1, kitchen_light_on.get(),
                              kitchen_light_off.get() );
  remote_control->SetCommand( 2, ceiling_fan_on.get(), ceiling_fan_off.get() );
  remote_control->SetCommand( 3, stereo_on_with_cd.get(), stereo_off.get() );
  remote_control->SetCommand( 4, garage_door_up.get(), garage_door_down.get() );

  std::cout << remote_control->ToString() << std::endl;

  remote_control->OnButtonWasPushed( 0 );
  remote_control->OffButtonWasPushed( 0 );
  remote_control->OnButtonWasPushed( 1 );
  remote_control->OffButtonWasPushed( 1 );
  remote_control->OnButtonWasPushed( 2 );
  remote_control->OffButtonWasPushed( 2 );
  remote_control->OnButtonWasPushed( 3 );
  remote_control->OffButtonWasPushed( 3 );
  remote_control->OnButtonWasPushed( 4 );
  remote_control->OffButtonWasPushed( 4 );

  return 0;
}

