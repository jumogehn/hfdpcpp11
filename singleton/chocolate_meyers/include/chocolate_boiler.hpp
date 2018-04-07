//===--- chocolate_boiler.hpp - ---------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SINGLETON_CHOCOLATE_BOILER_HPP_
#define _HFDP_CPP_SINGLETON_CHOCOLATE_BOILER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  class ChocolateBoiler {

    bool empty_;
    bool boiled_;

    // Disable copy constructor and assignment operator
    ChocolateBoiler( const ChocolateBoiler& ) = delete;
    void operator=( const ChocolateBoiler& ) = delete;

    ChocolateBoiler();

  public:
    ~ChocolateBoiler();
    static ChocolateBoiler &GetInstance();
    void Fill();
    void Drain();
    void Boil();
    bool IsEmpty() const;
    bool IsBoiled() const;
  };


} //namespace headfirst
#endif
