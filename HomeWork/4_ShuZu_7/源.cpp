#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define n 6
int main()
{
	int digits[n] = { 0 };
	int i, j, k, l;
	for (i = 1; i < n + 1; i++)  //输入数据
	{
		printf("请输入第%d个整数：", i);
		scanf("%d", &digits[i - 1]);
	}
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (digits[k] < digits[j])
				k = j;
		}
		if (k != 1)
		{
			l = digits[i];
			digits[i] = digits[k];
			digits[k] = l;
		}
	}
	printf("数据从大到小依次为:");
	for (i = 0; i < n; i++)  //输出结果
	{
		printf("%d ", digits[i]);
	}
	printf("\n");
	return 0;
}