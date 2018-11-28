#include"rank.h"

int R_count;
void input_rank(double ptime)
{
	char name[15];
	Rank p[11];
	printf("��ŷ�� ����� �̸��� �Է��ϼ���: ");
	scanf("%s", name);
	R_count = 0;
	FILE *f = fopen("ranking.txt", "r");
	char buff[100];
	while (fgets(buff, 99, f)) {
		char * tok = strtok(buff, " ");
		p[R_count].name = strdup(tok);
		tok = strtok(NULL, " ");
		p[R_count].playtime = atof(tok);
		R_count++;
	}
	fclose(f);
	p[R_count].name = strdup(name);
	p[R_count].playtime = ptime;
	R_count++;
	//����
	for (int i = 0; i < R_count; i++) {
		for (int j = i; j < R_count; j++) {
			if (p[i].playtime > p[j].playtime) {
				double tmp = p[j].playtime;
				p[j].playtime = p[i].playtime;
				p[i].playtime = tmp;
				char *tmpc;
				tmpc = p[j].name;
				p[j].name = p[i].name;
				p[i].name = tmpc;
			}
		}
	}
	//����
	FILE *fpp = fopen("ranking.txt", "w");
	for (int i = 0; i < 10; i++) {
		if (i >= R_count)
			break;
		fprintf(fpp, "%11s %f\n", p[i].name, p[i].playtime);
	}
	fclose(fpp);
}
void print_rank()
{
	system("cls");
	printf("��ŷ�� ���ðڽ��ϱ�?(Y/N): ");
	getchar();
	char c;
	scanf("%c", &c);
	printf("rank    name  playtime(sec)\n\n");
	if (c == 'Y' || c == 'y') {
		FILE *fp = fopen("ranking.txt", "r");
		char buff[100];
		int rank = 1;
		int R_count = 0;
		while (fgets(buff, 99, fp)) {
			printf("%d %s\n", rank++, buff);
			R_count++;
		}
		fclose(fp);
		if (R_count == 0)
		{
			printf("��ϵ� ������ �����ϴ�.\n");
			return;
		}
	}
}