#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
#include<math.h>
int main()
{
	double x;
	printf("������x��ֵ��\n");
	scanf("%lf", &x);
	double result = sin(x) + cos(x) + 1 / tan(x);
		printf("%lf\n", result);
	return 0;
}