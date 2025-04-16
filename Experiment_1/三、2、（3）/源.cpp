#include<stdio.h>
int main()
{
	char c1 = 'T', c2 = 'o', c3 = 'd', c4 = 'a', c5 = 'y'; //初始化变量
	c1 -= 4;
	c2 -= 4;
	c3 -= 4;
	c4 -= 4;
	c5 -= 4;  //计算新字符
	if (c1 < 65)
		c1 += 26;
	if (c2 < 97)
		c2 += 26;
	if (c3 < 97)
		c3 += 26;
	if (c4 < 97)
		c4 += 26;
	if (c5 < 97)
		c5 += 26;
	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);  //输出结果
	return 0;
}			