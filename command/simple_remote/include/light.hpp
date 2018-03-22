//===--- light.hpp - --------------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_HPP_

namespace headfirst {


  class Light {

  public:
    Light();
    void On() const;
    void Off() const;
  };

} //namespace headfirst
#endif
