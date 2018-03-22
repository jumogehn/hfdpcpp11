//===--- screen.hpp - -------------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_SCREEN_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_SCREEN_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  class Screen {

    std::string description_;

    Screen( const Screen& ); // Disable copy constructor
    void operator=( const Screen& ); // Disable assignment operator

  public:
    Screen( std::string description );
    void CloseUp();
    void Down();
    std::string ToString();
  };


} //namespace headfirst
#endif
