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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "rca_control.hpp"
#include "remote_control.hpp"
#include "remotes_config.h"
#include "sony_control.hpp"


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
  for ( headfirst::RemoteControl*& element : remotes) {
    element->on();
  }

  sonyControl->nextChannel();
  rcaControl->setStation( 35 );

  // turn off all tv's
  for ( headfirst::RemoteControl*& element : remotes) {
    element->off();
  }

  return 0;
}

