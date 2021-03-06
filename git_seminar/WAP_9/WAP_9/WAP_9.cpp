﻿// WAP_9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h> //GettickCount 사용을 위해 <Windows.h> 추가
#include "EntryScene.h" // 게임의 진입점
#define MS_PER_SECOND 75 //0.075 sec

bool EXIT = false; // EXIT = true면 게임종료

int main()
{
	double previous = GetTickCount();  //현재 시간을 받아온다.
	double lag = 0; // 지연시간 초기화
	EntryScene Scene; // EntryScene은 게임의 메인 Scene같은 것. EntryScene 객체를 생성한다.
	Scene.Init(); // Scene의 초기화
	while (!EXIT) // EXIT = true면 게임종료
	{
		double current = GetTickCount(); // 현재 시간을 받아온다.
		double elasped = current - previous; // 앞의 시간과의 간격을 받고
		previous = current; // 이전 시간값에 현재 시간 값을 대입
		lag += elasped; // 앞의 시간과의 간격만큼 지연시간에 더해준다.

		if (lag >= MS_PER_SECOND) // 지연시간이 특정시간(임의로 0.075초로 잡음)을 넘어선다면
		{
			Scene.Update(); // Scene의 Update함수를 호출
			lag -= MS_PER_SECOND; // 지연시간을 0으로 만들기위해 MS_PER_SECOND만큼 빼준다.	
		}
		Scene.Draw(); // Scene에 그림을 그려주는 함수
	}

	Scene.Destroy(); // Scene에 존재하는 메모리들을 전부 지워준다

    return 0;
}

