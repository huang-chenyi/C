#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, count = 0;

	do
	{
		printf("请输入整数\n");

		scanf("%d", &x);

		if (x > 0) count++;
	} while (x != 0);
	//whiile(x);也可以达到该效果
	printf("count=%d\n", count);

	return 0;
}
