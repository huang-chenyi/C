#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("����3������:\n");
	scanf("%d %d %d", &a, &b, &c);
	int *max = &a, *mid = &b, *min = &c;
	if (a < b)
	{
		int temp = *max;
		*max = *mid;
		*mid = temp;
	}
	if (a < c) 
	{
		int temp = *max;
		*max = *min;
		*min = temp;
	}
	if (b < c)
	{
		int temp = *mid;
		*mid = *min;
		*min = temp;
	}
	printf("�Ӵ�С�ֱ�Ϊ:\n%d %d %d\n", *max, *mid, *min);
	return 0;
}
