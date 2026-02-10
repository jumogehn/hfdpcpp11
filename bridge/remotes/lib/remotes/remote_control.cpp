//===--- RemoteControl.cpp - ------------------------------------*- C++ -*-===//
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
#include "remote_control.hpp"
#include "tv.hpp" // [Pimpl] 의존성이 여기로 이동함
#include <cassert>

namespace headfirst {

	// [Pimpl 구현] 실제 데이터를 담는 구조체 정의
	struct RemoteControl::Impl {
		std::unique_ptr<TV> tv_implementor;

		Impl(std::unique_ptr<TV> tv) : tv_implementor(std::move(tv)) {}
	};

	// 생성자: 주입받은 TV를 Pimpl 내부로 이동
	RemoteControl::RemoteControl(std::unique_ptr<TV> tv)
		: pimpl_(std::make_unique<Impl>(std::move(tv)))
	{}

	// 소멸자: Pimpl 패턴에서 반드시 cpp 파일에 정의해야 함 (Impl의 크기를 알아야 하므로)
	RemoteControl::~RemoteControl() = default;

	void RemoteControl::SetChannel(unsigned int channel)
	{
		assert(pimpl_->tv_implementor);
		pimpl_->tv_implementor->TuneChannel(channel);
	}

	void RemoteControl::On()
	{
		assert(pimpl_->tv_implementor);
		pimpl_->tv_implementor->On();
	}

	void RemoteControl::Off()
	{
		assert(pimpl_->tv_implementor);
		pimpl_->tv_implementor->Off();
	}

}