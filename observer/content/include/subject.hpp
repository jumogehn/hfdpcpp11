//===--- subject.hpp - ------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_OBSERVER_SUBJECT_HPP_
#define _HFDP_CPP_OBSERVER_SUBJECT_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "observer.hpp"

namespace headfirst {

  class Subject {

  protected:
    virtual ~Subject();
  public:
    virtual void RegisterObserver(Observer* o) = 0;
    virtual void RemoveObserver(Observer* o) = 0;
    virtual void NotifyObservers() const = 0;
  };

} //namespace headfirst
#endif
