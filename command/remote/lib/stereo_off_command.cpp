//===--- stereo_off_command.cpp - -------------------------------*- C++ -*-===//
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

namespace headfirst {


  StereoOffCommand::StereoOffCommand( const Stereo* stereo ) :
    stereo_( stereo )
  {
    assert(stereo_);
    std::cout << "StereoOffCommand::StereoOffCommand" << std::endl;
  }

  void StereoOffCommand::Execute() const
  {
    assert(stereo_);
    std::cout << "StereoOffCommand::execute" << std::endl;
    stereo_->TurnOff();
  }


} //namespace headfirst
