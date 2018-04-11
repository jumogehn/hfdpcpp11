//===--- Sony.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_BRIDGE_SONY_HPP_
#define _HFDP_CPP_BRIDGE_SONY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "tv.hpp"

namespace headfirst {

  class Sony : public TV {

    std::string _location;

  public:
    explicit Sony( const std::string& location );
    void on();
    void off();
    void tuneChannel( unsigned int channel );
  };
} //namespace headfirst

#endif
