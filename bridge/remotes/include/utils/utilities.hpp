//===--- Utilities.hpp - ----------------------------------------*- C++ -*-===//
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

//http://chadaustin.me/cppinterface.html

#ifndef __UTILITIES_H__
#define __UTILITIES_H__

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {
#ifdef WIN32
#define CALL __stdcall
#else
#define CALL
#endif

  extern "C" void CALL PrintMessage(const char * pMessage, bool newline = true);
  extern "C" void CALL PrintNumber(unsigned int num, bool newline = true);

} //namespace headfirst
#endif

