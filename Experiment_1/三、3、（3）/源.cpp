#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b;
	int i;
	printf("请输入a的值：\n");
	scanf("%lf", &a);
	printf("请输入b的值：\n");
	scanf("%lf", &b);     //输入a,b,的值
	double result1 = a * a - b * b;  //计算算式前半部分的值
	if (result1 < 0)
		result1 = -result1;   //计算绝对值
	double result2 = a - b;    //计算算式后半部分的值
	if (result2 >= 0)
	{
		i = result2;    //当值大于0时直接取整
	}
	else 
	{
		int j = result2;
		if (j!=result2)
		{
			i = result2;    //当值小于0时取整再减1
			i = i - 1;
		}
		else 
		{
			i = result2;
		}
	}
	double result = result1 + i;   //两值相加得出最终值
	printf("结果为:%lf\n", result);  //打印结果
	return 0;
}