#include <stdio.h>
int main()
{
	int c = 15, h = 20;
	//第一种方法
	float s;

	s = 1.0 / 2 * c * h;

	printf("面积=%f", s);
	//另一种方法如下
	printf("面积=%f", 1.0 / 2 * c * h);

	return 0;

}