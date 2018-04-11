//===--- RCA.cpp - ----------------------------------------------*- C++ -*-===//
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
#include "rca.hpp"
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "remotes_config.h"
#ifdef USE_UTILS
#include "utilities.hpp"
#else
#include <iostream>
#endif

namespace headfirst {

  RCA::RCA( const std::string& location ) :
    _location( location )
  {}

  void RCA::on()
  {
#ifdef USE_UTILS
    PrintMessage("RCA ", false);
    PrintMessage(_location.c_str(), false);
    PrintMessage(" TV is on");
#else
    std::cout << "RCA " << _location.c_str() << " TV is on" << std::endl;
#endif
  }

  void RCA::off()
  {
#ifdef USE_UTILS
    PrintMessage("RCA ", false);
    PrintMessage(_location.c_str(), false);
    PrintMessage(" TV is off");
#else
    std::cout << "RCA " << _location.c_str() << " TV is off" << std::endl;
#endif
  }

  void RCA::tuneChannel(unsigned int channel)
  {
#ifdef USE_UTILS
    PrintMessage("RCA ", false);
    PrintMessage(_location.c_str(), false);
    PrintMessage(" tuned to channel ", false);
    PrintNumber(channel);
#else
    std::cout << "RCA " << _location.c_str() << " tuned to channel " << channel << std::endl;
#endif
  }

} //namespace headfirst
