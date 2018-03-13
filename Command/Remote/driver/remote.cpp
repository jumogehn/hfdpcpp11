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
#include <memory>
#include <iostream>
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

  std::unique_ptr<RemoteControl> remoteControl(new RemoteControl());

  std::unique_ptr<Light> livingRoomLight(new Light( "Living Room" ));
  std::unique_ptr<Light> kitchenLight(new Light( "Kitchen" ));
  std::unique_ptr<CeilingFan> ceilingFan(new CeilingFan( "Living Room" ));
  std::unique_ptr<GarageDoor> garageDoor(new GarageDoor( "Garage" ));
  std::unique_ptr<Stereo> stereo(new Stereo( "Living Room" ));

  std::unique_ptr<LightOnCommand> livingRoomLightOn(new LightOnCommand( livingRoomLight.get() ));
  std::unique_ptr<LightOffCommand> livingRoomLightOff(new LightOffCommand( livingRoomLight.get() ));
  std::unique_ptr<LightOnCommand> kitchenLightOn(new LightOnCommand( kitchenLight.get() ));
  std::unique_ptr<LightOffCommand> kitchenLightOff(new LightOffCommand( kitchenLight.get() ));
  std::unique_ptr<CeilingFanOnCommand> ceilingFanOn(new CeilingFanOnCommand( ceilingFan.get() ));
  std::unique_ptr<CeilingFanOffCommand> ceilingFanOff(new CeilingFanOffCommand( ceilingFan.get() ));
  std::unique_ptr<GarageDoorUpCommand> garageDoorUp(new GarageDoorUpCommand( garageDoor.get() ));
  std::unique_ptr<GarageDoorDownCommand> garageDoorDown(new GarageDoorDownCommand( garageDoor.get() ));
  std::unique_ptr<StereoOnWithCDCommand> stereoOnWithCD(new StereoOnWithCDCommand( stereo.get() ));
  std::unique_ptr<StereoOffCommand> stereoOff(new StereoOffCommand( stereo.get() ));
    

  remoteControl->setCommand( 0, livingRoomLightOn.get(), livingRoomLightOff.get() );
  remoteControl->setCommand( 1, kitchenLightOn.get(), kitchenLightOff.get() );
  remoteControl->setCommand( 2, ceilingFanOn.get(), ceilingFanOff.get() );
  remoteControl->setCommand( 3, stereoOnWithCD.get(), stereoOff.get() );
  remoteControl->setCommand( 4, garageDoorUp.get(), garageDoorDown.get() );

  std::cout << remoteControl->toString() << std::endl;

  remoteControl->onButtonWasPushed( 0 );
  remoteControl->offButtonWasPushed( 0 );
  remoteControl->onButtonWasPushed( 1 );
  remoteControl->offButtonWasPushed( 1 );
  remoteControl->onButtonWasPushed( 2 );
  remoteControl->offButtonWasPushed( 2 );
  remoteControl->onButtonWasPushed( 3 );
  remoteControl->offButtonWasPushed( 3 );
  remoteControl->onButtonWasPushed( 4 );
  remoteControl->offButtonWasPushed( 4 );

  return 0;
}

