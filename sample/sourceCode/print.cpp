#include "print.h"

void print_Person() {
	gotoxy(p1.x, p1.y);
	printf("  ●");
	gotoxy(p1.x, p1.y + 1);
	printf("↙□↘");
	gotoxy(p1.x, p1.y + 2);
	printf(" ↓↓");
}
void print_Woman()
{
	gotoxy(p1.x, p1.y);
	printf("  ●┐");
	gotoxy(p1.x, p1.y + 1);
	printf("↙△↘");
	gotoxy(p1.x, p1.y + 2);
	printf(" ↓↓");
}
void clear_Person() {
	gotoxy(p1.x, p1.y);
	printf("      ");
	gotoxy(p1.x, p1.y + 1);
	printf("     ");
	gotoxy(p1.x, p1.y + 2);
	printf("     ");
}
void main_print()
{
	hideCursor(0);
	system("mode con: cols=76 lines=25");
	int x = 0, y = 0;     //GUN = 0, LIGHT = 1, KEY = 2이다.

						  //Init();
	printf("┌");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┐");
	for (int i = 0; i < 23; i++) {
		y++;
		gotoxy(x, y);
		printf("│");

		if (i == 8) {
			gotoxy(30, i);
			printf("<방 탈 출>");
		}
		if (i == 12) {
			gotoxy(30, i);
			printf("1. 게임시작");
		}
		if (i == 13) {
			gotoxy(30, i);
			printf("2. 게임방법");
		}
		if (i == 14) {
			gotoxy(30, i);
			printf("3. 랭  킹");
		}
		if (i == 15) {
			gotoxy(30, i);
			printf("4. 종  료");
		}

		x += 74;
		gotoxy(x, y);
		printf("│");
		x = 0;
	}

	gotoxy(x, y);
	printf("└");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┘");
}
void start_message(int x, int y)
{
	gotoxy(x, y);
	printf("...                                                              "); system("pause>null"); gotoxy(x, y);
	printf("......                                                           "); system("pause>null"); gotoxy(x, y);
	printf("으으음...                                                        "); system("pause>null"); gotoxy(x, y);
	printf("눈을 떠보니 낯선 방안 풍경이 보인다.                             "); system("pause>null"); gotoxy(x, y);
	printf("아악...!                                                         "); system("pause>null"); gotoxy(x, y);
	printf("머리가 깨질듯이 아프다. 어제 일이 도무지 기억이 나질 않는다.     "); system("pause>null"); gotoxy(x, y);
	printf("누가 나를 이곳으로 데려온 것 일까...?                            "); system("pause>null"); gotoxy(x, y);
	printf("지끈거리는 머리를 감싸고 겨우 몸뚱아릴 일으켜 세웠다.            "); system("pause>null"); gotoxy(x, y);
	printf("허기를 느껴 입가에 돈 침이 음산한 분위기에 이내 바싹 말라버렸다. "); system("pause>null"); gotoxy(x, y);
	printf("일단 여기서 나가야 할 것 같다. 방법을 찾아보자.                  "); system("pause>null"); gotoxy(x, y);
}
void print_message_window()
{
	system("cls");
	//대화창 출력
	int x = 0;
	int y = 18;
	gotoxy(x, y);
	printf("┌");
	for (int i = 0; i < 36; i++)
		printf("────");
	printf("┐");
	for (int i = 0; i < 6; i++) {
		y++;
		gotoxy(x, y);
		printf("│");

		x += 74;
		gotoxy(x, y);
		printf("│");
		x = 0;
	}

	gotoxy(x, y);
	printf("└");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┘");
}
void print_item_window()
{
	int x, y;
	system("cls"); x = 0; y = 0; gotoxy(x, y);
	printf("┌");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┐");
	for (int i = 0; i < 2; i++) {
		y++;
		gotoxy(x, y);
		printf("│");
		if (i == 0) printf(" 획득 아이템: ");
		x += 74;
		gotoxy(x, y);
		printf("│");
		x = 0;
	}

	gotoxy(x, y);
	printf("└");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┘");
}
void print_room()
{
	int x = 0;
	int y = 3;
	gotoxy(x, y);
	printf("┌");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┐");
	for (int i = 0; i < 14; i++) {
		y++;
		gotoxy(x, y);
		printf("│");

		if (i == 6) {
			printf("□");
			goto jump;
		}

		if (i > 8 && i < 12) {
			printf("□");
			goto jump;
		}
		printf("│");

	jump:
		x += 72;
		gotoxy(x, y);
		if (i >= 6 && i <= 8)
		{
			printf("□│");
		}
		else
			printf("││");
		x = 0;
	}

	gotoxy(x, y);
	printf("└");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┘");
}
void print_obj()
{
	int x = 0; int y = 4; gotoxy(4, y);
	printf("│ □□ │"); printf("│ □□ │"); printf("  │   ________   │"); printf("│        │");  gotoxy(4, 5);
	printf("│  침  │"); printf("│  침  │"); printf("  │  │노트북│  │"); printf("│  서랍  │"); gotoxy(4, 6);
	printf("│  대  │"); printf("│  대  │"); printf("  └──────────────┘"); printf("└────────┘"); gotoxy(4, 7);
	printf("└──────┘"); printf("└──────┘"); gotoxy(12, 4);
	gotoxy(12, 14);
	printf("                  ┌────────┐"); gotoxy(12, 15);
	printf("   ┌──────┐"); printf("     │  옷장  │"); printf("    ┌────────┐"); gotoxy(12, 16);
	printf("   │  TV  │"); printf("     │        │"); printf("    │ 금★고 │");
}
void print_dialog()
{
	int x = 0;
	int y = 18;
	gotoxy(x, y);
	printf("┌");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┐");
	for (int i = 0; i < 6; i++) {
		y++;
		gotoxy(x, y);
		printf("│");
		if (i == 0) printf("  나는 무엇을 할까?(탐색: p)(아이템: i)                              ");
		x += 74;
		gotoxy(x, y);
		printf("│");
		x = 0;
	}

	gotoxy(x, y);
	printf("└");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┘");
}
void clr_room()
{
	int x = 0, y = 3;
	gotoxy(x, y);
	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 38; i++) {
			printf("　");
		}
		y++; gotoxy(x, y);
	}
}
void print_IQ_test()
{
	int x = 12, y = 4;
	gotoxy(x, y);
	printf("┌──────────────────────────────────────────────┐"); y++; gotoxy(x, y);
	printf("│                                              │"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　     1  2   3    4   5         7　　 　   │"); y++; gotoxy(x, y);
	printf("│　　     0  8  89   88  889      ????　　 　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("└──────────────────────────────────────────────┘"); gotoxy(11, 19);
	
}
void HowtoGame()
{
	system("cls");
	int x = 0, y = 0;
	gotoxy(x, y);
	printf("┌");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┐");
	for (int i = 0; i < 22; i++) {
		y++;
		gotoxy(x, y);
		printf("│");

		x += 74;
		gotoxy(x, y);
		printf("│");

		x = 0;
	}

	gotoxy(x, y);
	printf("└");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┘");

	gotoxy(4, 4);
	printf("기억을 잃어버린 두수.."); gotoxy(4, 5);
	printf("눈을 떠보니 알 수 없는 방에 갇혀 있다."); gotoxy(4, 6);
	printf("처음보는 곳 이지만 어쩐지 익숙한 곳 이다."); gotoxy(4, 7);
	printf("방안에는 탈출을 위한 단서들이 곳곳에 숨겨져 있다."); gotoxy(4, 9);
	printf("w: 위로이동"); gotoxy(4, 10);
	printf("s: 아래로 이동"); gotoxy(4, 11);
	printf("a: 왼쪽으로 이동"); gotoxy(4, 12);
	printf("d: 오른쪽으로 이동"); gotoxy(4, 13);
	printf("p: 대상 살펴보기"); gotoxy(4, 14);
	printf("i: 아이탬 사용"); gotoxy(4, 20);
}
void print_last_room()
{
	int x = 0;
	int y = 0;
	gotoxy(x, y);
	printf("┌");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┐");
	for (int i = 0; i < 17; i++) {
		y++;
		gotoxy(x, y);
		printf("│");

		x += 74;
		gotoxy(x, y);
		printf("│");
		x = 0;
	}

	gotoxy(x, y);
	printf("└");
	for (int i = 0; i < 36; i++)
		printf("──");
	printf("┘");
}
void print_last_door_pw()
{
	int x = 12, y = 4;
	gotoxy(x, y);
	printf("┌──────────────────────────────────────────────┐"); y++; gotoxy(x, y);
	printf("│                                              │"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　                                　　 　   │"); y++; gotoxy(x, y);
	printf("│　　        When you fall in love   　　 　　 │"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　│"); y++; gotoxy(x, y);
	printf("└──────────────────────────────────────────────┘"); gotoxy(11, 19);
}