//===--- pizza.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_METHOD_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_METHOD_PIZZA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
#include <list>
//Other libraries' .h files.
//Your project's .h files.


class Pizza {

protected:
  std::string _name;
  std::string _dough;
  std::string _sauce;
  mutable std::list< std::string > _toppings;
  Pizza();

private:
  Pizza( const Pizza& ); // Disable copy constructor
  void operator=( const Pizza& ); // Disable assignment operator

public:
  virtual ~Pizza();
  virtual void prepare() const;
  virtual void bake() const;
  virtual void cut() const;
  virtual void box() const;
  std::string getName() const;
  std::string toString() const;
};


#endif
