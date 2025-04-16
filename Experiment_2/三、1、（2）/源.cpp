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
		default:printf("输入数据错误！\n"); break;
		}
	}
	return 0;
}
