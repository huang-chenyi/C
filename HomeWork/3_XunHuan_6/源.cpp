/*极值问题求解）梯度下降法常用于凸连续函数y = f(x)的极值问题求解。
我们可以将f分别对x求导，得到导数y'。
梯度下降核心内容是对自变量进行不断的更新，使得目标函数不断逼近最小值的过程
x = x - α y'
此处α是梯度下降步长值要选择合适，从而使得函数值y下降。
通过多次迭代求解x，直到算法收敛（连续两次的f值变化值小于某个阈值，比如1e - 6）。
测试函数：y = x ^ 2 + 2 * x + 10。
请给出代码，并给出程序运行后y的值。*/
#include<stdio.h>
#define fy x*x+2*x+10//定义原函数
#define fy1 "y=x^2+2*x+10"
#define fd x*2+2   //定义导函数
int main()
{
	double x = 0, α = 0.1;  //定义步长值
	double f1 = fy;  //存储原函数
	double f2;
	double min = 1e-6;  //定义最低度
	for (int i = 0; i < 1000; i++)  //创建循环
	{
		double gra = fd;
		x = x - α * gra;  //更新x
		f2 = fy;
		double tmp = f2 - f1;
		if (tmp < 0)  //取绝对值
			tmp = -tmp;
		if (tmp < min)  //检查收敛性
		{
			break;
		}
		f1 = f2;  //更新函数值
	}
	printf("函数为：%s\n", fy1);
	printf("极值为：%1f\n", fy);  //输出结果
	printf("此时的x值为：%1f\n", x);
	return 0;
}