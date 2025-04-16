#include <stdio.h>

void main()
{
	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\116';
	//初始化变量
	printf("a%c b%c\tc%c\tabc\n", c1, c2, c3);
	//输出变量
	printf("\t\b%c%c", c4, c5);
}
