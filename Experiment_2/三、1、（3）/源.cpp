#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main(void)
{
	int num = 0, tmp, x, sum = 0, tnp, y = 1;
	printf("请输入一个不多于5位的正整数：\n");
	scanf("%d", &num);
	if (num > 0 && num < 100000)
	{
		tmp = num;
		int i = 0;
		while (tmp != 0)
		{
			x = tmp % 10;
			tmp /= 10;
			i++;
		}
		printf("该数据为%d位数。\n", i);
		tmp = num;
		while (tmp != 0)
		{
			x = tmp % 10;
			tnp = x * y;
			sum += tnp;
			y *= 10;
			tmp /= 10;
			i++;
		}
		printf("%d\n", sum);
		tmp = num;
		while (tmp != 0)
		{
			int i = 0;
			x = tmp % 10;
			printf("%d", x);
			tmp /= 10;
			i++;
		}
	}
	else
		printf("输入的数值有误！\n");
	return 0;
}