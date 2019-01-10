// WAP_9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include "EntryScene.h"
#define MS_PER_SECOND 75 //0.075 sec

bool EXIT = false; // EXIT = true면 게임종료

int main()
{
	double previous = GetTickCount(); 
	double lag = 0;
	EntryScene Scene;
	Scene.Init();
	while (!EXIT)
	{
		double current = GetTickCount();
		double elasped = current - previous;
		previous = current;
		lag += elasped;

		if (lag >= MS_PER_SECOND)
		{
			Scene.Update();
			lag -= MS_PER_SECOND;	
		}
		Scene.Draw();
	}

	Scene.Destroy();

    return 0;
}

