#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	//计算a的绝对值
	printf("请输入a:");

	scanf("%d", &a);

	b = a;

	{
		if (a < 0)
	
		a = -a;
	}

	printf("|%d|=%d\n", b, a);

	return 0;

}