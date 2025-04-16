#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
#include<math.h>
int main()
{
	double x;
	printf("请输入x的值（x不等于-1）：\n");
	scanf("%lf", &x);
	if (x == -1)
		printf("该x值不符合表达式的要求\n");
	else
	{
		double result = sqrt(1 + 1 / (x + 1 / (x + 1)));
		printf("%lf\n", result);
	}
	return 0;
}