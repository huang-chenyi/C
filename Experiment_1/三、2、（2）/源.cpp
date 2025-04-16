#include<stdio.h>
int main()
{
	char c1 = 'T', c2 = 'o', c3 = 'd', c4 = 'a', c5 = 'y'; //初始化变量
	c1 += 4;
	c2 += 4;
	c3 += 4;
	c4 += 4;
	c5 += 4;  //计算新字符
	if (c1 > 'Z') 
		c1 -= 26;
	if (c2 > 'z')
		c2 -= 26;
	if (c3 > 'z')
		c3 -= 26;
	if (c4 > 'z')
		c4 -= 26;
	if (c5 > 'z')
		c5 -= 26;
	if (c1 >= 'W' && c1 <= 'Z')
		c1 -= 22;
	if (c2 >= 'W' && c2 <= 'Z')  //增加特殊编码要求
		c2 -= 22;
	if (c3 >= 'W' && c3 <= 'Z')
		c3 -= 22;
	if (c4 >= 'W' && c4 <= 'Z')
		c4 -= 22;
	if (c5 >= 'W' && c5 <= 'Z')
		c5 -= 22;
	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);  //输出结果
	return 0;
}