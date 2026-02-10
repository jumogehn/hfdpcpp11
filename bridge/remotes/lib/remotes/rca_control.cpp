//===--- RCAControl.cpp - ---------------------------------------*- C++ -*-===//
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
#include "rca_control.hpp"
// [필수] 생성자 인자(unique_ptr<TV>)가 소멸될 때 TV의 크기를 알아야 하므로
// 반드시 구현 파일(.cpp)에는 tv.hpp를 포함해야 합니다.
#include "tv.hpp"  

namespace headfirst {

	RCAControl::RCAControl(std::unique_ptr<TV> tv) :
		RemoteControl(std::move(tv)), // 부모에게 부품 전달
		current_station_(0)
	{
		// implementor_ = ...;  <-- [삭제] 이제 직접 생성하지 않음
	}

	void RCAControl::SetStation(unsigned int channel)
	{
		current_station_ = channel;
		SetChannel(current_station_);
	}

	void RCAControl::NextChannel()
	{
		current_station_++;
		SetChannel(current_station_);
	}

	void RCAControl::PreviousChannel()
	{
		current_station_--;
		SetChannel(current_station_);
	}

}