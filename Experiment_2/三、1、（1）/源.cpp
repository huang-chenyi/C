#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
int main(void)
{
	double x = 0, y;
	printf("������x��ֵ��\n");
	scanf_s("%lf", &x);
	if (x < 1)           //��������
		y = x;
	if (x >= 1 && x < 10)
		y = 2 * x - 1;
	if (x >= 10)
		y = 3 * x - 11;
	printf("y = %lf\n", y); //���
	return 0;
}
