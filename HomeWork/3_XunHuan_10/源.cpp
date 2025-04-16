#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main()
{
	int n, sum = 0, tmp = 1, tnp = 0, k;  //定义变量
	printf("输入n的值：\n");
	scanf("%d", &n);  //输入n的值
	for (int i = 1; i <= n; i++)  //创建循环
	{
		tmp *= i;  //第一部分n!的值
		tnp += i;  //第二部分（1+2+…+n）的值
		k = tmp * tnp;  //临时存储一项的值
		sum += k;  //加入总和
	}
	printf("表达式的值为：%d\n", sum);  //输出结果
	return 0;
}