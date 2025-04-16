#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include <stdio.h>
int main()
{
	char a, b, c;
	printf("输入3个字符型数据:\n");
	scanf("%c %c %c", &a, &b, &c);
	char *max = &a, *mid = &b, *min = &c;
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
	printf("从大到小分别为:\n%c %c %c\n", *max, *mid, *min);
	return 0;
}
