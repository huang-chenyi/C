#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i=1;
	double score, sum = 0;

	while (i <= 4)
	{
		printf("请输入分数:\n");

		scanf("%lf", &score);

		sum = sum + score;

		i++;
	}
	printf("平均成绩=%f\n", sum /4);

	return 0;
}
