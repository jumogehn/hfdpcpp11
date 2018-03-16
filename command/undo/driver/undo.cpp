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
#include "ceiling_fan.hpp"
#include "ceiling_fan_high_command.hpp"
#include "ceiling_fan_medium_command.hpp"
#include "ceiling_fan_off_command.hpp"
#include "light.hpp"
#include "light_off_command.hpp"
#include "light_on_command.hpp"
#include "remote_control_with_undo.hpp"


int main( int argc, char* argv[] ) {

  std::unique_ptr<RemoteControlWithUndo>
    remote_control(new RemoteControlWithUndo());
  std::unique_ptr<Light>
    living_room_light(new Light( "Living Room" ));
  std::unique_ptr<LightOnCommand>
    living_room_light_on(new LightOnCommand( living_room_light.get() ));
  std::unique_ptr<LightOffCommand>
    living_room_light_off(new LightOffCommand( living_room_light.get() ));

  remote_control->SetCommand( 0, living_room_light_on.get(),living_room_light_off.get() );

  remote_control->OnButtonWasPushed( 0 );
  remote_control->OffButtonWasPushed( 0 );
  std::cout << remote_control->ToString() << std::endl;
  remote_control->UndoButtonWasPushed();
  remote_control->OffButtonWasPushed( 0 );
  remote_control->OnButtonWasPushed( 0 );
  std::cout << remote_control->ToString() << std::endl;
  remote_control->UndoButtonWasPushed();

  std::unique_ptr<CeilingFan>
    ceiling_fan(new CeilingFan( "Living Room" ));
  std::unique_ptr<CeilingFanMediumCommand>
    ceiling_fan_medium(new CeilingFanMediumCommand( ceiling_fan.get() ));
  std::unique_ptr<CeilingFanHighCommand>
    ceiling_fan_high(new CeilingFanHighCommand( ceiling_fan.get() ));
  std::unique_ptr<CeilingFanOffCommand>
    ceiling_fan_off(new CeilingFanOffCommand( ceiling_fan.get() ));

  remote_control->SetCommand( 0, ceiling_fan_medium.get(), ceiling_fan_off.get() );
  remote_control->SetCommand( 1, ceiling_fan_high.get(), ceiling_fan_off.get() );

  remote_control->OnButtonWasPushed( 0 );
  remote_control->OffButtonWasPushed( 0 );
  std::cout << remote_control->ToString() << std::endl;
  remote_control->UndoButtonWasPushed();

  remote_control->OnButtonWasPushed( 1 );
  std::cout << remote_control->ToString() << std::endl;
  remote_control->UndoButtonWasPushed();

  return 0;
}
