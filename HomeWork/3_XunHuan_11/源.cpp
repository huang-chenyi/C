#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int line, i, j;
	printf("������������");
	scanf("%d", &line);
	for (i = 1; i <= line; i++)
	{
		for (j = line - i; j >= 1; j--)
		{   //���*ǰ�Ŀո�
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{   //���*
			printf("*");
		}
		printf("\n");//����
	}
	return 0;
}