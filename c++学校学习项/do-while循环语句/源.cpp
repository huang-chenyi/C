#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, count = 0;

	do
	{
		printf("����������\n");

		scanf("%d", &x);

		if (x > 0) count++;
	} while (x != 0);
	//whiile(x);Ҳ���Դﵽ��Ч��
	printf("count=%d\n", count);

	return 0;
}
