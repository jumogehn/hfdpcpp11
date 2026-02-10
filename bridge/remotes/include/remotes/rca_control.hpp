//===--- RCAControl.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef _HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_

#include "remote_control.hpp"
// <string> 헤더 불필요 (TV가 위치 정보를 가짐)

namespace headfirst {

	class RCAControl : public RemoteControl {
		unsigned int current_station_;

	public:
		// [수정] string 대신 TV 객체를 주입받도록 변경
		explicit RCAControl(std::unique_ptr<TV> tv);

		void SetStation(unsigned int channel);
		void NextChannel();
		void PreviousChannel();
	};

}
#endif