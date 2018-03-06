//===--- Subject.hpp - ------------------------------------------*- C++ -*-===//
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
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Observer.hpp"

class Subject {

protected:
  virtual ~Subject();
public:
  virtual void registerObserver(std::shared_ptr<Observer> o) = 0;
  virtual void removeObserver(std::shared_ptr<Observer> o) = 0;
  virtual void notifyObservers() const = 0;
};

#endif
