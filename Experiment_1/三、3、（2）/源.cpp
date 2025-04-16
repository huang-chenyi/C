#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
#include<math.h>
int main()
{
	double x;
	printf("请输入x的值：\n");
	scanf("%lf", &x);
	double result = sin(x) + cos(x) + 1 / tan(x);
		printf("%lf\n", result);
	return 0;
}