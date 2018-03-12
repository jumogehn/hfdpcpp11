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

  std::unique_ptr<RemoteControlWithUndo> remoteControl(new RemoteControlWithUndo());
  std::unique_ptr<Light> livingRoomLight(new Light( "Living Room" ));
  std::unique_ptr<LightOnCommand> livingRoomLightOn(new LightOnCommand( livingRoomLight.get() ));
  std::unique_ptr<LightOffCommand> livingRoomLightOff(new LightOffCommand( livingRoomLight.get() ));

  remoteControl->setCommand( 0, livingRoomLightOn.get(),livingRoomLightOff.get() );

  remoteControl->onButtonWasPushed( 0 );
  remoteControl->offButtonWasPushed( 0 );
  std::cout << remoteControl->toString() << std::endl;
  remoteControl->undoButtonWasPushed();
  remoteControl->offButtonWasPushed( 0 );
  remoteControl->onButtonWasPushed( 0 );
  std::cout << remoteControl->toString() << std::endl;
  remoteControl->undoButtonWasPushed();

  std::unique_ptr<CeilingFan> ceilingFan(new CeilingFan( "Living Room" ));
  std::unique_ptr<CeilingFanMediumCommand> ceilingFanMedium(new CeilingFanMediumCommand( ceilingFan.get() ));
  std::unique_ptr<CeilingFanHighCommand> ceilingFanHigh(new CeilingFanHighCommand( ceilingFan.get() ));
  std::unique_ptr<CeilingFanOffCommand> ceilingFanOff(new CeilingFanOffCommand( ceilingFan.get() ));

  remoteControl->setCommand( 0, ceilingFanMedium.get(), ceilingFanOff.get() );
  remoteControl->setCommand( 1, ceilingFanHigh.get(), ceilingFanOff.get() );

  remoteControl->onButtonWasPushed( 0 );
  remoteControl->offButtonWasPushed( 0 );
  std::cout << remoteControl->toString() << std::endl;
  remoteControl->undoButtonWasPushed();

  remoteControl->onButtonWasPushed( 1 );
  std::cout << remoteControl->toString() << std::endl;
  remoteControl->undoButtonWasPushed();

  return 0;
}
