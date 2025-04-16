#include<stdio.h>
int main()
{
	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a'; //初始化变量
	c1 += 4;
	c2 += 4;
	c3 += 4;
	c4 += 4;
	c5 += 4;  //计算新字符
	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);  //输出结果
	return 0;
}