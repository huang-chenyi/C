#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int digits[20] = { 1,1 };//��ʼ������ǰ����
	for (int i = 2; i < 20; i++)  //����ǰ20�������������
	{
		digits[i] = digits[i - 1] + digits[i - 2];
	}
	for (int j = 0; j < 20; j++)
	{
		if (j % 5 == 0)
		{
			printf("\n");
		}
		printf("%d\t", digits[j]);
	}
	printf("\n");
	return 0;
}