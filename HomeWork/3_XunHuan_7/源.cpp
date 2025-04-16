#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main()
{
	int n;
	double a, sum = 0, tmp = 0;
	printf("请输入a的值：\n");
	scanf("%lf", &a);  //输入a
	printf("请输入n的值：\n");
	scanf("%d", &n);  //输入n
	for (int i = 0; i < n; i++)  //构建循环
	{
		tmp = tmp * 10 + a;   // 构建每一项
		sum += tmp;   // 累加每一项
	}
	printf("S%d=%f\n", n, sum);  //输出结果
	return 0;
}