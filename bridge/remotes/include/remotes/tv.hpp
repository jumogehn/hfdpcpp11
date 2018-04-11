//===--- TV.hpp - -----------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_BRIDGE_TV_HPP_
#define _HFDP_CPP_BRIDGE_TV_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {

  class TV {
  protected:
    TV() {};
  public:
    virtual ~TV() {};
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void tuneChannel( unsigned int channel ) = 0;
  };

} //namespace headfirst

#endif
