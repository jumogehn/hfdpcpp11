//===--- observer.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_OBSERVER_OBSERVER_HPP_
#define _HFDP_CPP_OBSERVER_OBSERVER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.


class Observer {

protected:
  virtual ~Observer();
public:
  virtual void update(float temp, float humidity, float pressure) = 0;
};

#endif
