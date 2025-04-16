#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
	{
		double x, y, z = 0.0;   //定义自变量，因变量
		printf("请输入x，y的值\n");
		scanf(" %lf %lf", &x, &y);//输入自变量的值
		if (x < 0 && y < 0)
		{
			z = exp(x + y);
		}
		else if (x + y >= 1 && x + y < 10)
			z = log(x + y); 
		else
		{
			z = log10(fabs(x + y) + 1);//通过x,y之间的关系确定z的表达式
		}
		printf("%5.9f",z);   //输出z
		return 0;
	}	