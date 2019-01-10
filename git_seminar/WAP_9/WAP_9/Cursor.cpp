#include "stdafx.h"
#include "Cursor.h"


Cursor::Cursor()
{
}


Cursor::~Cursor()
{
}


void Cursor:: gotoxy(int x, int y) //커서 위치 옮기기
{
	COORD pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void Cursor:: cursor(int n) // 커서 보이기 & 숨기기 , n =0 커서 숨기기! , n =1 커서 보이기!
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = n;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void Cursor:: SetColor(int color) //커서 색깔을 바꿔주는 함수 , 위의 열거형(enum)값을 매개변수에 넣어준당!
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}



