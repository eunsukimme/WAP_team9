#pragma once
#include <Windows.h>
class Cursor
{
	enum Color //����
	{
		BLACK,
		DARK_BLUE,
		DARK_GREEN,
		DARK_SKY_BLUE,
		DARK_RED,
		DARK_VIOLET,
		DARK_YELLO,
		GRAY,
		DARK_GRAY,
		BLUE,
		GREEN,
		SKY_BLUE,
		RED,
		VIOLET,
		YELLOW,
		WHITE,

	};

	void gotoxy(int x, int y); //Ŀ�� ��ġ �ű��
	void cursor(int n);// Ŀ�� ���̱� & ����� , n =0 Ŀ�� �����! , n =1 Ŀ�� ���̱�!
	void SetColor(int color);//Ŀ�� ������ �ٲ��ִ� �Լ� , ���� ������(enum)���� �Ű������� �־��ش�!
public:
	Cursor();
	~Cursor();
};

