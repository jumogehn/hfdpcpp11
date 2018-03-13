//===--- StereoOffCommand.cpp - ---------------------------------*- C++ -*-===//
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
#include "stereo_off_command.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


StereoOffCommand::StereoOffCommand( const Stereo* stereo ) :
  _stereo( stereo )
{
  std::cout << "StereoOffCommand::StereoOffCommand" << std::endl;
  assert( stereo );
}

void StereoOffCommand::execute() const
{
  std::cout << "StereoOffCommand::execute" << std::endl;
  _stereo->off();
}


