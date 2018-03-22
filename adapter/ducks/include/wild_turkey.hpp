//===--- wild_turkey.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_
#define _HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "turkey.hpp"


namespace headfirst {

  class WildTurkey : public Turkey {

  public:
    void Fly() const;
    void Gobble() const;
  };


} //namespace headfirst
#endif
