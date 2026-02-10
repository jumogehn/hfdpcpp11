//===--- SonyControl.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef _HFDP_CPP_BRIDGE_SONY_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_SONY_CONTROL_HPP_

#include "remote_control.hpp"
// string 헤더 필요 없음 (Location 정보는 TV가 가져갔으므로)

namespace headfirst {

	class SonyControl : public RemoteControl {
		unsigned int current_station_;

	public:
		// [DI] 구체적인 TV 대신, 추상적인 TV 포인터를 주입받음
		explicit SonyControl(std::unique_ptr<TV> tv);

		void SetStation(unsigned int channel);
		void NextChannel();
		void PreviousChannel();
	};

}
#endif