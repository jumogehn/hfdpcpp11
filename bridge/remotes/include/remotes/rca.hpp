//===--- RCA.hpp - ----------------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_BRIDGE_RCA_HPP_
#define _HFDP_CPP_BRIDGE_RCA_HPP_

#include "tv.hpp"
#include <string>

namespace headfirst {

  class RCA : public TV {

    std::string _location;

  public:
    explicit RCA( const std::string& location );
    void on();
    void off();
    void tuneChannel(unsigned int channel);
  };
} //namespace headfirst

#endif
