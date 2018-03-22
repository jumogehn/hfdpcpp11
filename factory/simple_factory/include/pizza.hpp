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


#ifndef	_HFDP_CPP_SIMPLE_FACTORY_PIZZA_HPP_
#define _HFDP_CPP_SIMPLE_FACTORY_PIZZA_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
#include <list>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  class Pizza {

  protected:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    mutable std::list< std::string > toppings_;
    Pizza();

  private:
    Pizza( const Pizza& ); // Disable copy constructor
    void operator=( const Pizza& ); // Disable assignment operator

  public:
    virtual ~Pizza();
    std::string GetName() const;
    virtual void Prepare() const;
    virtual void Bake() const;
    virtual void Cut() const;
    virtual void Box() const;
    std::string ToString() const;
  };


} //namespace headfirst
#endif
