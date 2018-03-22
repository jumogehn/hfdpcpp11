//===--- stereo_on_with_cd_command.hpp - ------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_STEREO_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_STEREO_ON_COMMAND_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "command.hpp"
#include "stereo.hpp"

namespace headfirst {


  class StereoOnWithCDCommand : public Command {

    const Stereo* stereo_;

  public:
    explicit StereoOnWithCDCommand( const Stereo* stereo );
    void Execute() const;
  };


} //namespace headfirst
#endif
