#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
#include "init.h"
#include "utility.h"
#include "print.h"
#include "play.h"
#include "script.h"
#include "rank.h"
#include "bgm.h"
#include <time.h>

int main()
{
	bgm_Init();
	int num = 0;
	while (num != 4)
	{
		main_print();
		scanf_s("%d", &num);
		if (num == 1) {
			double t1, t2;
			t1 = clock();
			init_display();
			play_game();
			t2 = clock();
			system("cls");
			double playtime = (t2 - t1) / 1000.0;
			input_rank(playtime);
			system("cls");
		}
		else if (num == 2) {
			system("cls");
			HowtoGame();
			char tmp;
			printf("메인으로 돌아가시겠습니까?(Y): ");
			do
			{
				scanf("%c", &tmp);




			} while (tmp != 'y');
		}
		else if (num == 3)
		{
			print_rank();
			char tmp;
			printf("메인으로 돌아가시겠습니까?(Y): ");
			do
			{
				scanf("%c", &tmp);
			} while (tmp != 'y');

		}
		else if (num == 4)
			break;
	}


	return 0;
}
