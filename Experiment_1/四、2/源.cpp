#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("请输入整数a,b,c的值:\n");
	scanf("%d%d%d", &a, &b, &c);  //读取a,b,c
	d = a;
	a = b;
	b = c;
	c = d;
	printf("a=%d\nb=%d\nc=%d\n", a, b, c);  //打印结果
	return 0;
}