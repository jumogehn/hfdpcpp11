//===--- hottub.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_

namespace headfirst {


  class Hottub {

    mutable bool on_;
    mutable int temperature_;

  public:
    Hottub();
    void TurnOn() const;
    void TurnOff() const;
    void BubblesOn() const;
    void BubblesOff() const;
    void JetsOn() const;
    void JetsOff() const;
    void SetTemperature( int temperature );
    void Heat() const;
    void Cool() const;
  };


} //namespace headfirst
#endif
