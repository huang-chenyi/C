#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main(void)
{
	double x = 0, y;
	printf("请输入x的值：\n");
	scanf_s("%lf", &x);
	if (x < 1)           //函数主体
		y = x;
	if (x >= 1 && x < 10)
		y = 2 * x - 1;
	if (x >= 10)
		y = 3 * x - 11;
	printf("y = %lf\n", y); //结果
	return 0;
}
