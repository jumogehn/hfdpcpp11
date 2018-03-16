//===--- caffeine_beverage_with_hook.hpp - ----------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_



class CaffeineBeverageWithHook {
protected:
  virtual void boilWater() const;
  virtual void pourInCup() const;
  virtual bool customerWantsCondiments();
public:
  virtual ~CaffeineBeverageWithHook();
  virtual void prepareRecipe();
  virtual void brew() const = 0;
  virtual void addCondiments() const = 0;
};


#endif
