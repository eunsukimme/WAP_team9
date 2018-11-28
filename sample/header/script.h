#pragma once
#include "utility.h"
#include<stdio.h>

#define ITEMSIZE 6

extern int ITEM_LIST[ITEMSIZE];
extern int ITEM_CHECK[ITEMSIZE];
enum ITEM { GUN, LIGHT, KEY };

void print_s_frame();
void print_s_calendar();
void print_s_safe();
void print_s_safe_open();
void print_s_safe_close();
void print_s_tv();
void print_s_drawer();
void print_s_drawer_f();
void print_s_drawer_s();
void print_s_drawer_t_nokey();
void print_s_drawer_t();
void print_s_bed();
void print_s_bed_gun();
void explain_gun();
void print_s_nothing();
void print_s_bed_nolighit();
void print_s_bed_light();
void explain_key();
void print_s_desk();
void explain_light();
void print_s_desk_light();
void print_s_desk_notebook();
void print_s_notebook_open();
void print_s_notebook_close();
void print_s_f1();
void print_s_f2();
void print_s_f2_2();
void print_s_f3();
void print_s_clothes();
void print_s_clothes_choice();
void print_s_play_music1();
void print_s_play_music2();
void use_item_script();
int print_s_lastdoor();
void print_s_laststory();