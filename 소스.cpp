#include <stdio.h>
#include <conio.h>
#include <fmod.h>

FMOD_SYSTEM *g_System;
FMOD_SOUND *g_Sound[2];
FMOD_CHANNEL *g_Channel[2];
float volume = 0.5f;

void Init()
{
	FMOD_System_Create(&g_System);
	FMOD_System_Init(g_System, 10, FMOD_INIT_NORMAL, NULL);

	FMOD_System_CreateSound(g_System, "marry me.mp3", FMOD_LOOP_NORMAL, 0, &g_Sound[0]);
	FMOD_System_CreateSound(g_System, "effect.wav", FMOD_DEFAULT, 0, &g_Sound[1]);

	FMOD_System_PlaySound(g_System, g_Sound[0],NULL, 0, &g_Channel[0]);
}

void Update(char ch)
{
	FMOD_BOOL IsPaused;

	switch (ch) {
	case 'a': // 효과음
		FMOD_System_PlaySound(g_System,  g_Sound[1],NULL, 0, &g_Channel[1]);
		break;
	case 's': // 배경음 멈춤 or 시작
		FMOD_Channel_GetPaused(g_Channel[0], &IsPaused);
		if (IsPaused == 1)
			//FMOD_Channel_Stop(g_Channel[0]);
			FMOD_Channel_SetPaused(g_Channel[0], --IsPaused);
		else
			//FMOD_System_PlaySound(g_System,  g_Sound[0],NULL, 0, &g_Channel[0]);
			FMOD_Channel_SetPaused(g_Channel[0], ++IsPaused);
		break;
	case 'u': // 배경 볼륨 업
		if (volume < 1.0f)
			volume += 0.1f;
		FMOD_Channel_SetVolume(g_Channel[0], volume);
		break;
	case 'd': // 배경 볼륨 다운
		if (volume > 0.0f)
			volume -= 0.1f;
		FMOD_Channel_SetVolume(g_Channel[0], volume);
		break;
	}
}

void Release()
{
	FMOD_Sound_Release(g_Sound[0]);
	FMOD_Sound_Release(g_Sound[1]);
	FMOD_System_Close(g_System);
	FMOD_System_Release(g_System);
}

int main(void)
{
	char ch = 0;

	Init();

	printf("q: 종료, a:효과음, s:배경음 출력or멈춤, u:볼륨업, d:볼륨다운");

	while (ch != 'q')
	{
		if (_kbhit())
		{
			ch = _getch();
			Update(ch);
		}
		FMOD_System_Update(g_System);
	}

	Release();
	return 0;
}