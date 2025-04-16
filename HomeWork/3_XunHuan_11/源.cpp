#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int line, i, j;
	printf("请输入行数：");
	scanf("%d", &line);
	for (i = 1; i <= line; i++)
	{
		for (j = line - i; j >= 1; j--)
		{   //输出*前的空格
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{   //输出*
			printf("*");
		}
		printf("\n");//换行
	}
	return 0;
}