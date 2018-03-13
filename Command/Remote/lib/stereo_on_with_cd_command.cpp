//===--- StereoOnWithCDCommand.cpp - ----------------------------*- C++ -*-===//
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
#include "stereo_on_with_cd_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


StereoOnWithCDCommand::StereoOnWithCDCommand( const Stereo* stereo ) :
  _stereo( stereo )
{
  assert( stereo );
  std::cout << "StereoOnWithCDCommand::StereoOnWithCDCommand" << std::endl;
}

void StereoOnWithCDCommand::execute() const
{
  std::cout << "StereoOnWithCDCommand::execute" << std::endl;

  _stereo->on();
  _stereo->setCD();
  _stereo->setVolume(11);
}


