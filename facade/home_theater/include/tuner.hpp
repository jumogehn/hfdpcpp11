//===--- tuner.hpp - --------------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {



  class Amplifier;

  class Tuner {

    std::string description_;
    Amplifier* amplifier_;
    double frequency_;

    // Disable copy constructor and assignment operator
    Tuner( const Tuner& ) = delete;
    void operator=( const Tuner& ) = delete;

  public:
    Tuner( std::string description, Amplifier* amplifier );
    void TurnOn();
    void TurnOff();
    void SetFrequency( double frequency );
    void SetAm();
    void SetFm();
    std::string ToString() const;
  };


} //namespace headfirst
#endif
