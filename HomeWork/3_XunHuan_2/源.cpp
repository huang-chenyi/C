/*根据PPT上求解最大公约数的方法（该方法为辗转求余法），
求解两个正整数的最大公约数。*/

#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main(void)
{
	int a, b, r;      //定义变量
	printf("请输入两个正整数:\n");    //人机交互，提示使用者输入数值
	scanf("%d%d", &a, &b);     //接收输入数据
	while (b != 0)    //创建循环
	{
		r = a % b;
		a = b;
		b = r;         //求值过程
	}
	printf("最大公约数是：%d\n", a);           //输出结果
}