//===--- CaffeineBeverage.hpp - ---------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_



class CaffeineBeverage {
  void boilWater() const;
  void pourInCup() const;
protected:
  virtual void brew() const = 0;
  virtual void addCondiments() const = 0;

public:
  virtual ~CaffeineBeverage();
  virtual void prepareRecipe();
};


#endif
