//===--- SimpleRemote.cpp - -------------------------------------*- C++ -*-===//
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
#include "GarageDoor.hpp"
#include "GarageDoorOpenCommand.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "SimpleRemoteControl.hpp"


int main( int argc, char* argv[] ) {

  std::shared_ptr< SimpleRemoteControl > remote( std::make_shared<SimpleRemoteControl>() );
  std::shared_ptr< Light > light( std::make_shared<Light>() );
  std::shared_ptr< GarageDoor > garageDoor( std::make_shared<GarageDoor>() );
  std::shared_ptr< LightOnCommand > lightOn( std::make_shared<LightOnCommand>( light ) );
  std::shared_ptr< GarageDoorOpenCommand >
    garageOpen( std::make_shared<GarageDoorOpenCommand>(garageDoor ) );

  remote->setCommand( lightOn );
  remote->buttonWasPressed();
  remote->setCommand( garageOpen );
  remote->buttonWasPressed();

  return 0;
}
