#include "print.h"

void print_Person() {
	gotoxy(p1.x, p1.y);
	printf("  ��");
	gotoxy(p1.x, p1.y + 1);
	printf("�ס��");
	gotoxy(p1.x, p1.y + 2);
	printf(" ���");
}
void print_Woman()
{
	gotoxy(p1.x, p1.y);
	printf("  �ܦ�");
	gotoxy(p1.x, p1.y + 1);
	printf("�ס��");
	gotoxy(p1.x, p1.y + 2);
	printf(" ���");
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
	int x = 0, y = 0;     //GUN = 0, LIGHT = 1, KEY = 2�̴�.

						  //Init();
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
	for (int i = 0; i < 23; i++) {
		y++;
		gotoxy(x, y);
		printf("��");

		if (i == 8) {
			gotoxy(30, i);
			printf("<�� Ż ��>");
		}
		if (i == 12) {
			gotoxy(30, i);
			printf("1. ���ӽ���");
		}
		if (i == 13) {
			gotoxy(30, i);
			printf("2. ���ӹ��");
		}
		if (i == 14) {
			gotoxy(30, i);
			printf("3. ��  ŷ");
		}
		if (i == 15) {
			gotoxy(30, i);
			printf("4. ��  ��");
		}

		x += 74;
		gotoxy(x, y);
		printf("��");
		x = 0;
	}

	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
}
void start_message(int x, int y)
{
	gotoxy(x, y);
	printf("...                                                              "); system("pause>null"); gotoxy(x, y);
	printf("......                                                           "); system("pause>null"); gotoxy(x, y);
	printf("������...                                                        "); system("pause>null"); gotoxy(x, y);
	printf("���� ������ ���� ��� ǳ���� ���δ�.                             "); system("pause>null"); gotoxy(x, y);
	printf("�ƾ�...!                                                         "); system("pause>null"); gotoxy(x, y);
	printf("�Ӹ��� �������� ������. ���� ���� ������ ����� ���� �ʴ´�.     "); system("pause>null"); gotoxy(x, y);
	printf("���� ���� �̰����� ������ �� �ϱ�...?                            "); system("pause>null"); gotoxy(x, y);
	printf("�����Ÿ��� �Ӹ��� ���ΰ� �ܿ� ���׾Ƹ� ������ ������.            "); system("pause>null"); gotoxy(x, y);
	printf("��⸦ ���� �԰��� �� ħ�� ������ �����⿡ �̳� �ٽ� ������ȴ�. "); system("pause>null"); gotoxy(x, y);
	printf("�ϴ� ���⼭ ������ �� �� ����. ����� ã�ƺ���.                  "); system("pause>null"); gotoxy(x, y);
}
void print_message_window()
{
	system("cls");
	//��ȭâ ���
	int x = 0;
	int y = 18;
	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("��������");
	printf("��");
	for (int i = 0; i < 6; i++) {
		y++;
		gotoxy(x, y);
		printf("��");

		x += 74;
		gotoxy(x, y);
		printf("��");
		x = 0;
	}

	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
}
void print_item_window()
{
	int x, y;
	system("cls"); x = 0; y = 0; gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
	for (int i = 0; i < 2; i++) {
		y++;
		gotoxy(x, y);
		printf("��");
		if (i == 0) printf(" ȹ�� ������: ");
		x += 74;
		gotoxy(x, y);
		printf("��");
		x = 0;
	}

	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
}
void print_room()
{
	int x = 0;
	int y = 3;
	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
	for (int i = 0; i < 14; i++) {
		y++;
		gotoxy(x, y);
		printf("��");

		if (i == 6) {
			printf("��");
			goto jump;
		}

		if (i > 8 && i < 12) {
			printf("��");
			goto jump;
		}
		printf("��");

	jump:
		x += 72;
		gotoxy(x, y);
		if (i >= 6 && i <= 8)
		{
			printf("�ঢ");
		}
		else
			printf("����");
		x = 0;
	}

	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
}
void print_obj()
{
	int x = 0; int y = 4; gotoxy(4, y);
	printf("�� ��� ��"); printf("�� ��� ��"); printf("  ��   ________   ��"); printf("��        ��");  gotoxy(4, 5);
	printf("��  ħ  ��"); printf("��  ħ  ��"); printf("  ��  ����Ʈ�Ϧ�  ��"); printf("��  ����  ��"); gotoxy(4, 6);
	printf("��  ��  ��"); printf("��  ��  ��"); printf("  ��������������������������������"); printf("��������������������"); gotoxy(4, 7);
	printf("����������������"); printf("����������������"); gotoxy(12, 4);
	gotoxy(12, 14);
	printf("                  ��������������������"); gotoxy(12, 15);
	printf("   ����������������"); printf("     ��  ����  ��"); printf("    ��������������������"); gotoxy(12, 16);
	printf("   ��  TV  ��"); printf("     ��        ��"); printf("    �� �ݡڰ� ��");
}
void print_dialog()
{
	int x = 0;
	int y = 18;
	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
	for (int i = 0; i < 6; i++) {
		y++;
		gotoxy(x, y);
		printf("��");
		if (i == 0) printf("  ���� ������ �ұ�?(Ž��: p)(������: i)                              ");
		x += 74;
		gotoxy(x, y);
		printf("��");
		x = 0;
	}

	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
}
void clr_room()
{
	int x = 0, y = 3;
	gotoxy(x, y);
	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 38; i++) {
			printf("��");
		}
		y++; gotoxy(x, y);
	}
}
void print_IQ_test()
{
	int x = 12, y = 4;
	gotoxy(x, y);
	printf("������������������������������������������������������������������������������������������������"); y++; gotoxy(x, y);
	printf("��                                              ��"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("������     1  2   3    4   5         7���� ��   ��"); y++; gotoxy(x, y);
	printf("������     0  8  89   88  889      ????���� ������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("������������������������������������������������������������������������������������������������"); gotoxy(11, 19);
	
}
void HowtoGame()
{
	system("cls");
	int x = 0, y = 0;
	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
	for (int i = 0; i < 22; i++) {
		y++;
		gotoxy(x, y);
		printf("��");

		x += 74;
		gotoxy(x, y);
		printf("��");

		x = 0;
	}

	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");

	gotoxy(4, 4);
	printf("����� �Ҿ���� �μ�.."); gotoxy(4, 5);
	printf("���� ������ �� �� ���� �濡 ���� �ִ�."); gotoxy(4, 6);
	printf("ó������ �� ������ ��¾�� �ͼ��� �� �̴�."); gotoxy(4, 7);
	printf("��ȿ��� Ż���� ���� �ܼ����� ������ ������ �ִ�."); gotoxy(4, 9);
	printf("w: �����̵�"); gotoxy(4, 10);
	printf("s: �Ʒ��� �̵�"); gotoxy(4, 11);
	printf("a: �������� �̵�"); gotoxy(4, 12);
	printf("d: ���������� �̵�"); gotoxy(4, 13);
	printf("p: ��� ���캸��"); gotoxy(4, 14);
	printf("i: ������ ���"); gotoxy(4, 20);
}
void print_last_room()
{
	int x = 0;
	int y = 0;
	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
	for (int i = 0; i < 17; i++) {
		y++;
		gotoxy(x, y);
		printf("��");

		x += 74;
		gotoxy(x, y);
		printf("��");
		x = 0;
	}

	gotoxy(x, y);
	printf("��");
	for (int i = 0; i < 36; i++)
		printf("����");
	printf("��");
}
void print_last_door_pw()
{
	int x = 12, y = 4;
	gotoxy(x, y);
	printf("������������������������������������������������������������������������������������������������"); y++; gotoxy(x, y);
	printf("��                                              ��"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("������                                ���� ��   ��"); y++; gotoxy(x, y);
	printf("������        When you fall in love   ���� ���� ��"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("��������������������������������������������������"); y++; gotoxy(x, y);
	printf("������������������������������������������������������������������������������������������������"); gotoxy(11, 19);
}