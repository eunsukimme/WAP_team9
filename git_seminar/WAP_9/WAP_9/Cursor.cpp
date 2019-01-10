#include "stdafx.h"
#include "Cursor.h"


Cursor::Cursor()
{
}


Cursor::~Cursor()
{
}


void Cursor:: gotoxy(int x, int y) //Ŀ�� ��ġ �ű��
{
	COORD pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void Cursor:: cursor(int n) // Ŀ�� ���̱� & ����� , n =0 Ŀ�� �����! , n =1 Ŀ�� ���̱�!
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = n;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void Cursor:: SetColor(int color) //Ŀ�� ������ �ٲ��ִ� �Լ� , ���� ������(enum)���� �Ű������� �־��ش�!
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}



