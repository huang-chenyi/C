#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define n 6
int main()
{
	int digits[n] = { 0 };
	int i, j, k;
	for (i = 1; i < n + 1; i++)  //��������
	{
		printf("�������%d��������", i);
		scanf("%d", &digits[i - 1]);
	}
	for (i = 0; i < n + 1; i++)  //��������
	{
		for (j = 1; j < n + 1; j++)
			if (digits[j - 1] < digits[j])
			{
				k = digits[j - 1];
				digits[j - 1] = digits[j];
				digits[j] = k;
			}
	}
	printf("���ݴӴ�С����Ϊ:");
	for (i = 0; i < n; i++)  //������
	{
		printf("%d ", digits[i]);
	}
	printf("\n");
	return 0;
}