#pragma once
#include <Windows.h>
class Cursor
{
	enum Color //색상
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

	void gotoxy(int x, int y); //커서 위치 옮기기
	void cursor(int n);// 커서 보이기 & 숨기기 , n =0 커서 숨기기! , n =1 커서 보이기!
	void SetColor(int color);//커서 색깔을 바꿔주는 함수 , 위의 열거형(enum)값을 매개변수에 넣어준당!
public:
	Cursor();
	~Cursor();
};

