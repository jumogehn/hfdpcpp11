//===--- RemoteControl.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef _HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_

#include <memory>

namespace headfirst {

	class TV; // [Pimpl 핵심 1] 전방 선언 (Forward Declaration)

	class RemoteControl {
		// 복사 방지
		RemoteControl(const RemoteControl&) = delete;
		void operator=(const RemoteControl&) = delete;

	protected:
		// [Pimpl 핵심 2] 구현 세부 사항을 숨기는 불투명 포인터
		struct Impl;
		std::unique_ptr<Impl> pimpl_;

		// [DI 핵심 1] TV를 내부에서 생성하지 않고 외부에서 받음
		explicit RemoteControl(std::unique_ptr<TV> tv);

		// 자식 클래스가 채널을 변경할 때 사용할 함수
		virtual void SetChannel(unsigned int channel);

	public:
		virtual ~RemoteControl(); // [Pimpl 핵심 3] 소멸자는 반드시 cpp에 정의
		virtual void On();
		virtual void Off();
	};

}
#endif