#include"script.h"
#include"bgm.h"
#include"play.h"
void print_s_frame()
{
	gotoxy(4, 19);
	printf("���ڰ� �ɷ��ִ�.                                                 "); system("pause>null"); gotoxy(4, 19);
	printf("� ���ڿ� ���� ģ���ϰ� ���� ������ �ɷ��ִ�.                  "); system("pause>null"); gotoxy(4, 19);
	printf("�ƹ��� ���Ƶ� �� ������ �����ִ� ���ڰ� �� ����� ���� �ʴ´�... "); system("pause>null"); gotoxy(4, 19);
	printf("�׷����� �� ���ڰ� ���ݵ� ������ ������ �ʴ´�.                  "); system("pause>null"); gotoxy(4, 19);
	printf("�� ���ڴ� ����ü �����ϱ�. �Ӹ��� �ٽ� �����ŷȴ�.               "); system("pause>null"); gotoxy(4, 19);
	printf("���� ������ �ұ�?(Ž��: p)(������: i)                              "); gotoxy(4, 19);
}
void print_s_calendar()
{
	gotoxy(4, 19);
	printf("2015�� �޷��� �پ��ִ�.                                         "); system("pause>null"); gotoxy(4, 19);
	printf("5�� 25�Ͽ� ���� �� ���׶�̰� ������ ���� �ְ�, �� �Ʒ���       "); gotoxy(4, 20);
	printf("���� ���׸İ� ������ �ִ�.                                    "); system("pause>null"); gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("< �̼� : ""�ۡ۾� �ϻ�����"" > ...                              "); system("pause>null"); gotoxy(4, 19);
	printf("�޷� �Ʒ����� �ۡ۾��� ������ �ϻ������� ���� ������ ������ �ִ�"); system("pause>null"); gotoxy(4, 19);
	printf("-23�ÿ� �λ��׿��� �ۡ۾����� ������ �ϻ� �� �ڻ�� �����Ű��- "); system("pause>null"); gotoxy(4, 19);
	printf("...                                                             "); system("pause>null"); gotoxy(4, 19);
	printf("�޷¿� �� �̷��� ������ ������...                               "); system("pause>null"); gotoxy(4, 19);
	printf("�Ӹ����� �����ϴ�. ���� ���� �ѷ�����.                          "); system("pause>null"); gotoxy(4, 19);
	printf("���� ������ �ұ�?(Ž��: p)(������: i)                              "); gotoxy(4, 19);
}
void print_s_safe()
{
	gotoxy(4, 19);
	printf("�����ġ�� �޷��ִ� �ݰ��̴�.                                    "); system("pause>null"); gotoxy(4, 19);
	printf("���� ���ĺ� 6���ڸ� ���� ���ߴ� ��ġ�� �� �ϴ�.                  "); system("pause>null"); gotoxy(4, 19);
	printf("��ȣ : ______                                                    "); gotoxy(11, 19);
}
void print_s_safe_open()
{
	gotoxy(4, 19);
	printf("�ݰ� ���ȴ� !                                              "); system("pause>null"); gotoxy(4, 19);
	printf("�ݰ� �ȿ��� ����ġ�� �����ߴ�.                               "); system("pause>null"); gotoxy(4, 19);
	printf("�� �� ������ ��ü ���ϴ� ����̾�..?                         "); system("pause>null"); gotoxy(4, 19);
	printf("����ġ ���̿��� ������ �ϳ� ���δ�.                          "); system("pause>null"); gotoxy(4, 19);
	printf("�� �� �־�̴µ� �����̳� �� �غ���?                       "); system("pause>null"); gotoxy(4, 19);
	printf("�ŷ�����  �ŷ�����   ã���űݾ�    �ñ�űݾ�    �ܾ�        "); gotoxy(4, 20);
	printf("20150430    ��                  73,000,000   2,436,232,197 "); gotoxy(4, 21);
	printf("20150528 �ٸ������ܰ� 2,400,000                2,433,832,197 "); gotoxy(4, 22);
	printf("20150607 �⸰�����ܰ� 1,700,000                2,432,132,197 "); gotoxy(4, 23);
	printf("20160918  �Ҵ��к���  3,300,000                2,428,832,197 ");  system("pause>null"); gotoxy(4, 20);
	printf("                                                             "); gotoxy(4, 21);
	printf("                                                             "); gotoxy(4, 22);
	printf("                                                             "); gotoxy(4, 23);
	printf("                                                             "); gotoxy(4, 19);
	printf("�� �����ܰ��� �̷��� ���� �ٳ��?                            "); system("pause>null"); gotoxy(4, 19);
	printf("2015�� 5���� ��� ũ�� ��ģ�ǰ�?                             "); system("pause>null"); gotoxy(4, 19);
	printf("<��>�� �� ����? ȸ�� �̸��� �ƴ� �� ����...                "); system("pause>null"); gotoxy(4, 19);
	printf("<��> ���⼭ �ǰ� ū �� �޾ҳ�. ��¥ ���ϴ� ����̾�?       "); system("pause>null"); gotoxy(4, 19);
}
void print_s_safe_close()
{
	gotoxy(4, 19);
	printf("������ �ʴ´�. ��ȣ�� �ٽ� �����غ���.                       "); system("pause>null"); gotoxy(4, 19);
}
void print_s_tv() {
	gotoxy(4, 19);
	printf("������ TV�� �ִ�.                                             "); system("pause>null"); gotoxy(4, 19);
	printf("TV�� ������ �Ѻ��Ҵ�.                                          "); system("pause>null"); gotoxy(4, 19);
	printf("������ �귯���´�.                                            "); system("pause>null"); gotoxy(4, 19);
	play_news();
	printf("���� ��, �λ�� ���� �뿬�� �� �Ѻ��ǿ���"); Sleep(3000); gotoxy(4, 20);
	printf("������ ���� ���� �� ���� ��ġ�Ǵ� ����� �־����ϴ�."); Sleep(4000); gotoxy(4, 21);
	printf("�����ڴ� �������� �ҸӴ��� ���� ����ִٰ� ��ġ���� ����"); Sleep(5000); gotoxy(4, 22);
	printf("���εǾ����ϴ�. ������ �����ڷ� �̿� ���� ���� �Ӹ𾾸� �����ϰ�"); Sleep(6000); gotoxy(4, 23);
	printf("������ ������� �������� �ִٰ� ���մϴ�. PBS �̱��ڿ����ϴ�.\""); Sleep(5000); system("pause>null"); gotoxy(4, 20);
	play_main_bgm();
	printf("                                                                 ");  gotoxy(4, 21);
	printf("                                                                 "); gotoxy(4, 22);
	printf("                                                                 "); gotoxy(4, 23);
	printf("                                                                 "); gotoxy(4, 19);
	printf("���� ��ġ�� ����� �� ����.                                      "); system("pause>null"); gotoxy(4, 19);
	printf("�׷�, �ҸӴ��� ��Ź�� ���帮�ٰ� ������ �Ҿ�����.              "); system("pause>null"); gotoxy(4, 19);
	printf("����, �� �ֺ��� ���� �Ӿ��� ���ڰ� �־�����...                   "); system("pause>null"); gotoxy(4, 19);
	printf("���� ������ �ұ�?(Ž��: p)(������: i)                              "); gotoxy(4, 19);
}
void print_s_drawer()
{
	gotoxy(4, 19);
	printf("3ĭ ¥�� �����̴�.                                              "); system("pause>null"); gotoxy(4, 19);
	printf("�� �� ������ �����?                                          "); system("pause>null"); gotoxy(4, 19);
	printf("1. ù ��° ����   2. �� ��° ����   3. �� ��° ����  4. �׸��д�"); gotoxy(4, 20);
}
void print_s_drawer_f()
{
	printf("ù ��° ������ ������.                                          "); system("pause>null"); gotoxy(4, 19);
	printf("������ ����� ������ ���ǵ��� ���� ���´�.                  "); system("pause>null"); gotoxy(4, 19);
	printf("���� ǥ�� ������ �پ��ϴ�. ���� ������ ���ǵ��̴�.              "); system("pause>null"); gotoxy(4, 19);
	printf("���ǵ��� �ڼ������� �̸��� �ٸ��� �Ȱ��� �󱼻����� �پ��ִ�.   "); system("pause>null"); gotoxy(4, 19);
	printf("���ǿ� �ٿ��� ������ ���ΰ��� ����Ե� �ٸ� ������ �ƴ� ����... "); system("pause>null"); gotoxy(4, 19);
	printf("����...? ���� �̷��� ���� ������ �����...?                     "); system("pause>null"); gotoxy(4, 19);
}
void print_s_drawer_s()
{
	printf("�� ��° ������ ������.                                          ");  system("pause>null"); gotoxy(4, 19);
	printf("�� �޴����� ���׷��� �ִ�.                                      "); system("pause>null"); gotoxy(4, 19);
	printf("�⺻ ���ȭ�鿡 ����� �������� �� �� ��Ÿ���̴�.               "); system("pause>null"); gotoxy(4, 19);
	printf("�ڵ��� ����� ����� ������...                                "); system("pause>null"); gotoxy(4, 19);
	printf("��...!                                                          "); system("pause>null"); gotoxy(4, 19);
	printf("��� ������� Ȩ ��ư�� �հ����� �÷ȴ��� ����� Ǯ�ȴ� !       "); system("pause>null"); gotoxy(4, 19);
	printf("����... �̰� �� ���̾� ?                                        "); system("pause>null"); gotoxy(4, 19);
	printf("�� ���� �Ҹ��� ���´�.                                          "); system("pause>null"); gotoxy(4, 19);
	printf("�ϴ� ���� ��¥�� 10�� 17���̴�.                                  "); system("pause>null"); gotoxy(4, 19);
	printf("���ȭ�鿡�� ���� ������ �־���.                              "); system("pause>null"); gotoxy(4, 19);
	printf("<3�ֳ� �� D-5>                                                  "); system("pause>null"); gotoxy(4, 19);
	printf("���� ��� ����ģ���� �־��� �� �ϴ�.                            "); system("pause>null"); gotoxy(4, 19);
	printf("�ڵ����� ����ó�� ��������, ���� ���� ���ã��� ����� �־���. "); system("pause>null"); gotoxy(4, 19);
	printf("�� ������                                                       "); gotoxy(4, 20);
	printf("   �̸���   : LJH@Hmail.com                                     "); gotoxy(4, 21);
	printf("   ��ȭ��ȣ : 010-XXXX-XXXX                                     "); gotoxy(4, 22);
	printf("   ����     : 3�� XX��                                          "); system("pause>null"); gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 21);
	printf("                                                                "); gotoxy(4, 22);
	printf("                                                                "); gotoxy(4, 19);
	printf("���� �����ϴ� ����̿���...                                     "); system("pause>null"); gotoxy(4, 19);
	printf("���� ����� �ϳ��� ���ƿ��� ����̴�.                           "); system("pause>null"); gotoxy(4, 19);
}
void print_s_drawer_t_nokey()
{
	gotoxy(4, 20); printf("                                                 "); gotoxy(4, 19);
	printf("������ �ʴ´�...                                                "); system("pause>null"); gotoxy(4, 19);
}
void print_s_drawer_t()
{
	gotoxy(4, 20); printf("                                                 "); gotoxy(4, 19);
	printf("�� ������ �ʴ´�...                                               "); system("pause>null"); gotoxy(4, 19);
	printf("���踦 �̿��Ͽ� �� ��° ������ ����Ҵ�.                        "); system("pause>null"); gotoxy(4, 19);
	printf("�������� ���� ������ ȹ���ߴ�.                                    "); system("pause>null"); gotoxy(4, 19);
	ITEM_LIST[3] = 1; gotoxy(32, 1); printf("���� ����"); gotoxy(4, 19);
}
void use_item_script()
{
	gotoxy(4, 20); printf("                                                                     "); gotoxy(4, 19);
	printf("������ �� ���� ������ �ִ�.. �о���� ����.                     "); system("pause>null"); gotoxy(4, 19);
	printf("<2015�� 5�� 25��>                                                 "); system("pause>null"); gotoxy(4, 19);
	printf("���� ���� �Ӹ��ӿ��� ������ �� ���� �ʴ´�.                       "); gotoxy(4, 20);
	printf("���� ������. �ηƴ�. �ƹ��͵� ���� �� �� ����.                    ");  gotoxy(4, 21);
	printf("������ �ʹ� ����������. �� ���� �׷������� �ҷ����ΰ���?          ");  gotoxy(4, 22);
	printf("�ƹ��� �����ص� ���ذ� ���� �ʴ´�.                               ");  system("pause>null"); gotoxy(4, 19);
	printf("���� ������ �������ߴ�. �ƴ�, ���� �׾���.                        "); gotoxy(4, 20);
	printf("��Ÿ���ϴ� ���� �ֺ��� ������ ������ ���� ���ߴٸ� ��� �������"); gotoxy(4, 21);
	printf("������ ������ �ڲ� �Ӹ����� �ɵ��Ƽ� �����.                      "); gotoxy(4, 22);
	printf("ħ������... �켱 ���� �Ͼ �ϵ��� ���� �� ���߰ڴ�.             "); system("pause>null"); gotoxy(4, 19);
	printf("23��, ���� ������ ���� �˷��� ��ҷ� �������� �ð��� ������ ǥ����"); gotoxy(4, 20);
	printf("��ó�� ��Ÿ���� �ʾҴ�.                                           "); gotoxy(4, 21);
	printf("�ð��� �󸶳� �귶����. �ڿ��� �α�ô�� ������ ���ƺ����� ����    "); gotoxy(4, 22);
	printf("�ǹ��� �аŸ��鿡�� �Ӹ��� ���ݴ��ߴ�.                            "); system("pause>null"); gotoxy(4, 22);
	printf("                                                                  "); gotoxy(4, 19);
	printf("������ ������ �ָ� ������ ���� �ʾҴ�. �󸶳� �¾Ҵ��� ��ﵵ ��  "); gotoxy(4, 20);
	printf("���� �ʴ´�.                                                      "); gotoxy(4, 21);
	printf("������ �´ٰ�, �� ���� ���°� �Ѱ��� �־���.                    "); system("pause>null"); gotoxy(4, 19);
	printf("<�� ��> ��ũ.                                                     "); gotoxy(4, 20);
	printf("�и��� <�� ��> ��ũ�� �ô�. �׵��� ���� �Բ� ���ϴ� ����� �̾���."); gotoxy(4, 21);
	printf("�� ���� ������ �� �ϱ�? ���� ǥ������ ������ �� �ϱ�?             "); gotoxy(4, 22);
	printf("�ƴϴ�. �׷� �� ����. ���� �׵�� ���� ��ũ�� ���� �־�����...    "); system("pause>null"); gotoxy(4, 19);
	printf("�׷��ٸ�, ������ �ؼ��� �Ѱ��� ���̴�.                            "); gotoxy(4, 20);
	printf("<�� ��>�� ���� ���̷��� �ߴ�.                                     "); gotoxy(4, 21);
	printf("...�׷����� ������ �ɸ��°� �Ѱ��� �ִ�.                          "); gotoxy(4, 22);
	printf("�μ������� �� ���� �̷� ��ҷ� �ҷ��� �� �ϱ�?                    "); system("pause>null"); gotoxy(4, 19);
	printf("�����Ҽ��� ������ �ڲ� �帥��. <�� ��>������, �������Ե� �������� "); gotoxy(4, 20);
	printf("������ �鶧���� ������ ��ĥ���� ������.                           "); gotoxy(4, 21);
	printf("������ ������ ã�Ƽ� ���� ���� �� �����ʹ�.                   "); gotoxy(4, 22);
	printf("������ �ڲ� �������. ������ ��ó�� �ῡ �� �� ���� �� ����...    "); system("pause>null"); gotoxy(4, 20);
	printf("                                                                  "); gotoxy(4, 21);
	printf("                                                                  "); gotoxy(4, 22);
	printf("                                                                  "); gotoxy(4, 19);
}
void print_s_bed()
{
	gotoxy(4, 19);
	printf("ħ���.                                                         "); system("pause>null"); gotoxy(4, 19);
	printf("���̽� ħ��� �׷��� ǫ���� ���δ�.                             "); system("pause>null"); gotoxy(4, 19);
	printf("1. ������ ���ɴ�    2. ħ�� ���� ���ɴ�                         "); gotoxy(4, 20);
}
void print_s_bed_gun()
{
	gotoxy(4, 20); printf("                                                                "); gotoxy(4, 19);
	ITEM_LIST[4] = 1; gotoxy(42, 1); printf("����"); gotoxy(4, 19);
	printf("���� �ؿ��� '����'�� �߰��ߴ�.                                  "); system("pause>null"); gotoxy(4, 19);
	printf("���ѿ��� 'KDSLJH' ��� �̴ϼ��� ������ �ִ�.                    "); system("pause>null"); gotoxy(4, 19);
}
void explain_gun()
{
	gotoxy(4, 20);  printf("                                                                "); gotoxy(4, 19);
	printf("�����̴�.                                                       "); system("pause>null"); gotoxy(4, 19);
	printf("���ѿ��� KDSLJH ��� �̴ϼ��� ������ �ִ�.                      "); system("pause>null"); gotoxy(4, 19);
}
void print_s_nothing()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("...Ư���Ѱ� ������ �ʴ´�.                                      "); system("pause>null"); gotoxy(4, 19);
}
void print_s_bed_nolighit()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("ħ�� ���� ������ �� ������ �ʴ´�...                            "); system("pause>null"); gotoxy(4, 19);
}
void print_s_bed_light()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("ħ�� ���� ������ �� ������ �ʴ´�...                            "); system("pause>null"); gotoxy(4, 19);
	printf("�������� ����� ħ�� ���� �������Ҵ�.                           "); system("pause>null"); gotoxy(4, 19);
	ITEM_LIST[1] = 1; gotoxy(23, 1); printf("����"); gotoxy(4, 19); ITEM_CHECK[0] = 1;
	printf("ħ�� �ؿ� ������ �ִ� '����'�� �߰��ߴ�.                        "); system("pause>null"); gotoxy(4, 19);
	printf("�� ����� ��� ���� ���ϱ�...?                                "); system("pause>null"); gotoxy(4, 19);
	printf("���� ���� ���캸��. ���踦 ����� ���� ���� �� ����.            "); system("pause>null"); gotoxy(4, 19);
}
void explain_key()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("�� ���� ���̴� �����̴�.                                        "); system("pause>null"); gotoxy(4, 19);
	printf("��� ��� �ִ� ���� �� �� ���� �� ����.                       "); system("pause>null"); gotoxy(4, 19);

}
void print_s_desk()
{
	gotoxy(4, 19);
	printf("������ ������� å���̴�.                                       "); system("pause>null"); gotoxy(4, 19);
	printf("1. å�� ���� ���ɴ�      2. ��Ʈ���� ���ɴ�                     "); gotoxy(4, 20);
}
void print_s_desk_light()
{
	gotoxy(16, 1);
	printf("������"); gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("'������'�� ȹ���ߴ�.                                            "); system("pause>null"); gotoxy(4, 19);
}
void explain_light()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("�������̴�. ���� ���͸��� ���� �ִ� �� ����.                    "); system("pause>null"); gotoxy(4, 19);
	printf("��ο� ���� ���� �� �ְڱ�...                                   "); system("pause>null"); gotoxy(4, 19);
}
void print_s_desk_notebook()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("���� �ְ��� ��Ʈ�� �������Ͱ� ������ �ִ�.                    "); system("pause>null"); gotoxy(4, 19);
	printf("��Ʈ���� ����Ҵ�.                                  "); system("pause>null"); gotoxy(4, 19);
	printf("���̵� ... <�μ�>? "); system("pause>null"); gotoxy(4, 19);
	printf("�� �̸����ݾ�...?                          "); system("pause>null"); gotoxy(4, 19);
	printf("�̻��ϴ�. ��Ʈ���� Ȯ���ؾ� �� �� ����.                "); system("pause>null"); gotoxy(4, 19);
	printf("��Ʈ���� ����ִ�. ��ȣ�� �˾Ƴ���.               "); system("pause>null"); gotoxy(4, 19);
	printf("��ȣ : ____                                        "); 
}
void print_s_notebook_open()
{
	gotoxy(5, 20); printf("                                            "); gotoxy(4, 19);
	printf("��Ʈ���� ����� Ǯ�ȴ� !                    "); system("pause>null"); gotoxy(4, 19);
	printf("�������� � ���ڿ� �����ϰ� ���� �����̴�.                 "); system("pause>null"); gotoxy(4, 19);
	printf("�� �� ȯ�ϰ� �����ִ�.                            "); system("pause>null"); gotoxy(4, 19);
	printf("�ǰ� ���ҳ�����...                              "); system("pause>null"); gotoxy(4, 19);
	printf("����ȭ�鿡 ������, ���ͳ�, �׸��� 3���� ���� �������� �ִ�.    "); system("pause>null"); gotoxy(4, 19);
	printf("<�μ�>, <����>, <�۾�>.... Ȯ���غ��� ���� ���� �� ����.         "); system("pause>null"); gotoxy(4, 19);
}
void print_s_notebook_close()
{
	gotoxy(4, 19);
	printf("��Ʈ���� ����� Ǯ���� �ʾҴ�. �ٽ� �����غ���.       ");
	gotoxy(4, 20);
	printf("                                                      "); system("pause>null"); gotoxy(4, 19);
}
void print_s_f1()
{
	gotoxy(4, 19);
	printf("                                                                   ");
	gotoxy(4, 20);
	printf("                     ");
	gotoxy(4, 19);
	printf("<�μ�> ������ ����ô�.                                       "); system("pause>null"); gotoxy(4, 19);
	printf("�ٸ� �� ���� ���� �ϳ��� ���׷��� �־���.       "); system("pause>null"); gotoxy(4, 19);
	printf("<���ڱ���>                                  "); system("pause>null"); gotoxy(4, 19);
	printf(".....?      "); system("pause>null"); gotoxy(4, 19);
	printf("������ ����ִ�."); system("pause>null"); gotoxy(4, 19);
	printf("���� ���� ������ ������� ���� �ʾƵ� �� �� ����."); system("pause>null"); gotoxy(4, 19);
	printf("...�ǰ� ����ϱ�                                 "); system("pause>null"); gotoxy(4, 19);
}
void print_s_f2()
{
	gotoxy(4, 19);
	printf("                                                                   ");
	gotoxy(4, 20);
	printf("                     ");
	gotoxy(4, 19);
	printf("<����> ������ ����ô�.                                     "); system("pause>null"); gotoxy(4, 19);
	printf("������ �ؽ�Ʈ ������ ����ִ�.                   "); system("pause>null"); gotoxy(4, 19);
	printf("�ؽ�Ʈ ������ ������ �˴� ���ڷ� �Ǿ��ִ�.         "); system("pause>null"); gotoxy(4, 19);
	printf("�����ϴ� ��¥ ������ �ƹ����� �ϱ��� �� �ʹ�.         "); system("pause>null"); gotoxy(4, 19);
	printf("���� �ֱ� �ϱ⸦ ����.                         "); system("pause>null"); gotoxy(4, 19);
	printf("<150524.txt>                          "); system("pause>null"); gotoxy(4, 19);
	printf("���� �۾��� ���� ���̶� ���� ������ �ȴ�. "); gotoxy(4, 20);
	printf("�Ź� �ϴ� �������� �� �� ���� ������ �� ���� ���� ����ΰ� ����."); gotoxy(4, 21);
	printf("�ƴϸ� ���� ���� ����� ������ ����̶� �׷���..."); gotoxy(4, 22);
	printf("������ �ֶ�... �̻ڱ� ���� "); gotoxy(4, 23);
	printf("�μ� ������ ������ ���� �̻ܱ� �ֶ� �̻ܱ�?");  system("pause>null"); gotoxy(4, 21);
	printf("                                                             "); gotoxy(4, 22);
	printf("                                                             "); gotoxy(4, 23);
	printf("                                                                "); gotoxy(4, 19);
	printf("�ֶ� �������ϰ� ����.                             "); gotoxy(4, 20);
	printf("���Ϻ��� ���� ���̾�Ʈ��.                                        ");  system("pause>null"); gotoxy(4, 19);
	printf("                                                "); gotoxy(4, 20);
	printf("                                                 "); gotoxy(4, 19);
	printf("...�Ѱ��� ������ �� �ִµ�, �о��?                             "); system("pause>null"); gotoxy(4, 19);
	printf("1. <150524_2.txt>      2. �׸��д�                                ");  gotoxy(4, 20);
}
void print_s_f2_2()
{
	gotoxy(4, 20); printf("                                                "); gotoxy(4, 19);
	printf("<150524_2.txt>                                                    "); system("pause>null"); gotoxy(4, 19);
	printf("������ �� �̻��� �ϵ��� �־���.                                   "); gotoxy(4, 20);
	printf("�������� �۾��� �غ��ϰ� �־��µ� �μ��������Լ� ��ȭ�� �Ծ���.   "); gotoxy(4, 21);
	printf("�� ����ʹٰŴ� ����ѴٰŴ� ���۰Ÿ��� ������ ���� �˾�����      "); gotoxy(4, 22);
	printf("��ȭ�� �޾����� ������ ��Ҹ��� �������� �繵 �޶���.             "); system("pause>null"); gotoxy(4, 19);
	printf("�и���, ������ ��Ҹ�����.                                        "); gotoxy(4, 20);
	printf("'���� �ϴ� ��� �ߵ��' ��� ������ �峭��� �������� �ʾҴ�.     "); gotoxy(4, 21);
	printf("���̾� ������ ���� �۾� ��Ұ� �ٲ���ٰ� ��������.             "); gotoxy(4, 22);
	printf("������ ������ ������ ��Ҵ� �㸸 �Ǹ� ������� �����̴� ��ҿ���. "); system("pause>null"); gotoxy(4, 19);
	printf("���� �̻��� ������ ������� ���� �˰ڴٰ� ����ߴ�.               "); gotoxy(4, 20);
	printf("�׷��� ������ �ѵ��� ���� ���ٰ� '�����' ��� ��ȭ�� ������ȴ�"); gotoxy(4, 21);
	printf("������ ������ ������ ���� �޾� �־����� �� �� �־���.             "); gotoxy(4, 22);
	printf("���� �ϱ⸦ �����߿��� �̻��ϴٴ� ������ ������ �ʴ´�.           "); system("pause>null"); gotoxy(4, 19);
	printf("�۾��� �̷������� �ٲ�� ������ ����.                             "); gotoxy(4, 20);
	printf("������ �� �� ���� <��> ���� ������ ���� ���ִ�.                 "); gotoxy(4, 21);
	printf("�۾� ��ҵ� ���� �ȵȴ�... ������� �պ�� ���̶��...            "); gotoxy(4, 22);
	printf("�Ӹ����� �����ϴ�. ������ �Ǹ� ������ �ǰ���.                     "); system("pause>null"); gotoxy(4, 20);
	printf("                                                                  ");  gotoxy(4, 21);
	printf("                                                                  ");  gotoxy(4, 22);
	printf("                                                                  "); gotoxy(4, 19);
}
void print_s_f3()
{
	gotoxy(4, 19);
	printf("                                                                   ");
	gotoxy(4, 20);
	printf("                     ");
	gotoxy(4, 19);
	printf("<�۾�> ������ ����ô�.                                         "); system("pause>null"); gotoxy(4, 19);
	printf("���� ���ϸ� ���� �� ����ִ�.                    "); system("pause>null"); gotoxy(4, 19);
	printf("��� �� ������ ���� ���δ�.                      "); system("pause>null"); gotoxy(4, 19);
	printf("���, �� ����� �̹� ���� ����ε�...?               "); system("pause>null"); gotoxy(4, 19);
	printf("�̹� ������ �� �����ε��� ��� ���δ�.            "); system("pause>null"); gotoxy(4, 19);
	printf("������ ���ϴ�.                                      "); system("pause>null"); gotoxy(4, 19);
	printf("�� �̸����� �� ��Ʈ�Ͽ� ���� ����� ������ �� �ִ°ɱ�?    "); system("pause>null"); gotoxy(4, 19);
}
void print_s_clothes()
{
	gotoxy(4, 19);
	printf("������ ����� ���� ������ ���� �� �ִ�.                     "); system("pause>null"); gotoxy(4, 19);
	printf("(�˴� ����� ���ΰ�...)                                         "); system("pause>null"); gotoxy(4, 19);
}
void print_s_clothes_choice()
{
	gotoxy(4, 19);
	printf("�ɷ��ִ� �ʵ��� ���� ����Ҵ�.                            "); system("pause>null"); gotoxy(4, 19);
	printf("���� ����� ���̿��� ���� �տ� ������.                    "); system("pause>null"); gotoxy(4, 19);
	printf("MP3���� ���̴� ������ �߰��ߴ�.                             "); system("pause>null"); gotoxy(4, 19);
	ITEM_LIST[2] = 1; gotoxy(28, 1); printf("MP3"); gotoxy(4, 19);
}
void print_s_play_music1()
{
	gotoxy(4, 20);
	printf("                                                           "); gotoxy(4, 19);
	printf("MP3�� �۵����� ���Ҵ�                                      "); system("pause>null"); gotoxy(4, 19);
	printf("�ǰ� ���� MP3�̱�... �̷��� �� ��� �ٴѰ���               "); system("pause>null"); gotoxy(4, 19);
	printf("���� ������ 30�� ���� ����Ǿ��ִ�                         "); system("pause>null"); gotoxy(4, 19);
	printf("�� �� �뷡 ������ �ƴ� ���� ������ �ϳ� �־���             "); system("pause>null"); gotoxy(4, 19);
	printf("< �������.mp3 >                                           "); system("pause>null"); gotoxy(4, 19);
	printf("..... �� �� ���� ?                                     "); system("pause>null"); gotoxy(4, 19);
}
void print_s_play_music2()
{
	printf("...                                                             "); system("pause>null"); gotoxy(4, 19);
	printf("�̰�...��ü ����?                                               "); system("pause>null"); gotoxy(4, 19);
	printf("mp3���� �귯������ ������ ��� ������ ���ϴ� �־���.            "); system("pause>null"); gotoxy(4, 19);
	printf("�������� ���� ������...��� ����� ���̷��� �ѰŰ���.           "); system("pause>null"); gotoxy(4, 19);
	printf("������ ��°��? �׸��� �̷��� �� �̷����� ��� �ִ°���?         "); system("pause>null"); gotoxy(4, 19);
	printf("�������� ���ٱ⸦ Ÿ�� �귯 �������°� ���Ѱ� �Բ� ��������.    "); system("pause>null"); gotoxy(4, 19);
	printf("�׸���, �Ѱ��� �Ű澲�̴°��� �־���.                           "); system("pause>null"); gotoxy(4, 19);
	printf("""������""                                                      "); system("pause>null"); gotoxy(4, 19);
	printf("...�����ϴ� ��ü �����淡 ���� ���� ǥ���� �Ȱɱ�.              "); system("pause>null"); gotoxy(4, 19);
	printf("�ؾ�� �ȵǴ� ����� �ذ��ִ� �� ���ٴ� ������ ���� �����.   "); system("pause>null"); gotoxy(4, 19);
	printf("�ٷ� �� ����, ������ ��ġ�� ���𰡰� �־���.                    "); system("pause>null"); gotoxy(4, 19);
	printf("���� ������ �ұ�?(Ž��: p)(������: i)                            "); gotoxy(4, 19);
}
int print_s_lastdoor() {
	int lastPW;
	gotoxy(4, 19);
	printf("��ȣ : ____                                                     "); gotoxy(11, 19);
	scanf("%d", &lastPW);
	if (lastPW == 1022 ) {
		clr_room();
		print_room();
		print_obj();
		print_Person();
		gotoxy(4, 19);
		printf("���� ���ȴ� !                                               "); system("pause>null"); gotoxy(4, 19);
		printf("�ذ� �ִ� ���� ������ �ָ���ó�� ���� ��������.             "); system("pause>null"); gotoxy(4, 19);
		return 0;
	}


	else {
		clr_room();
		print_room();
		print_obj();
		print_Person(); gotoxy(4, 19);
		printf("��ȣ�� Ʋ�ȴ�. �ٽ� �����غ���.                            "); system("pause>null"); gotoxy(4, 19);
		return -1;
	}

}
void print_s_laststory()
{
	gotoxy(4, 19); p1.x = 5; p1.y = 10;
	print_Person(); p1.x = 32, p1.y = 10; print_Woman();
	gotoxy(4, 19);
	printf("���� ���� ������ ���� �� ���ϰ� �־���.                      "); system("pause>null"); gotoxy(4, 19);
	p1.x = 5, p1.y = 10;
	clear_Person();
	p1.x += 20;
	print_Person();
	gotoxy(4, 19);
	printf("���� �𸣰� �޷��� �׳ฦ �ȾҴ�.                              "); system("pause>null"); gotoxy(4, 19);
	printf("�μ� : ���Ͼ�...! ���� �̾���.. ����...                        "); system("pause>null"); gotoxy(4, 19);
	printf("���� : ����.. �� ��ﳵ��?                                     "); system("pause>null"); gotoxy(4, 19);
	printf("�� �ٶ󺸴� ������ �������� �ʴ�.                              "); system("pause>null"); gotoxy(4, 19);
	printf("�� ���� ������ ������ ��������鼭�� ����.. ������ �����ߴ�. "); system("pause>null"); gotoxy(4, 19);
	printf("�μ� : �������� ����ؼ� �̾���. ���� ����...                  "); system("pause>null"); gotoxy(4, 19);
	printf("���� : �ư�, �� �׷���?                                        "); system("pause>null"); gotoxy(4, 19);
	printf("1. å�� ȸ��    2. ����ϱ�    3. ���������                   "); gotoxy(4, 20);
	int sel; scanf("%d", &sel);
	if (sel == 1) {
		gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
		printf("�μ� : ���Ͼ� �� �� ����. ���� �ٸ� �������� �׷��ھ�?   "); system("pause>null"); gotoxy(4, 19);
		printf("�μ� : ���� �� �� <�� ��>��� ������ �׷����ž�!!           "); system("pause>null"); gotoxy(4, 19);
		printf("���� : ...���� ���߳�                                       "); system("pause>null"); gotoxy(4, 19);
		printf("�μ� : ���ϱ� ���� ����..! ���Ͼ� ���ݱ��� �� �ǽ��߾�?     "); system("pause>null"); gotoxy(4, 19);
		printf("���� : �ȹٷ� �� ��.                                        "); system("pause>null"); gotoxy(4, 19);
		printf("���ϰ� �������� �� �ܴ���.                                  "); system("pause>null"); gotoxy(4, 19);
		printf("1. ���� ���.    2. ������Ű��                     ");  gotoxy(4, 20);
		int sel_1; scanf("%d", &sel_1);
		if (sel_1 == 1) {
			gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
			printf("���� �� ���� �� ������ ���÷ȴ�.                          "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : ���Ͼ�...? �̰� ���ϴ� ���̾�...                      "); system("pause>null"); gotoxy(4, 19);
			printf("���� : ��Ǵ�� ������.                                      "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �峭����? ���Ͼ�, ���� �̷� �峭 �Ⱦ��ϴ°� ���ݾ�.    "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �� ��������.                                           "); system("pause>null"); gotoxy(4, 19);
			printf("���� : �� ���ϴ� �� ���� �� �� �� �� ����.                "); system("pause>null"); gotoxy(4, 19);
			printf("���� : ���� ó������ ��ȹ������ ������ �����Ѱſ���.          "); system("pause>null"); gotoxy(4, 19);
			printf("������ �ѱ��� �� �̸��� ��Ҵ�.                               "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �ƴϾ�!! ���Ͼ� ���� �� �����Ұ�!!                     "); system("pause>null"); gotoxy(4, 19);
			printf("���� : ���� �ʿ䵵 ����. �߰�.                                "); system("pause>null"); gotoxy(4, 19);
			play_bang();
			printf("�� - !                                                        "); system("pause>null"); gotoxy(4, 19);
			printf("<BAD ENDING>                                                  "); system("pause>null"); gotoxy(4, 19);
		}
		else if (sel_1 == 2) {
			gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
			printf("���� ������ �� ������ ���� ����Ҵ�.                           "); system("pause>null"); gotoxy(4, 19);
			printf("������ �� ������ ���� ���� ��������.                           "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �� ������ �� ��. ���Ͼ� �����ϰ� �츮 �ɾƼ� �������.  "); system("pause>null"); gotoxy(4, 19);
			printf("���� : �� ��. ������ ���� �����.                              "); system("pause>null"); gotoxy(4, 19);
			printf("�ϴ� ���� ���� ���ϸ� �ٶ󺸱�� �ߴ�.                         "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : ... ...                                                 "); system("pause>null"); gotoxy(4, 19);
			printf("���� : �� �� �غ�!!! ������ �� �׷���!!!                       "); system("pause>null"); gotoxy(4, 19);
			printf("���ϰ� ���¢���� ���� �ƹ� ���� �� ���� ����.                 "); system("pause>null"); gotoxy(4, 19);
			printf("�ѱ� �տ��� ���� ���� �Ǿ�����͸� ���Ҵ�.                   "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �̾���... �� ����...                                    "); system("pause>null"); gotoxy(4, 19);
			printf("������ ������ �帥��.                                          "); system("pause>null"); gotoxy(4, 19);
			printf("������ �������� ������ �帣���� �������� ���� ���Ⱑ ���Ҵ�.   "); system("pause>null"); gotoxy(4, 19);
			printf("���� : �׳� ... ����                                           "); system("pause>null"); gotoxy(4, 19);
			play_bang();
			printf("�� - !                                                         "); system("pause>null"); gotoxy(4, 19);
			printf("<BAD ENDING>                                                   "); system("pause>null"); gotoxy(4, 19);
		}
	}
	else if (sel == 2)
	{
		gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
		printf("�μ� : ���Ͼ�, ���� ������ ����Ұ�. �̾���.                "); system("pause>null"); gotoxy(4, 19);
		printf("�μ� : �� ������ ª�Ҵ� �� ����.                            "); system("pause>null"); gotoxy(4, 19);
		printf("�μ� : �׻� ���� ���� �־�޶� �س��� ����߷��� �̾��ϴ�.  "); system("pause>null"); gotoxy(4, 19);
		printf("���� : ����...                                              "); system("pause>null"); gotoxy(4, 19);
		printf("������ ���� ������ �۽鿴��.                                "); system("pause>null"); gotoxy(4, 19);
		printf("���ϸ� ǰ�� �Ⱦ��־���. ���� ����̸� ��°� ��������.      "); system("pause>null"); gotoxy(4, 19);
		printf("���� : ��.. ����                                            "); system("pause>null"); gotoxy(4, 19);
		printf("�μ� : ������ �̾���... �̾��ϴ�                            "); system("pause>null"); gotoxy(4, 19);
		printf("�μ� : �̾��ϴ�.. ����Ѵ�..                                "); system("pause>null"); gotoxy(4, 19);
		printf("<HAPPY ENDING>                                              "); system("pause>null"); gotoxy(4, 19);
	}
	else if (sel == 3)
	{
		gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
		printf("�μ� : �� �׳� �� �����ְ� �; �׷��� �� ���̾�.        "); system("pause>null"); gotoxy(4, 19);
		printf("�μ� : �� ���̾�, ���Ͼ�. ���� ���������� ���ڴ�.          "); system("pause>null"); gotoxy(4, 19);
		printf("�μ� : �츮 �������� ��å�̳� ��...                        "); system("pause>null"); gotoxy(4, 19);
		printf("-!!!                                                       "); system("pause>null"); gotoxy(4, 19);
		printf("���ϰ� �� ���� ���ȴ�. ������ �ϳ��� ����.                 "); system("pause>null"); gotoxy(4, 19);
		printf("���� : �װ� �پ�? ������ �����Ÿ��� �س��� �װ� ���̳İ�."); system("pause>null"); gotoxy(4, 19);
		printf("���� : ���... 2�⸸�� ���ƿͼ��� �̰͹ۿ� �ȵ�?         "); system("pause>null"); gotoxy(4, 19);
		printf("���ϴ� ���� ���� ���� �������.                            "); system("pause>null"); gotoxy(4, 19);
		printf("1. ���ϸ� �Ⱦ��ش�.    2. �ظ��Ѵ�.                        "); gotoxy(4, 20);
		int sel_2; scanf("%d", &sel_2);
		if (sel_2 == 1) {
			gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
			printf("�μ� : ���Ͼ�, ���� ������ ����Ұ�. �̾���.                "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �� ������ ª�Ҵ� �� ����.                            "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �׻� ���� ���� �־�޶� �س��� ����߷��� �̾��ϴ�.  "); system("pause>null"); gotoxy(4, 19);
			printf("���� : ��¥.. �ʹ��ϴ� ����.                                "); system("pause>null"); gotoxy(4, 19);
			printf("���� : �� ���� �ٽ� �Ͼ �Ǵ°ž�?                        "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �翬����. �ٽô� ���� ������ �������� ����.          "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : �̾��ϴ� ����Ѵ�.                                   "); system("pause>null"); gotoxy(4, 19);
			printf("<HAPPY ENDING>                                              "); system("pause>null"); gotoxy(4, 19);

		}
		else if (sel_2 == 2	) {
			gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
			printf("�μ� : ���Ͼ�, ����. ���� ���� ���� �԰� �� �����Ѱ� �ƴϾ�."); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : <�� ��> �ʿ��� �츱 ó������ ���̷��� ��ȹ�Ѱž�.      "); system("pause>null"); gotoxy(4, 19);
			printf("���� : �׷����� ����...                                       "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : ������ ��� ó���ϴٰ� ���� �װ� �˾ƹ����Ű� ���� ��.."); system("pause>null"); gotoxy(4, 19);
			printf("���� : ������������!!! ó������ ������ ���߾����...          "); system("pause>null"); gotoxy(4, 19);
			printf("���� : �� �����ͼ�... ��!!!!                                  "); system("pause>null"); gotoxy(4, 19);
			printf("�ѱ��� �� ���ڳ��̿� ��Ҵ�.                                  "); system("pause>null"); gotoxy(4, 19);
			printf("������ ���� �͹��� ���� �տ� ���� ���°� ��������.        "); system("pause>null"); gotoxy(4, 19);
			printf("�μ� : ��..���Ͼ�, ��.. �� ���� �׷�����..                    "); system("pause>null"); gotoxy(4, 19);
			printf("���� : ���� �� ���ȴ�. �߰�.                                  "); system("pause>null"); gotoxy(4, 19);
			play_bang();
			printf("�� - !                                                         "); system("pause>null"); gotoxy(4, 19);
			printf("<BAD ENDING>                                                   "); system("pause>null"); gotoxy(4, 19);
		}
	}
}