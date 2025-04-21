#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int score, mark;
	scanf("%d", &score);
	mark = score / 10;
	switch (mark)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("grade:E\n"); break;
	case 6:printf("grade:D\n"); break;
	case 7:printf("grade:C\n"); break;
	case 8:printf("grade:B\n"); break;
	case 9:
	case 10:printf("grade:A\n"); break;
	default:printf("Input error!\n");
	}
	return 0;
}