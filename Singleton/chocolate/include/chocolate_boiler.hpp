//===--- ChocolateBoiler.hpp - ----------------------------------*- C++ -*-===//
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


class ChocolateBoiler {

  static ChocolateBoiler* _uniqueInstance;
  bool _empty;
  bool _boiled;

  ChocolateBoiler( const ChocolateBoiler& ); // Disable copy constructor
  void operator=( const ChocolateBoiler& ); // Disable assignment operator

  ChocolateBoiler();

public:
  ~ChocolateBoiler();
  static ChocolateBoiler* getInstance();
  void fill();
  void drain();
  void boil();
  bool isEmpty() const;
  bool isBoiled() const;
};


#endif 
