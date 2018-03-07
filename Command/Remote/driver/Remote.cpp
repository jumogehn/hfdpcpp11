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
#include "CeilingFan.hpp"
#include "CeilingFanOffCommand.hpp"
#include "CeilingFanOnCommand.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorDownCommand.hpp"
#include "GarageDoorUpCommand.hpp"
#include "Light.hpp"
#include "LightOffCommand.hpp"
#include "LightOnCommand.hpp"
#include "RemoteControl.hpp"
#include "Stereo.hpp"
#include "StereoOffCommand.hpp"
#include "StereoOnWithCDCommand.hpp"



int main( int argc, char* argv[] ) {

  auto remoteControl = std::make_shared<RemoteControl>();

  auto livingRoomLight = std::make_shared<Light>( "Living Room" );
  auto kitchenLight = std::make_shared<Light>( "Kitchen" );
  auto ceilingFan = std::make_shared<CeilingFan>( "Living Room" );
  auto garageDoor = std::make_shared<GarageDoor>( "Garage" );
  auto stereo = std::make_shared<Stereo>( "Living Room" );

  auto livingRoomLightOn = std::make_shared<LightOnCommand>( livingRoomLight );
  auto livingRoomLightOff = std::make_shared<LightOffCommand>( livingRoomLight );
  auto kitchenLightOn = std::make_shared<LightOnCommand>( kitchenLight );
  auto kitchenLightOff = std::make_shared<LightOffCommand>( kitchenLight );
  auto ceilingFanOn = std::make_shared<CeilingFanOnCommand>( ceilingFan );
  auto ceilingFanOff = std::make_shared<CeilingFanOffCommand>( ceilingFan );
  auto garageDoorUp = std::make_shared<GarageDoorUpCommand>( garageDoor );
  auto garageDoorDown = std::make_shared<GarageDoorDownCommand>( garageDoor );
  auto stereoOnWithCD = std::make_shared<StereoOnWithCDCommand>( stereo );
  auto stereoOff = std::make_shared<StereoOffCommand>( stereo );
    

  remoteControl->setCommand( 0, livingRoomLightOn, livingRoomLightOff );
  remoteControl->setCommand( 1, kitchenLightOn, kitchenLightOff );
  remoteControl->setCommand( 2, ceilingFanOn, ceilingFanOff );
  remoteControl->setCommand( 3, stereoOnWithCD, stereoOff );
  remoteControl->setCommand( 4, garageDoorUp, garageDoorDown );

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

