//===--- Remotes.cpp - ------------------------------------------*- C++ -*-===//
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

#include "remotes_config.h"
#include "remote_control.hpp"
#include "sony_control.hpp"
#include "rca_control.hpp"
#include <vector>
#include <memory>
#include <iostream>


int main( int argc, char* argv[] ) {

  std::cout << argv[0] << " Version " << remotes_VERSION_MAJOR << "."
  << remotes_VERSION_MINOR << std::endl << std::endl;

  std::vector< headfirst::RemoteControl* > remotes;

  std::unique_ptr< headfirst::SonyControl >
    sonyControl( new headfirst::SonyControl( "XBR in living room" ) );
  remotes.push_back( sonyControl.get() );

  std::unique_ptr< headfirst::RCAControl >
    rcaControl( new headfirst::RCAControl( "19 inch in kitchen" ) );
  remotes.push_back( rcaControl.get() );

  // turn on all tv's
  std::vector< headfirst::RemoteControl* >::iterator iterator;
  for( iterator = remotes.begin(); iterator != remotes.end(); iterator++ ) {
    ( *iterator )->on();
  }

  sonyControl->nextChannel();
  rcaControl->setStation( 35 );

  // turn off all tv's
  for( iterator = remotes.begin(); iterator != remotes.end(); iterator++ ) {
    ( *iterator )->off();
  }

  return 0;
}

