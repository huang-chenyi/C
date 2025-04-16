#include<iostream>
using namespace std;
int main(void)
{
	int i, j = 0, sum = 0, k;
	int digit[11];  //定义储存素数的数组
	for (i = 1000; i > 2; i--)//从最大开始遍历1000以内的整数
	{
		if (i % 2 != 0)  //判断是否为奇数
		{
			for (int l = i - 1; l > 1; l--)  
			{
				k = 1;  //初始k=1
				if (i % l == 0)  //检查是否为素数
				{
					k = 0;  //不是素数，赋k=0
					break;
				}
			}
			if (k == 1)  //k=1时，即该整数为素数
			{
				j++;
				digit[j] = i; //存储该素数
				sum += i;
				if (j == 10)   //达到10个数据时退出循环
					break;
			}
		}
	}
	if (j < 10)  //1000以内不够10个素数的情况
		cout << "1000以内素数不足10个.";
	else
	{
		for (int k = 1; k <= 10; k++)  //最终输出结果
		{
			cout << digit[k] << '+';
		}
		cout << "\b" << '=' << sum << endl;
	}
	return 0;
}