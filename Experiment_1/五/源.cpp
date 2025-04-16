#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main()
{
	double number;
	printf("请输入一个小于1的并且只有3位尾数的实数:\n");
	scanf_s("%lf", &number);   //读取数值
	if (number >= 1 || number == 0)
		printf("该数值有误");  //判断数值是否小于1且有尾数
	else 
	{
		if(number < 0)  //将负数转化为正数
			number = -number;
		int tmp = number * 1000;
		int x = number * 10000;
		if (tmp * 10 != x)    //判断尾数是否仅为3位
			printf("您输入的实数超过了3位尾数");
		else
		{
			int a, b, c;
			a = tmp / 100 % 10;
			b = tmp / 10 % 10;   //读取各个位的数字
			c = tmp % 10;
			printf("0  %d  %d  %d\n", a, b, c); //输出结果
		}
	}
	return 0;
}