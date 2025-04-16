#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
#define PI 3.14
int main()
{
	double r  ,c ;
	printf("请输入圆的半径:\n");
	scanf("%lf", &r);   //输入半径
	c = 2 * PI * r;    //计算圆的周长
	printf("圆的周长为%lf:\n圆的面积为%lf:\n", c, r);  //打印结果
	return 0;
}