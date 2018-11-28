#include "play.h"
#include "bgm.h"
#include"rank.h"
void init_display()
{
	print_message_window();
	start_message(4, 19);
	print_item_window();
	print_room();
	print_obj();
	print_dialog();
	p1.x = 15; p1.y = 10;
	print_Person();
	
}
int play_game()
{
	int dress = 0;
	int notebookPW, a, x, y;
	enum ITEM { LIGHT, KEY , MP3, SCRIPT, GUN};
	while (1) {

		if (_kbhit()) {
			if (a = _getch()) {
				//gotoxy(65, 2);  printf("x: %3d", p1.x); gotoxy(65, 3); printf("y: %3d", p1.y);
				switch (a) {
				case 'w':
					if (p1.y > 8 || (p1.y > 7 && p1.x > 23 && p1.x < 56) || (p1.x > 55 && p1.y > 4)) {
						clear_Person();
						move(p1.x, p1.y - 1);
					}
					break;
				case 's':
					if (p1.y < 11 || (p1.x < 10 && p1.y < 14) || (p1.x < 26 && p1.y == 11) || (p1.x > 41 && p1.y == 11) || (p1.x > 57 && p1.y < 14)) {
						clear_Person();
						move(p1.x, p1.y + 1);
					}
					break;
				case 'a':
					if ((p1.x > 56 && p1.y < 7) || (p1.y > 6 && p1.x > 24 && p1.y < 12) || (p1.x > 4 && p1.y > 7 && p1.y < 12) || (p1.x > 58 && p1.y < 15) || (p1.x > 42 && p1.y == 12) || (p1.x < 26 && p1.x > 4 && p1.y == 12) || (p1.x < 10 && p1.x > 4 && p1.y > 12)) {
						clear_Person();
						move(p1.x - 1, p1.y);
					}
					break;
				case 'd':
					if ((p1.x < 9 && p1.y > 12) || (p1.x < 25 && p1.y == 12) || (p1.x < 66 && p1.y < 12) || (p1.x < 66 && p1.x > 34 && p1.y > 11)) {
						clear_Person();
						move(p1.x + 1, p1.y);
					}
					break;
				case 'i':
					if (ITEM_LIST[MP3] == 1 || ITEM_LIST[SCRIPT] == 1 || ITEM_LIST[LIGHT] == 1 || ITEM_LIST[KEY] == 1 || ITEM_LIST[GUN] == 1) {
						gotoxy(4, 19);
						printf("살펴 볼 아이템(뒤로:0) :                                          ");
						if (ITEM_LIST[LIGHT] == 1) {
							gotoxy(4, 20); printf("1. 손전등");
						}
						if (ITEM_LIST[KEY] == 1) {
							gotoxy(15, 20); printf("2. 열쇠");
						}
						if (ITEM_LIST[MP3] == 1) {
							gotoxy(24, 20); printf("3. MP3");
						}
						if (ITEM_LIST[SCRIPT] == 1) {
							gotoxy(32, 20); printf("4. 낡은 쪽지");
						}
						if (ITEM_LIST[GUN] == 1) {
							gotoxy(46, 20); printf("5. 권총");
						}
						int sel; gotoxy(29, 19);
						scanf("%d", &sel);
						switch (sel) {
						case 1:
							explain_light();
							break;
						case 2:
							explain_key();
							break;
						case 3:
							//mp3사용
							print_s_play_music1();
							play_tts();
							print_s_play_music2();
							break;
						case 4:
							//낡은 쪽지 사용
							gotoxy(4, 19);
							use_item_script();
							break;
						case 5:
							explain_gun();
							break;
						case 0:
							gotoxy(4, 20); printf("                                                            "); gotoxy(4, 19);
							break;
						default:
							break;
						}
						printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
					}
					break;
				case 'p':
					//액자
					if (p1.x == 4 && (p1.y > 8 && p1.y < 11)) {
						print_s_frame();
					}
					//달력
					if ((p1.x == 4) && (p1.y > 11 && p1.y < 15)) {
						print_s_calendar();
					}
					//침대
					if (p1.x > 3 && p1.x < 20 && p1.y == 8) {
						print_s_bed();
						int bed = NULL;
						scanf_s("%d", &bed);
						switch (bed) {
						case 1:
							if (ITEM_LIST[GUN] != 1) {
								print_s_bed_gun();
							}
							else if(ITEM_LIST[GUN]==1)
								print_s_nothing();
							break;
						case 2:
							if (ITEM_LIST[LIGHT] == 0) {
								print_s_bed_nolighit();
							}
							else if (ITEM_LIST[LIGHT] == 1 && ITEM_CHECK[LIGHT] == 0) {
								print_s_bed_light();
							}
							else if (ITEM_CHECK[LIGHT] == 1) {
								print_s_nothing();
							}
							break;
						default: gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
							break;
						}
						printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
					}
					//책상 && 노트북
					if (p1.x > 26 && p1.x < 38 && p1.y == 7) {
						print_s_desk();
						int desk = NULL;
						scanf_s("%d", &desk);
						switch (desk) {
						case 1:
							if (ITEM_LIST[LIGHT] == 0) {
								ITEM_LIST[LIGHT] = 1;
								print_s_desk_light();
							}
							else {
								print_s_nothing();
							}
							break;
						case 2:
							print_s_desk_notebook();
							print_IQ_test();
							scanf_s("%d", &notebookPW);
							if (notebookPW == 8889) {
								clr_room();
								print_room();
								print_obj();
								print_Person();
								print_s_notebook_open();
							SELECT:
								gotoxy(4, 19);
								printf("1. <두수>       2. <진하>      3. <작업>     4. 다른 곳을 둘러본다 "); gotoxy(4, 20);
								int folder = NULL;
								scanf_s("%d", &folder);
								switch (folder) {
								case 1:
									print_s_f1();
									goto SELECT;
								case 2:
									print_s_f2();
									int next;
									scanf_s("%d", &next);
									switch (next) {
									case 1:
										print_s_f2_2();
									case 2:
										gotoxy(4, 20); printf("                                                  "); gotoxy(4, 19);
									default:
										gotoxy(4, 20); printf("                                                  "); gotoxy(4, 19);
										break;
									}
									goto SELECT;

								case 3:
									print_s_f3();
									goto SELECT;
								case 4:
									gotoxy(4, 20); printf("                                                         "); gotoxy(4, 19);
									break;
								}

							}
							else {
								clr_room();
								print_room();
								print_obj();
								print_Person();
								print_s_notebook_close();
							}
							break;
						default: gotoxy(4, 20);
							printf("                                                                "); gotoxy(4, 19);
							break;
						}
						printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
					}
					//옷장
					if (p1.y == 11 && (p1.x > 29 && p1.x < 37)) {
						print_s_clothes();
						dress++;
						if (dress > 1 && ITEM_LIST[MP3] != 1) {
							print_s_clothes_choice();
						}
						printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
					}
					//서랍
					if (p1.y == 7 && (p1.x > 43 && p1.x < 51)) {
						print_s_drawer();
						int desk = NULL; scanf_s("%d", &desk);
						gotoxy(4, 20); printf("                                                  "); gotoxy(4, 19);
						switch (desk) {
						case 1:
							print_s_drawer_f();
							break;
						case 2:
							print_s_drawer_s();
							break;
						case 3:
							if (ITEM_LIST[SCRIPT] != 1) {
								if (ITEM_LIST[KEY] == 0)
									print_s_drawer_t_nokey();
								else if (ITEM_LIST[KEY] == 1)
									print_s_drawer_t();
								break;
							}
							else if (ITEM_LIST[SCRIPT] == 1) {
								print_s_nothing();
							}

						case 4:
							gotoxy(4, 20); printf("                                                  "); gotoxy(4, 19);
							break;
						default:
							gotoxy(4, 20); printf("                                                  "); gotoxy(4, 19);
							break;
						}
						printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);

					}
					//TV
					if (p1.y == 12 && (p1.x > 14 && p1.x < 20)) {
						print_s_tv();
					}
					//금고
					if (p1.y == 12 && (p1.x > 45 && p1.x < 53)) {
						print_s_safe();
						char safeboxPW[10] = { "KDSLJH" };
						char safeboxPW_2[10] = { "kdsljh" };
						char PW[10];
						gets_s(PW);
						if (!strcmp(safeboxPW, PW) || !strcmp(safeboxPW_2, PW)) {
							print_s_safe_open();
						}
						else {
							print_s_safe_close();
						}
						printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
					}
					//최종 탈출구
					if (p1.x == 66 && (p1.y >= 9 || p1.y <= 11)) {
						print_last_door_pw();
						gotoxy(4, 19);
						int i = print_s_lastdoor();
						if (i == 0) {
							system("cls");
							print_message_window();
							print_last_room();
							play_run_bgm();
							print_s_laststory();
							return 0;
						}						
						gotoxy(4, 19); printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
					}
				}
				
				print_Person();
			}

		}
	}
}