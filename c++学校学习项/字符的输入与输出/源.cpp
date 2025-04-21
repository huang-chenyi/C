#include <stdio.h><iostream>
int main()
{

	char c1 , c2;

	c1 = getchar();

	printf("c1=%c\n", c1);
	//作用是在键盘上输入一字符后，按回车可以在屏幕上输出该字符
	c2 = getchar();
	getchar();
	printf("c2=%c\n", c2);
	//不可直接输入一个字符后就回车，应该完全输入应输入的（两个字符）后再回车
	
	//下面是对上方问题的解决方法，即可以直接输入一个字符后就回车，再进行下一个字符的输入
	char b1, b2;

	b1 = getchar();

	getchar();

	printf("b1=%c\n", b1);
	
	b2 = getchar();

	getchar();

	printf("b2=%c\n", b2);
	
	
	
	return 0;

}