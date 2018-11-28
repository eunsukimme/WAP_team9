#pragma once
#include<Windows.h>

#include<fmod.h>

void bgm_Init();
void play_tts();
void play_news();
void play_main_bgm();
void play_run_bgm();
void play_bang();

extern FMOD_SYSTEM *g_System;
extern FMOD_SOUND *g_Sound[5];
extern FMOD_CHANNEL *g_Channel[4];