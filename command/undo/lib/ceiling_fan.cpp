//===--- ceiling_fan.cpp - --------------------------------------*- C++ -*-===//
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
#include "ceiling_fan.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  CeilingFan::CeilingFan( std::string location ) :
    speed_( kOff ), location_( location )
  {
    std::cout << "CeilingFan::CeilingFan" << std::endl;
  }
  void CeilingFan::SetHigh() const
  {
    std::cout << "CeilingFan::high" << std::endl;
    speed_ = kHigh;
    std::cout << location_.c_str() << " ceiling fan is on high"
      << std::endl;
  }
  void CeilingFan::SetMedium() const
  {
    std::cout << "CeilingFan::medium" << std::endl;
    speed_ = kMedium;
    std::cout << location_.c_str() << " ceiling fan is on medium"
      << std::endl;
  }
  void CeilingFan::SetLow() const
  {
    std::cout << "CeilingFan::low" << std::endl;
    speed_ = kLow;
    std::cout << location_.c_str() << " ceiling fan is on low"
      << std::endl;
  }
  void CeilingFan::TurnOff() const
  {
    std::cout << "CeilingFan::off" << std::endl;
    speed_ = kOff;
    std::cout << location_.c_str() << " ceiling fan is off"
      << std::endl;
  }
  int CeilingFan::GetSpeed() const
  {
    std::cout << "CeilingFan::getSpeed" << std::endl;
    return speed_;
  }


} //namespace headfirst
