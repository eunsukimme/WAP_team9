#pragma once

#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include<string.h>

typedef struct ranking {
	char *name;
	double playtime;
}Rank;

extern int R_count;
void input_rank(double ptime);
void print_rank();