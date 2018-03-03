//===--- Undo.cpp - ---------------------------------------------*- C++ -*-===//
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
#include "CeilingFan.hpp"
#include "CeilingFanHighCommand.hpp"
#include "CeilingFanMediumCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "Light.hpp"
#include "LightOffCommand.hpp"
#include "LightOnCommand.hpp"
#include "RemoteControlWithUndo.hpp"


int main( int argc, char* argv[] ) {

  std::shared_ptr< RemoteControlWithUndo > remoteControl(
    std::make_shared<RemoteControlWithUndo>() );

  std::shared_ptr< Light > livingRoomLight(
    std::make_shared<Light>( "Living Room" ) );

  std::shared_ptr< LightOnCommand > livingRoomLightOn(
    std::make_shared<LightOnCommand>( livingRoomLight ) );
  std::shared_ptr< LightOffCommand > livingRoomLightOff(
    std::make_shared<LightOffCommand>( livingRoomLight ) );

  remoteControl->setCommand( 0, livingRoomLightOn,
                             livingRoomLightOff );

  remoteControl->onButtonWasPushed( 0 );
  remoteControl->offButtonWasPushed( 0 );
  std::cout << remoteControl->toString() << std::endl;
  remoteControl->undoButtonWasPushed();
  remoteControl->offButtonWasPushed( 0 );
  remoteControl->onButtonWasPushed( 0 );
  std::cout << remoteControl->toString() << std::endl;
  remoteControl->undoButtonWasPushed();

  std::shared_ptr< CeilingFan > ceilingFan(
    std::make_shared<CeilingFan>( "Living Room" ) );

  std::shared_ptr< CeilingFanMediumCommand > ceilingFanMedium(
    std::make_shared<CeilingFanMediumCommand>( ceilingFan ) );
  std::shared_ptr< CeilingFanHighCommand > ceilingFanHigh(
    std::make_shared<CeilingFanHighCommand>( ceilingFan ) );
  std::shared_ptr< CeilingFanOffCommand > ceilingFanOff(
    std::make_shared<CeilingFanOffCommand>( ceilingFan ) );

  remoteControl->setCommand( 0, ceilingFanMedium, ceilingFanOff );
  remoteControl->setCommand( 1, ceilingFanHigh, ceilingFanOff );

  remoteControl->onButtonWasPushed( 0 );
  remoteControl->offButtonWasPushed( 0 );
  std::cout << remoteControl->toString() << std::endl;
  remoteControl->undoButtonWasPushed();

  remoteControl->onButtonWasPushed( 1 );
  std::cout << remoteControl->toString() << std::endl;
  remoteControl->undoButtonWasPushed();

  return 0;
}
