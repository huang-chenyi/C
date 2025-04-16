#define _CRT_SECURE_NO_WARNINGS  //确保scanf()的正常运行
#include<stdio.h>
int main()
{
	int score, mark;
	printf("请输入分数：\n");
	scanf("%d", &score);
	if (score < 0 || score>100)
		printf("输入数据错误\n");
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