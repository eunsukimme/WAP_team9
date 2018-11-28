#include"bgm.h"

FMOD_SYSTEM *g_System;
FMOD_SOUND *g_Sound[5];
FMOD_CHANNEL *g_Channel[4];

void bgm_Init()
{
FMOD_System_Create(&g_System);
FMOD_System_Init(g_System, 10, FMOD_INIT_NORMAL, NULL);

FMOD_System_CreateSound(g_System, "silenthill.mp3", FMOD_LOOP_NORMAL, 0, &g_Sound[0]);
FMOD_System_CreateSound(g_System, "audiofile.mp3", FMOD_DEFAULT, 0, &g_Sound[1]);
FMOD_System_CreateSound(g_System, "news.mp3", FMOD_DEFAULT, 0, &g_Sound[2]);
FMOD_System_CreateSound(g_System, "Runningman.mp3", FMOD_LOOP_NORMAL, 0, &g_Sound[3]);
FMOD_System_CreateSound(g_System, "bang.mp3", FMOD_DEFAULT, 0, &g_Sound[4]);

FMOD_System_PlaySound(g_System, g_Sound[0], NULL, 0, &g_Channel[0]);
}

void play_tts()
{
FMOD_Channel_Stop(g_Channel[0]);
FMOD_System_PlaySound(g_System, g_Sound[1], NULL, 0, &g_Channel[0]); Sleep(10000);
FMOD_System_PlaySound(g_System, g_Sound[0], NULL, 0, &g_Channel[0]);
}
void play_news()
{
	FMOD_Channel_Stop(g_Channel[0]);
	FMOD_System_PlaySound(g_System, g_Sound[2], NULL, 0, &g_Channel[0]);
}
void play_main_bgm()
{
	FMOD_System_PlaySound(g_System, g_Sound[0], NULL, 0, &g_Channel[0]);
}
void play_run_bgm()
{
	FMOD_Channel_Stop(g_Channel[0]);
	FMOD_System_PlaySound(g_System, g_Sound[3], NULL, 0, &g_Channel[0]);
}
void play_bang()
{
	FMOD_System_PlaySound(g_System, g_Sound[4], NULL, 0, &g_Channel[0]);
}