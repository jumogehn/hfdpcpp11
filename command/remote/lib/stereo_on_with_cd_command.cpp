//===--- stereo_on_with_cd_command.cpp - ------------------------*- C++ -*-===//
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
  stereo_( stereo )
{
  assert( stereo );
  std::cout << "StereoOnWithCDCommand::StereoOnWithCDCommand" << std::endl;
}

void StereoOnWithCDCommand::Execute() const
{
  std::cout << "StereoOnWithCDCommand::execute" << std::endl;

  stereo_->TurnOn();
  stereo_->SetCd();
  stereo_->SetVolume(11);
}


