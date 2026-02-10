//===--- SonyControl.cpp - --------------------------------------*- C++ -*-===//
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


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
#include "sony_control.hpp"
// [필수 추가] unique_ptr이 TV를 해제할 수 있도록 정의를 알아야 함
#include "tv.hpp"
// #include "sony.hpp" <-- [DI 효과] 이 의존성이 제거됨!
// SonyControl은 이제 Sony TV뿐만 아니라 어떤 TV든 제어 가능

namespace headfirst {

	SonyControl::SonyControl(std::unique_ptr<TV> tv) :
		RemoteControl(std::move(tv)), // 부모에게 부품 전달
		current_station_(0)
	{}

	void SonyControl::SetStation(unsigned int channel)
	{
		current_station_ = channel;
		SetChannel(current_station_);
	}

	void SonyControl::NextChannel()
	{
		current_station_++;
		SetChannel(current_station_);
	}

	void SonyControl::PreviousChannel()
	{
		current_station_--;
		SetChannel(current_station_);
	}
}