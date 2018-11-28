#include"script.h"
#include"bgm.h"
#include"play.h"
void print_s_frame()
{
	gotoxy(4, 19);
	printf("액자가 걸려있다.                                                 "); system("pause>null"); gotoxy(4, 19);
	printf("어떤 여자와 내가 친근하게 찍은 사진이 걸려있다.                  "); system("pause>null"); gotoxy(4, 19);
	printf("아무리 보아도 내 옆에서 웃고있는 여자가 잘 기억이 나질 않는다... "); system("pause>null"); gotoxy(4, 19);
	printf("그렇지만 이 여자가 조금도 낯설어 보이지 않는다.                  "); system("pause>null"); gotoxy(4, 19);
	printf("이 여자는 도대체 누구일까. 머리가 다시 지끈거렸다.               "); system("pause>null"); gotoxy(4, 19);
	printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
}
void print_s_calendar()
{
	gotoxy(4, 19);
	printf("2015년 달력이 붙어있다.                                         "); system("pause>null"); gotoxy(4, 19);
	printf("5월 25일에 붉은 색 동그라미가 여러번 쳐져 있고, 그 아래에       "); gotoxy(4, 20);
	printf("무언가 조그맣게 적혀져 있다.                                    "); system("pause>null"); gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("< 미션 : ""○○씨 암살작전"" > ...                              "); system("pause>null"); gotoxy(4, 19);
	printf("달력 아래에는 ○○씨의 사진과 암살작전에 대한 정보가 적혀져 있다"); system("pause>null"); gotoxy(4, 19);
	printf("-23시에 부산항에서 ○○씨에게 접근해 암살 후 자살로 위장시키기- "); system("pause>null"); gotoxy(4, 19);
	printf("...                                                             "); system("pause>null"); gotoxy(4, 19);
	printf("달력에 왜 이런게 적혀져 있을까...                               "); system("pause>null"); gotoxy(4, 19);
	printf("머릿속이 복잡하다. 방을 좀더 둘러보자.                          "); system("pause>null"); gotoxy(4, 19);
	printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
}
void print_s_safe()
{
	gotoxy(4, 19);
	printf("잠금장치가 달려있는 금고이다.                                    "); system("pause>null"); gotoxy(4, 19);
	printf("영어 알파벳 6글자를 끼워 맞추는 장치인 듯 하다.                  "); system("pause>null"); gotoxy(4, 19);
	printf("암호 : ______                                                    "); gotoxy(11, 19);
}
void print_s_safe_open()
{
	gotoxy(4, 19);
	printf("금고가 열렸다 !                                              "); system("pause>null"); gotoxy(4, 19);
	printf("금고 안에는 돈뭉치가 가득했다.                               "); system("pause>null"); gotoxy(4, 19);
	printf("이 방 주인은 대체 뭐하는 사람이야..?                         "); system("pause>null"); gotoxy(4, 19);
	printf("돈뭉치 사이에서 통장이 하나 보인다.                          "); system("pause>null"); gotoxy(4, 19);
	printf("돈 좀 있어보이는데 구경이나 좀 해볼까?                       "); system("pause>null"); gotoxy(4, 19);
	printf("거래일자  거래내용   찾으신금액    맡기신금액    잔액        "); gotoxy(4, 20);
	printf("20150430    블랙                  73,000,000   2,436,232,197 "); gotoxy(4, 21);
	printf("20150528 바른정형외과 2,400,000                2,433,832,197 "); gotoxy(4, 22);
	printf("20150607 기린정형외과 1,700,000                2,432,132,197 "); gotoxy(4, 23);
	printf("20160918  왑대학병원  3,300,000                2,428,832,197 ");  system("pause>null"); gotoxy(4, 20);
	printf("                                                             "); gotoxy(4, 21);
	printf("                                                             "); gotoxy(4, 22);
	printf("                                                             "); gotoxy(4, 23);
	printf("                                                             "); gotoxy(4, 19);
	printf("웬 정형외과를 이렇게 많이 다녔대?                            "); system("pause>null"); gotoxy(4, 19);
	printf("2015년 5월에 어디 크게 다친건가?                             "); system("pause>null"); gotoxy(4, 19);
	printf("<블랙>은 또 뭐지? 회사 이름은 아닌 것 같고...                "); system("pause>null"); gotoxy(4, 19);
	printf("<블랙> 여기서 되게 큰 돈 받았네. 진짜 뭐하는 사람이야?       "); system("pause>null"); gotoxy(4, 19);
}
void print_s_safe_close()
{
	gotoxy(4, 19);
	printf("열리지 않는다. 암호를 다시 생각해보자.                       "); system("pause>null"); gotoxy(4, 19);
}
void print_s_tv() {
	gotoxy(4, 19);
	printf("벽걸이 TV가 있다.                                             "); system("pause>null"); gotoxy(4, 19);
	printf("TV의 전원을 켜보았다.                                          "); system("pause>null"); gotoxy(4, 19);
	printf("뉴스가 흘러나온다.                                            "); system("pause>null"); gotoxy(4, 19);
	play_news();
	printf("어제 밤, 부산시 남구 대연동 길 한복판에서"); Sleep(3000); gotoxy(4, 20);
	printf("건장한 성인 남성 한 명이 납치되는 사건이 있었습니다."); Sleep(4000); gotoxy(4, 21);
	printf("피해자는 지나가던 할머니의 짐을 들어주다가 납치범의 차로"); Sleep(5000); gotoxy(4, 22);
	printf("유인되었습니다. 경찰은 용의자로 이웃 동네 여성 임모씨를 지목하고"); Sleep(6000); gotoxy(4, 23);
	printf("있으며 수사망을 좁혀가고 있다고 전합니다. PBS 이기자였습니다.\""); Sleep(5000); system("pause>null"); gotoxy(4, 20);
	play_main_bgm();
	printf("                                                                 ");  gotoxy(4, 21);
	printf("                                                                 "); gotoxy(4, 22);
	printf("                                                                 "); gotoxy(4, 23);
	printf("                                                                 "); gotoxy(4, 19);
	printf("내가 납치된 사건인 것 같다.                                      "); system("pause>null"); gotoxy(4, 19);
	printf("그래, 할머니의 부탁을 들어드리다가 정신을 잃었었지.              "); system("pause>null"); gotoxy(4, 19);
	printf("가만, 내 주변에 성이 임씨인 여자가 있었던가...                   "); system("pause>null"); gotoxy(4, 19);
	printf("나는 무엇을 할까?(탐색: p)(아이템: i)                              "); gotoxy(4, 19);
}
void print_s_drawer()
{
	gotoxy(4, 19);
	printf("3칸 짜리 서랍이다.                                              "); system("pause>null"); gotoxy(4, 19);
	printf("몇 번 서랍을 열어볼까?                                          "); system("pause>null"); gotoxy(4, 19);
	printf("1. 첫 번째 서랍   2. 두 번째 서랍   3. 세 번째 서랍  4. 그만둔다"); gotoxy(4, 20);
}
void print_s_drawer_f()
{
	printf("첫 번째 서랍을 열었다.                                          "); system("pause>null"); gotoxy(4, 19);
	printf("서랍을 열어보니 수많은 여권들이 눈에 들어온다.                  "); system("pause>null"); gotoxy(4, 19);
	printf("여권 표지 색깔이 다양하다. 여러 나라의 여권들이다.              "); system("pause>null"); gotoxy(4, 19);
	printf("여권들을 자세히보니 이름만 다를뿐 똑같은 얼굴사진이 붙어있다.   "); system("pause>null"); gotoxy(4, 19);
	printf("여권에 붙여진 사진의 주인공은 놀랍게도 다른 누구도 아닌 나다... "); system("pause>null"); gotoxy(4, 19);
	printf("뭐지...? 내가 이렇게 많은 여권을 썼었나...?                     "); system("pause>null"); gotoxy(4, 19);
}
void print_s_drawer_s()
{
	printf("두 번째 서랍을 열었다.                                          ");  system("pause>null"); gotoxy(4, 19);
	printf("웬 휴대폰이 덩그러니 있다.                                      "); system("pause>null"); gotoxy(4, 19);
	printf("기본 배경화면에 깔끔한 디자인이 딱 내 스타일이다.               "); system("pause>null"); gotoxy(4, 19);
	printf("핸드폰 잠금을 열어보고 싶은데...                                "); system("pause>null"); gotoxy(4, 19);
	printf("앗...!                                                          "); system("pause>null"); gotoxy(4, 19);
	printf("평소 습관대로 홈 버튼에 손가락을 올렸더니 잠금이 풀렸다 !       "); system("pause>null"); gotoxy(4, 19);
	printf("뭐야... 이거 내 폰이야 ?                                        "); system("pause>null"); gotoxy(4, 19);
	printf("온 몸에 소름이 돋는다.                                          "); system("pause>null"); gotoxy(4, 19);
	printf("일단 오늘 날짜는 10월 17일이다.                                  "); system("pause>null"); gotoxy(4, 19);
	printf("배경화면에는 디데이 위젯이 있었다.                              "); system("pause>null"); gotoxy(4, 19);
	printf("<3주년 ♥ D-5>                                                  "); system("pause>null"); gotoxy(4, 19);
	printf("오래 사귄 여자친구가 있었던 듯 하다.                            "); system("pause>null"); gotoxy(4, 19);
	printf("핸드폰의 연락처를 뒤져보니, 제일 위에 즐겨찾기된 사람이 있었다. "); system("pause>null"); gotoxy(4, 19);
	printf("★ 임진하                                                       "); gotoxy(4, 20);
	printf("   이메일   : LJH@Hmail.com                                     "); gotoxy(4, 21);
	printf("   전화번호 : 010-XXXX-XXXX                                     "); gotoxy(4, 22);
	printf("   생일     : 3월 XX일                                          "); system("pause>null"); gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 21);
	printf("                                                                "); gotoxy(4, 22);
	printf("                                                                "); gotoxy(4, 19);
	printf("자주 연락하는 사람이였군...                                     "); system("pause>null"); gotoxy(4, 19);
	printf("뭔가 기억이 하나씩 돌아오는 기분이다.                           "); system("pause>null"); gotoxy(4, 19);
}
void print_s_drawer_t_nokey()
{
	gotoxy(4, 20); printf("                                                 "); gotoxy(4, 19);
	printf("열리지 않는다...                                                "); system("pause>null"); gotoxy(4, 19);
}
void print_s_drawer_t()
{
	gotoxy(4, 20); printf("                                                 "); gotoxy(4, 19);
	printf("잘 열리지 않는다...                                               "); system("pause>null"); gotoxy(4, 19);
	printf("열쇠를 이용하여 세 번째 서랍을 열어보았다.                        "); system("pause>null"); gotoxy(4, 19);
	printf("서랍에서 낡은 쪽지를 획득했다.                                    "); system("pause>null"); gotoxy(4, 19);
	ITEM_LIST[3] = 1; gotoxy(32, 1); printf("낡은 쪽지"); gotoxy(4, 19);
}
void use_item_script()
{
	gotoxy(4, 20); printf("                                                                     "); gotoxy(4, 19);
	printf("쪽지엔 긴 글이 적혀져 있다.. 읽어보도록 하자.                     "); system("pause>null"); gotoxy(4, 19);
	printf("<2015년 5월 25일>                                                 "); system("pause>null"); gotoxy(4, 19);
	printf("오늘 일이 머릿속에서 정리가 잘 되지 않는다.                       "); gotoxy(4, 20);
	printf("그저 무섭다. 두렵다. 아무것도 믿을 수 가 없다.                    ");  gotoxy(4, 21);
	printf("오빠가 너무 원망스럽다. 왜 나를 그런곳으로 불러들인거지?          ");  gotoxy(4, 22);
	printf("아무리 생각해도 이해가 되지 않는다.                               ");  system("pause>null"); gotoxy(4, 19);
	printf("나는 정말로 죽을뻔했다. 아니, 거의 죽었다.                        "); gotoxy(4, 20);
	printf("구타당하는 나를 주변을 지나는 경찰이 보지 못했다면 어떻게 됬을까란"); gotoxy(4, 21);
	printf("끔찍한 생각이 자꾸 머릿속을 맴돌아서 역겹다.                      "); gotoxy(4, 22);
	printf("침착하자... 우선 오늘 일어난 일들을 정리 해 봐야겠다.             "); system("pause>null"); gotoxy(4, 19);
	printf("23시, 나는 오빠가 어제 알려준 장소로 나갔지만 시간이 지나도 표적은"); gotoxy(4, 20);
	printf("좀처럼 나타나질 않았다.                                           "); gotoxy(4, 21);
	printf("시간이 얼마나 흘렀을까. 뒤에서 인기척을 느껴서 돌아보려는 순간    "); gotoxy(4, 22);
	printf("의문의 패거리들에게 머리를 가격당했다.                            "); system("pause>null"); gotoxy(4, 22);
	printf("                                                                  "); gotoxy(4, 19);
	printf("정신을 차리려 애를 썼지만 쉽지 않았다. 얼마나 맞았는지 기억도 잘  "); gotoxy(4, 20);
	printf("나질 않는다.                                                      "); gotoxy(4, 21);
	printf("한참을 맞다가, 내 눈에 들어온게 한가지 있었다.                    "); system("pause>null"); gotoxy(4, 19);
	printf("<블 랙> 마크.                                                     "); gotoxy(4, 20);
	printf("분명히 <블 랙> 마크를 봤다. 그들은 나와 함께 일하는 사람들 이었다."); gotoxy(4, 21);
	printf("왜 나를 공격한 것 일까? 나를 표적으로 오해한 것 일까?             "); gotoxy(4, 22);
	printf("아니다. 그럴 리 없다. 나도 그들과 같은 마크를 차고 있었으니...    "); system("pause>null"); gotoxy(4, 19);
	printf("그렇다면, 가능한 해석은 한가지 뿐이다.                            "); gotoxy(4, 20);
	printf("<블 랙>은 나를 죽이려고 했다.                                     "); gotoxy(4, 21);
	printf("...그렇지만 마음에 걸리는게 한가지 있다.                          "); gotoxy(4, 22);
	printf("두수오빠는 왜 나를 이런 장소로 불러낸 것 일까?                    "); system("pause>null"); gotoxy(4, 19);
	printf("생각할수록 눈물이 자꾸 흐른다. <블 랙>에서도, 오빠에게도 버려졌단 "); gotoxy(4, 20);
	printf("생각이 들때마다 가슴이 미칠듯이 아프다.                           "); gotoxy(4, 21);
	printf("언젠간 오빠를 찾아서 오늘 일을 꼭 물어보고싶다.                   "); gotoxy(4, 22);
	printf("생각이 자꾸 깊어진다. 오늘은 좀처럼 잠에 들 수 없을 것 같다...    "); system("pause>null"); gotoxy(4, 20);
	printf("                                                                  "); gotoxy(4, 21);
	printf("                                                                  "); gotoxy(4, 22);
	printf("                                                                  "); gotoxy(4, 19);
}
void print_s_bed()
{
	gotoxy(4, 19);
	printf("침대다.                                                         "); system("pause>null"); gotoxy(4, 19);
	printf("에이스 침대라 그런지 푹신해 보인다.                             "); system("pause>null"); gotoxy(4, 19);
	printf("1. 베개를 살핀다    2. 침대 밑을 살핀다                         "); gotoxy(4, 20);
}
void print_s_bed_gun()
{
	gotoxy(4, 20); printf("                                                                "); gotoxy(4, 19);
	ITEM_LIST[4] = 1; gotoxy(42, 1); printf("권총"); gotoxy(4, 19);
	printf("베개 밑에서 '권총'을 발견했다.                                  "); system("pause>null"); gotoxy(4, 19);
	printf("권총에는 'KDSLJH' 라는 이니셜이 새겨져 있다.                    "); system("pause>null"); gotoxy(4, 19);
}
void explain_gun()
{
	gotoxy(4, 20);  printf("                                                                "); gotoxy(4, 19);
	printf("권총이다.                                                       "); system("pause>null"); gotoxy(4, 19);
	printf("권총에는 KDSLJH 라는 이니셜이 새겨져 있다.                      "); system("pause>null"); gotoxy(4, 19);
}
void print_s_nothing()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("...특별한건 보이지 않는다.                                      "); system("pause>null"); gotoxy(4, 19);
}
void print_s_bed_nolighit()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("침대 밑이 깜깜해 잘 보이지 않는다...                            "); system("pause>null"); gotoxy(4, 19);
}
void print_s_bed_light()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("침대 밑이 깜깜해 잘 보이지 않는다...                            "); system("pause>null"); gotoxy(4, 19);
	printf("손전등을 사용해 침대 밑을 밝혀보았다.                           "); system("pause>null"); gotoxy(4, 19);
	ITEM_LIST[1] = 1; gotoxy(23, 1); printf("열쇠"); gotoxy(4, 19); ITEM_CHECK[0] = 1;
	printf("침대 밑에 떨어져 있는 '열쇠'를 발견했다.                        "); system("pause>null"); gotoxy(4, 19);
	printf("이 열쇠는 어디에 쓰는 것일까...?                                "); system("pause>null"); gotoxy(4, 19);
	printf("방을 좀더 살펴보자. 열쇠를 사용할 곳이 있을 것 같다.            "); system("pause>null"); gotoxy(4, 19);
}
void explain_key()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("꽤 낡아 보이는 열쇠이다.                                        "); system("pause>null"); gotoxy(4, 19);
	printf("어딘가 잠겨 있는 곳을 열 수 있을 것 같다.                       "); system("pause>null"); gotoxy(4, 19);

}
void print_s_desk()
{
	gotoxy(4, 19);
	printf("나무로 만들어진 책상이다.                                       "); system("pause>null"); gotoxy(4, 19);
	printf("1. 책상 밑을 살핀다      2. 노트북을 살핀다                     "); gotoxy(4, 20);
}
void print_s_desk_light()
{
	gotoxy(16, 1);
	printf("손전등"); gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("'손전등'을 획득했다.                                            "); system("pause>null"); gotoxy(4, 19);
}
void explain_light()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("손전등이다. 아직 배터리가 남아 있는 것 같다.                    "); system("pause>null"); gotoxy(4, 19);
	printf("어두운 곳을 비출 수 있겠군...                                   "); system("pause>null"); gotoxy(4, 19);
}
void print_s_desk_notebook()
{
	gotoxy(4, 20);
	printf("                                                                "); gotoxy(4, 19);
	printf("세계 최강의 노트북 보스몬스터가 놓여져 있다.                    "); system("pause>null"); gotoxy(4, 19);
	printf("노트북을 열어보았다.                                  "); system("pause>null"); gotoxy(4, 19);
	printf("아이디가 ... <두수>? "); system("pause>null"); gotoxy(4, 19);
	printf("내 이름이잖아...?                          "); system("pause>null"); gotoxy(4, 19);
	printf("이상하다. 노트북을 확인해야 할 것 같다.                "); system("pause>null"); gotoxy(4, 19);
	printf("노트북은 잠겨있다. 암호를 알아내자.               "); system("pause>null"); gotoxy(4, 19);
	printf("암호 : ____                                        "); 
}
void print_s_notebook_open()
{
	gotoxy(5, 20); printf("                                            "); gotoxy(4, 19);
	printf("노트북의 잠금이 풀렸다 !                    "); system("pause>null"); gotoxy(4, 19);
	printf("배경사진은 어떤 여자와 다정하게 찍은 사진이다.                 "); system("pause>null"); gotoxy(4, 19);
	printf("둘 다 환하게 웃고있다.                            "); system("pause>null"); gotoxy(4, 19);
	printf("되게 좋았나보군...                              "); system("pause>null"); gotoxy(4, 19);
	printf("바탕화면에 휴지통, 인터넷, 그리고 3개의 폴더 아이콘이 있다.    "); system("pause>null"); gotoxy(4, 19);
	printf("<두수>, <진하>, <작업>.... 확인해보는 것이 좋을 것 같다.         "); system("pause>null"); gotoxy(4, 19);
}
void print_s_notebook_close()
{
	gotoxy(4, 19);
	printf("노트북의 잠금이 풀리지 않았다. 다시 생각해보자.       ");
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
	printf("<두수> 폴더를 열어봤다.                                       "); system("pause>null"); gotoxy(4, 19);
	printf("다른 건 없고 폴더 하나가 덩그러니 있었다.       "); system("pause>null"); gotoxy(4, 19);
	printf("<직박구리>                                  "); system("pause>null"); gotoxy(4, 19);
	printf(".....?      "); system("pause>null"); gotoxy(4, 19);
	printf("폴더는 잠겨있다."); system("pause>null"); gotoxy(4, 19);
	printf("열고 싶은 마음이 들끓지만 열지 않아도 알 것 같다."); system("pause>null"); gotoxy(4, 19);
	printf("...되게 허술하군                                 "); system("pause>null"); gotoxy(4, 19);
}
void print_s_f2()
{
	gotoxy(4, 19);
	printf("                                                                   ");
	gotoxy(4, 20);
	printf("                     ");
	gotoxy(4, 19);
	printf("<진하> 폴더를 열어봤다.                                     "); system("pause>null"); gotoxy(4, 19);
	printf("수많은 텍스트 파일이 들어있다.                   "); system("pause>null"); gotoxy(4, 19);
	printf("텍스트 파일의 제목은 죄다 숫자로 되어있다.         "); system("pause>null"); gotoxy(4, 19);
	printf("보아하니 날짜 같은데 아무래도 일기인 듯 싶다.         "); system("pause>null"); gotoxy(4, 19);
	printf("제일 최근 일기를 보자.                         "); system("pause>null"); gotoxy(4, 19);
	printf("<150524.txt>                          "); system("pause>null"); gotoxy(4, 19);
	printf("내일 작업이 들어가는 날이라 조금 긴장이 된다. "); gotoxy(4, 20);
	printf("매번 하는 일이지만 할 때 마다 떨리는 걸 보니 나도 사람인가 보다."); gotoxy(4, 21);
	printf("아니면 내일 죽을 사람이 유명한 사람이라 그런가..."); gotoxy(4, 22);
	printf("마마무 솔라... 이쁘긴 하지 "); gotoxy(4, 23);
	printf("두수 오빠의 눈에는 내가 이쁠까 솔라가 이쁠까?");  system("pause>null"); gotoxy(4, 21);
	printf("                                                             "); gotoxy(4, 22);
	printf("                                                             "); gotoxy(4, 23);
	printf("                                                                "); gotoxy(4, 19);
	printf("솔라가 예뻐보일것 같다.                             "); gotoxy(4, 20);
	printf("내일부터 당장 다이어트다.                                        ");  system("pause>null"); gotoxy(4, 19);
	printf("                                                "); gotoxy(4, 20);
	printf("                                                 "); gotoxy(4, 19);
	printf("...한가지 파일이 더 있는데, 읽어볼까?                             "); system("pause>null"); gotoxy(4, 19);
	printf("1. <150524_2.txt>      2. 그만둔다                                ");  gotoxy(4, 20);
}
void print_s_f2_2()
{
	gotoxy(4, 20); printf("                                                "); gotoxy(4, 19);
	printf("<150524_2.txt>                                                    "); system("pause>null"); gotoxy(4, 19);
	printf("오늘은 좀 이상한 일들이 있었다.                                   "); gotoxy(4, 20);
	printf("내일있을 작업을 준비하고 있었는데 두수오빠에게서 전화가 왔었다.   "); gotoxy(4, 21);
	printf("또 보고싶다거니 사랑한다거니 오글거리는 말들을 할줄 알았지만      "); gotoxy(4, 22);
	printf("전화를 받았을때 오빠의 목소리는 이전과는 사뭇 달랐다.             "); system("pause>null"); gotoxy(4, 19);
	printf("분명히, 떨리는 목소리였다.                                        "); gotoxy(4, 20);
	printf("'내가 하는 얘기 잘들어' 라는 말에서 장난기는 느껴지지 않았다.     "); gotoxy(4, 21);
	printf("곧이어 오빠는 내일 작업 장소가 바뀌었다고 얘기해줬다.             "); gotoxy(4, 22);
	printf("하지만 오빠가 말해준 장소는 밤만 되면 경찰들로 북적이는 장소였다. "); system("pause>null"); gotoxy(4, 19);
	printf("뭔가 이상한 느낌이 들었지만 나는 알겠다고 대답했다.               "); gotoxy(4, 20);
	printf("그러고 오빠는 한동안 말이 없다가 '사랑해' 라고선 전화를 끊어버렸다"); gotoxy(4, 21);
	printf("오빠의 마지막 말에서 목이 메어 있었음을 알 수 있었다.             "); gotoxy(4, 22);
	printf("지금 일기를 쓰는중에도 이상하다는 느낌이 가시지 않는다.           "); system("pause>null"); gotoxy(4, 19);
	printf("작업이 이런식으로 바뀌게 된적은 없다.                             "); gotoxy(4, 20);
	printf("보통은 몇 주 전에 <블랙> 에서 연락이 오게 되있다.                 "); gotoxy(4, 21);
	printf("작업 장소도 말이 안된다... 사람들이 붐비는 곳이라니...            "); gotoxy(4, 22);
	printf("머릿속이 복잡하다. 내일이 되면 정리가 되겠지.                     "); system("pause>null"); gotoxy(4, 20);
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
	printf("<작업> 폴더를 열어봤다.                                         "); system("pause>null"); gotoxy(4, 19);
	printf("사진 파일만 수십 개 들어있다.                    "); system("pause>null"); gotoxy(4, 19);
	printf("사람 얼굴 사진이 많이 보인다.                      "); system("pause>null"); gotoxy(4, 19);
	printf("잠깐, 이 사람은 이미 죽은 사람인데...?               "); system("pause>null"); gotoxy(4, 19);
	printf("이미 고인이 된 유명인들이 몇몇 보인다.            "); system("pause>null"); gotoxy(4, 19);
	printf("느낌이 쎄하다.                                      "); system("pause>null"); gotoxy(4, 19);
	printf("내 이름으로 된 노트북에 죽은 사람의 사진이 왜 있는걸까?    "); system("pause>null"); gotoxy(4, 19);
}
void print_s_clothes()
{
	gotoxy(4, 19);
	printf("옷장을 열어보니 검은 정장들로 가득 차 있다.                     "); system("pause>null"); gotoxy(4, 19);
	printf("(죄다 정장들 뿐인가...)                                         "); system("pause>null"); gotoxy(4, 19);
}
void print_s_clothes_choice()
{
	gotoxy(4, 19);
	printf("걸려있는 옷들을 대충 쓸어보았다.                            "); system("pause>null"); gotoxy(4, 19);
	printf("검은 정장들 사이에서 무언가 손에 잡혔다.                    "); system("pause>null"); gotoxy(4, 19);
	printf("MP3같이 보이는 물건을 발견했다.                             "); system("pause>null"); gotoxy(4, 19);
	ITEM_LIST[2] = 1; gotoxy(28, 1); printf("MP3"); gotoxy(4, 19);
}
void print_s_play_music1()
{
	gotoxy(4, 20);
	printf("                                                           "); gotoxy(4, 19);
	printf("MP3를 작동시켜 보았다                                      "); system("pause>null"); gotoxy(4, 19);
	printf("되게 구식 MP3이군... 이런걸 왜 들고 다닌거지               "); system("pause>null"); gotoxy(4, 19);
	printf("음악 파일이 30곡 남짓 저장되어있다                         "); system("pause>null"); gotoxy(4, 19);
	printf("그 중 노래 제목이 아닌 음성 파일이 하나 있었다             "); system("pause>null"); gotoxy(4, 19);
	printf("< 제목없음.mp3 >                                           "); system("pause>null"); gotoxy(4, 19);
	printf("..... 한 번 들어볼까 ?                                     "); system("pause>null"); gotoxy(4, 19);
}
void print_s_play_music2()
{
	printf("...                                                             "); system("pause>null"); gotoxy(4, 19);
	printf("이건...대체 뭐지?                                               "); system("pause>null"); gotoxy(4, 19);
	printf("mp3에서 흘러나오는 음성을 듣고 한참을 멍하니 있었다.            "); system("pause>null"); gotoxy(4, 19);
	printf("누군가가 나와 임진하...라는 사람을 죽이려고 한거같다.           "); system("pause>null"); gotoxy(4, 19);
	printf("하지만 어째서? 그리고 이런게 왜 이런곳에 들어 있는거지?         "); system("pause>null"); gotoxy(4, 19);
	printf("식은땀이 등줄기를 타고 흘러 내려가는게 오한과 함께 느껴졌다.    "); system("pause>null"); gotoxy(4, 19);
	printf("그리고, 한가지 신경쓰이는것이 있었다.                           "); system("pause>null"); gotoxy(4, 19);
	printf("""임진하""                                                      "); system("pause>null"); gotoxy(4, 19);
	printf("...임진하는 대체 누구길래 나와 같은 표적이 된걸까.              "); system("pause>null"); gotoxy(4, 19);
	printf("잊어서는 안되는 사람을 잊고있단 것 같다는 생각이 문득 들었다.   "); system("pause>null"); gotoxy(4, 19);
	printf("바로 그 순간, 뇌리를 스치는 무언가가 있었다.                    "); system("pause>null"); gotoxy(4, 19);
	printf("나는 무엇을 할까?(탐색: p)(아이템: i)                            "); gotoxy(4, 19);
}
int print_s_lastdoor() {
	int lastPW;
	gotoxy(4, 19);
	printf("암호 : ____                                                     "); gotoxy(11, 19);
	scanf("%d", &lastPW);
	if (lastPW == 1022 ) {
		clr_room();
		print_room();
		print_obj();
		print_Person();
		gotoxy(4, 19);
		printf("문이 열렸다 !                                               "); system("pause>null"); gotoxy(4, 19);
		printf("잊고 있던 지난 날들이 주마등처럼 스쳐 지나간다.             "); system("pause>null"); gotoxy(4, 19);
		return 0;
	}


	else {
		clr_room();
		print_room();
		print_obj();
		print_Person(); gotoxy(4, 19);
		printf("암호가 틀렸다. 다시 생각해보자.                            "); system("pause>null"); gotoxy(4, 19);
		return -1;
	}

}
void print_s_laststory()
{
	gotoxy(4, 19); p1.x = 5; p1.y = 10;
	print_Person(); p1.x = 32, p1.y = 10; print_Woman();
	gotoxy(4, 19);
	printf("문을 열고 나오자 맞은 편에 진하가 있었다.                      "); system("pause>null"); gotoxy(4, 19);
	p1.x = 5, p1.y = 10;
	clear_Person();
	p1.x += 20;
	print_Person();
	gotoxy(4, 19);
	printf("나도 모르게 달려가 그녀를 안았다.                              "); system("pause>null"); gotoxy(4, 19);
	printf("두수 : 진하야...! 내가 미안해.. 내가...                        "); system("pause>null"); gotoxy(4, 19);
	printf("진하 : 오빠.. 다 기억났어?                                     "); system("pause>null"); gotoxy(4, 19);
	printf("날 바라보는 눈빛이 예전같지 않다.                              "); system("pause>null"); gotoxy(4, 19);
	printf("그 때의 따스한 눈빛이 살아있으면서도 무언가.. 원망이 가득했다. "); system("pause>null"); gotoxy(4, 19);
	printf("두수 : 이제서야 기억해서 미안해. 몸은 괜찮...                  "); system("pause>null"); gotoxy(4, 19);
	printf("진하 : 됐고, 왜 그랬어?                                        "); system("pause>null"); gotoxy(4, 19);
	printf("1. 책임 회피    2. 사과하기    3. 얼버무리기                   "); gotoxy(4, 20);
	int sel; scanf("%d", &sel);
	if (sel == 1) {
		gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
		printf("두수 : 진하야 내 말 들어봐. 내가 다른 마음으로 그랬겠어?   "); system("pause>null"); gotoxy(4, 19);
		printf("두수 : 전부 다 그 <블 랙>놈들 때문에 그랬던거야!!           "); system("pause>null"); gotoxy(4, 19);
		printf("진하 : ...오빠 변했네                                       "); system("pause>null"); gotoxy(4, 19);
		printf("두수 : 변하긴 내가 무슨..! 진하야 지금까지 날 의심했어?     "); system("pause>null"); gotoxy(4, 19);
		printf("진하 : 똑바로 말 해.                                        "); system("pause>null"); gotoxy(4, 19);
		printf("진하가 권총으로 날 겨눈다.                                  "); system("pause>null"); gotoxy(4, 19);
		printf("1. 손을 든다.    2. 진정시키기                     ");  gotoxy(4, 20);
		int sel_1; scanf("%d", &sel_1);
		if (sel_1 == 1) {
			gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
			printf("나는 두 손을 양 옆으로 들어올렸다.                          "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 진하야...? 이게 뭐하는 짓이야...                      "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 사실대로 말해줘.                                      "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 장난이지? 진하야, 오빠 이런 장난 싫어하는거 알잖아.    "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 총 내려놓자.                                           "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 말 못하는 것 보니 안 들어도 알 것 같다.                "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 오빤 처음부터 계획적으로 나한테 접근한거였네.          "); system("pause>null"); gotoxy(4, 19);
			printf("차가운 총구가 내 이마에 닿았다.                               "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 아니야!! 진하야 내가 다 설명할게!!                     "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 들을 필요도 없다. 잘가.                                "); system("pause>null"); gotoxy(4, 19);
			play_bang();
			printf("빵 - !                                                        "); system("pause>null"); gotoxy(4, 19);
			printf("<BAD ENDING>                                                  "); system("pause>null"); gotoxy(4, 19);
		}
		else if (sel_1 == 2) {
			gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
			printf("나는 권총을 든 진하의 손을 맞잡았다.                           "); system("pause>null"); gotoxy(4, 19);
			printf("권총을 쥔 진하의 손은 아주 차가웠다.                           "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 손 차가운 것 봐. 진하야 진정하고 우리 앉아서 얘기하자.  "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 손 떼. 오빠가 먼저 얘기해.                              "); system("pause>null"); gotoxy(4, 19);
			printf("일단 손을 떼고 진하를 바라보기로 했다.                         "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : ... ...                                                 "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 말 좀 해봐!!! 나한테 왜 그랬어!!!                       "); system("pause>null"); gotoxy(4, 19);
			printf("진하가 울부짖지만 나는 아무 말도 할 수가 없다.                 "); system("pause>null"); gotoxy(4, 19);
			printf("총구 앞에서 몸이 마비가 되어버린것만 같았다.                   "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 미안해... 난 그저...                                    "); system("pause>null"); gotoxy(4, 19);
			printf("눈에서 눈물이 흐른다.                                          "); system("pause>null"); gotoxy(4, 19);
			printf("진하의 눈에서도 눈물이 흐르지만 새빨개진 눈에 광기가 돌았다.   "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 그냥 ... 꺼져                                           "); system("pause>null"); gotoxy(4, 19);
			play_bang();
			printf("빵 - !                                                         "); system("pause>null"); gotoxy(4, 19);
			printf("<BAD ENDING>                                                   "); system("pause>null"); gotoxy(4, 19);
		}
	}
	else if (sel == 2)
	{
		gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
		printf("두수 : 진하야, 내가 정말로 사과할게. 미안해.                "); system("pause>null"); gotoxy(4, 19);
		printf("두수 : 내 생각이 짧았던 것 같아.                            "); system("pause>null"); gotoxy(4, 19);
		printf("두수 : 항상 오빠 옆에 있어달라 해놓고 떨어뜨려서 미안하다.  "); system("pause>null"); gotoxy(4, 19);
		printf("진하 : 오빠...                                              "); system("pause>null"); gotoxy(4, 19);
		printf("진하의 눈에 눈물이 글썽였다.                                "); system("pause>null"); gotoxy(4, 19);
		printf("진하를 품에 안아주었다. 몸이 들썩이며 우는게 느껴졌다.      "); system("pause>null"); gotoxy(4, 19);
		printf("진하 : 흑.. 흐흑                                            "); system("pause>null"); gotoxy(4, 19);
		printf("두수 : 오빠가 미안해... 미안하다                            "); system("pause>null"); gotoxy(4, 19);
		printf("두수 : 미안하다.. 사랑한다..                                "); system("pause>null"); gotoxy(4, 19);
		printf("<HAPPY ENDING>                                              "); system("pause>null"); gotoxy(4, 19);
	}
	else if (sel == 3)
	{
		gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
		printf("두수 : 난 그냥 널 지켜주고 싶어서 그랬던 것 뿐이야.        "); system("pause>null"); gotoxy(4, 19);
		printf("두수 : 그 뿐이야, 진하야. 오해 말아줬으면 좋겠다.          "); system("pause>null"); gotoxy(4, 19);
		printf("두수 : 우리 오랜만에 산책이나 갈...                        "); system("pause>null"); gotoxy(4, 19);
		printf("-!!!                                                       "); system("pause>null"); gotoxy(4, 19);
		printf("진하가 내 뺨을 때렸다. 정신이 하나도 없다.                 "); system("pause>null"); gotoxy(4, 19);
		printf("진하 : 그게 다야? 나한테 그짓거리를 해놓고도 그게 끝이냐고."); system("pause>null"); gotoxy(4, 19);
		printf("진하 : 어떻게... 2년만에 돌아와서는 이것밖에 안돼?         "); system("pause>null"); gotoxy(4, 19);
		printf("진하는 몸을 떨며 나를 노려본다.                            "); system("pause>null"); gotoxy(4, 19);
		printf("1. 진하를 안아준다.    2. 해명한다.                        "); gotoxy(4, 20);
		int sel_2; scanf("%d", &sel_2);
		if (sel_2 == 1) {
			gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
			printf("두수 : 진하야, 내가 정말로 사과할게. 미안해.                "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 내 생각이 짧았던 것 같아.                            "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 항상 오빠 옆에 있어달라 해놓고 떨어뜨려서 미안하다.  "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 진짜.. 너무하다 오빠.                                "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 나 오빠 다시 믿어도 되는거야?                        "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 당연하지. 다시는 오빠 옆에서 떨어지지 마라.          "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 미안하다 사랑한다.                                   "); system("pause>null"); gotoxy(4, 19);
			printf("<HAPPY ENDING>                                              "); system("pause>null"); gotoxy(4, 19);

		}
		else if (sel_2 == 2	) {
			gotoxy(4, 20); printf("                                                       "); gotoxy(4, 19);
			printf("두수 : 진하야, 들어봐. 내가 나쁜 마음 먹고 널 유인한게 아니야."); system("pause>null"); gotoxy(4, 19);
			printf("두수 : <블 랙> 쪽에서 우릴 처음부터 죽이려고 계획한거야.      "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 그럴리가 없어...                                       "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 마지막 사건 처리하다가 내가 그걸 알아버린거고 진하 널.."); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 거짓말하지마!!! 처음부터 나한테 말했어야지...          "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 왜 이제와서... 왜!!!!                                  "); system("pause>null"); gotoxy(4, 19);
			printf("총구가 내 관자놀이에 닿았다.                                  "); system("pause>null"); gotoxy(4, 19);
			printf("진하의 눈엔 핏발이 서고 손에 힘이 들어가는게 느껴졌다.        "); system("pause>null"); gotoxy(4, 19);
			printf("두수 : 지..진하야, 난.. 널 위해 그랬던거..                    "); system("pause>null"); gotoxy(4, 19);
			printf("진하 : 믿을 게 못된다. 잘가.                                  "); system("pause>null"); gotoxy(4, 19);
			play_bang();
			printf("빵 - !                                                         "); system("pause>null"); gotoxy(4, 19);
			printf("<BAD ENDING>                                                   "); system("pause>null"); gotoxy(4, 19);
		}
	}
}