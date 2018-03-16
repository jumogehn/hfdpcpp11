//===--- Remote.cpp - -------------------------------------------*- C++ -*-===//
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

  std::unique_ptr<RemoteControl> remote_control(new RemoteControl());

  std::unique_ptr<Light> living_room_light(new Light( "Living Room" ));
  std::unique_ptr<Light> kitchen_light(new Light( "Kitchen" ));
  std::unique_ptr<CeilingFan> ceiling_fan(new CeilingFan( "Living Room" ));
  std::unique_ptr<GarageDoor> garage_door(new GarageDoor( "Garage" ));
  std::unique_ptr<Stereo> stereo(new Stereo( "Living Room" ));

  std::unique_ptr<LightOnCommand> living_room_light_on(new LightOnCommand( living_room_light.get() ));
  std::unique_ptr<LightOffCommand> living_room_light_off(new LightOffCommand( living_room_light.get() ));
  std::unique_ptr<LightOnCommand> kitchen_light_on(new LightOnCommand( kitchen_light.get() ));
  std::unique_ptr<LightOffCommand> kitchen_light_off(new LightOffCommand( kitchen_light.get() ));
  std::unique_ptr<CeilingFanOnCommand> ceiling_fan_on(new CeilingFanOnCommand( ceiling_fan.get() ));
  std::unique_ptr<CeilingFanOffCommand> ceiling_fan_off(new CeilingFanOffCommand( ceiling_fan.get() ));
  std::unique_ptr<GarageDoorUpCommand> garage_door_up(new GarageDoorUpCommand( garage_door.get() ));
  std::unique_ptr<GarageDoorDownCommand> garage_door_down(new GarageDoorDownCommand( garage_door.get() ));
  std::unique_ptr<StereoOnWithCDCommand> stereo_on_with_cd(new StereoOnWithCDCommand( stereo.get() ));
  std::unique_ptr<StereoOffCommand> stereo_off(new StereoOffCommand( stereo.get() ));

  remote_control->SetCommand( 0, living_room_light_on.get(), living_room_light_off.get() );
  remote_control->SetCommand( 1, kitchen_light_on.get(), kitchen_light_off.get() );
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

