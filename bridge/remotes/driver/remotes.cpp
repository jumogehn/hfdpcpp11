//===--- Remotes.cpp - ------------------------------------------*- C++ -*-===//
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
#include <iostream>
#include <vector>
#include <memory>

#include "remote_control.hpp"
#include "sony_control.hpp"
#include "rca_control.hpp"
// [DI] 메인 함수는 구체적인 부품들을 알아야 조립 가능
#include "sony.hpp" 
#include "rca.hpp"

int main(int argc, char* argv[]) {

	std::vector< headfirst::RemoteControl* > remotes;

	// 1. 부품(TV) 생성
	std::unique_ptr<headfirst::TV> livingRoomTv =
		std::make_unique<headfirst::Sony>("XBR in living room");

	// 2. 리모컨 생성 및 의존성 주입 (SonyControl에 Sony TV 주입)
	// SonyControl은 이제 껍데기일 뿐, 알맹이는 밖에서 넣어줌
	std::unique_ptr< headfirst::SonyControl > sonyControl(
		new headfirst::SonyControl(std::move(livingRoomTv))
	);

	remotes.push_back(sonyControl.get());


	// 3. 다른 조합 예시 (RCA TV + RCA 리모컨)
	std::unique_ptr<headfirst::TV> kitchenTv =
		std::make_unique<headfirst::RCA>("19 inch in kitchen");

	std::unique_ptr< headfirst::RCAControl > rcaControl(
		new headfirst::RCAControl(std::move(kitchenTv))
	);

	remotes.push_back(rcaControl.get());

	// 실행 로직 (기존과 동일)
	std::cout << "--- Turning ON ---" << std::endl;
	for (headfirst::RemoteControl* element : remotes) {
		element->On();
	}

	std::cout << "\n--- Channel Changes ---" << std::endl;
	sonyControl->NextChannel();
	rcaControl->SetStation(35);

	std::cout << "\n--- Turning OFF ---" << std::endl;
	for (headfirst::RemoteControl* element : remotes) {
		element->Off();
	}

	return 0;
}