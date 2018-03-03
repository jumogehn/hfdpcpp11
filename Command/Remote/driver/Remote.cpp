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

  std::shared_ptr< RemoteControl > remoteControl(
    std::make_shared<RemoteControl>() );

  std::shared_ptr< Light > livingRoomLight(
    std::make_shared<Light>( "Living Room" ) );
  std::shared_ptr< Light > kitchenLight(
    std::make_shared<Light>( "Kitchen" ) );
  std::shared_ptr< CeilingFan > ceilingFan(
    std::make_shared<CeilingFan>( "Living Room" ) );
  std::shared_ptr< GarageDoor > garageDoor(
    std::make_shared<GarageDoor>( "Garage" ) );
  std::shared_ptr< Stereo > stereo(
    std::make_shared<Stereo>( "Living Room" ) );

  std::shared_ptr< LightOnCommand > livingRoomLightOn(
    std::make_shared<LightOnCommand>( livingRoomLight ) );
  std::shared_ptr< LightOffCommand > livingRoomLightOff(
    std::make_shared<LightOffCommand>( livingRoomLight ) );
  std::shared_ptr< LightOnCommand > kitchenLightOn(
    std::make_shared<LightOnCommand>( kitchenLight ) );
  std::shared_ptr< LightOffCommand > kitchenLightOff(
    std::make_shared<LightOffCommand>( kitchenLight ) );

  std::shared_ptr< CeilingFanOnCommand > ceilingFanOn(
    std::make_shared<CeilingFanOnCommand>( ceilingFan ) );
  std::shared_ptr< CeilingFanOffCommand > ceilingFanOff(
    std::make_shared<CeilingFanOffCommand>( ceilingFan ) );

  std::shared_ptr< GarageDoorUpCommand > garageDoorUp(
    std::make_shared<GarageDoorUpCommand>( garageDoor ) );
  std::shared_ptr< GarageDoorDownCommand > garageDoorDown(
    std::make_shared<GarageDoorDownCommand>( garageDoor ) );

  std::shared_ptr< StereoOnWithCDCommand > stereoOnWithCD(
    std::make_shared<StereoOnWithCDCommand>( stereo ) );
  std::shared_ptr< StereoOffCommand > stereoOff(
    std::make_shared<StereoOffCommand>( stereo ) );

  remoteControl->setCommand( 0, livingRoomLightOn,
                             livingRoomLightOff );
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

