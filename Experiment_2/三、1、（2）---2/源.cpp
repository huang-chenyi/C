#define _CRT_SECURE_NO_WARNINGS  //ȷ��scanf()����������
#include<stdio.h>
int main()
{
	int score, mark;
	printf("�����������\n");
	scanf("%d", &score);
	if (score < 0 || score>100)
		printf("�������ݴ���\n");
	else
	{
		mark = score / 10;
		if (mark == 0)
			printf("grade:E\n");
		if (mark == 1)
			printf("grade:E\n");
		if (mark == 2)
			printf("grade:E\n");
		if (mark == 3)
			printf("grade:E\n");
		if (mark == 4)
			printf("grade:E\n");
		if (mark == 5)
			printf("grade:E\n");
		if (mark == 6)
			printf("grade:D\n");
		if (mark == 7)
			printf("grade:C\n");
		if (mark == 8)
			printf("grade:B\n");
		if (mark == 9)
			printf("grade:A\n");
		if (mark == 10)
			printf("grade:A\n");
	}
	return 0;
}