#include<stdio.h>
int main()
{
	int peach = 1;  //设置桃子的最终数值
	for (int i = 1; i <= 9; i++)  //设置循环
	{
		peach = 2 * (peach += 1);  //逆推法计算每次桃子的数量
	}
	printf("第一天一共摘下%d个桃子\n", peach);  //打印结果
	return 0;
}