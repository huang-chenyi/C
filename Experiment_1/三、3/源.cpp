#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
#include<math.h>
int main()
{
	double x;
	printf("������x��ֵ��x������-1����\n");
	scanf("%lf", &x);
	if (x == -1)
		printf("��xֵ�����ϱ��ʽ��Ҫ��\n");
	else
	{
		double result = sqrt(1 + 1 / (x + 1 / (x + 1)));
		printf("%lf\n", result);
	}
	return 0;
}