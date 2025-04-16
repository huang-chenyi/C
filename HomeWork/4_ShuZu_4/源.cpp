#include<stdio.h>
#include<math.h>
int main()
{
	//声明变量
	float x[20] = { 0.2638, 0.1455, 0.1361, 0.8693, 0.5797, 0.5499, 0.1450, 0.8530, 0.6221, 0.3510, 0.5132, 0.4018, 0.0760, 0.2399, 0.1233, 0.1839, 0.2400, 0.4173, 0.0497, 0.9027 };
	float y[20] = { 3.3954 ,2.9326, 2.9013, 4.9482, 4.4429, 4.1229, 2.7920, 5.3294, 4.3212, 3.4351, 3.9810, 3.5358, 2.5039, 3.7249, 3.2011, 3.1132, 2.9684, 3.5787, 2.6137, 5.3664 };
	float w = 0.0, b = 0.0, L1 = 0.0, L2 = 0.0;
	float alpha = 0.01;
	int n = 20;
	float sum0 = 0.0, sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
	float close = 1e-6;
	//计算的循环
	while (1)
	{
		sum0 = 0.0;
		sum1 = 0.0;
		for (int i = 0; i < 20; i++)
		{   //梯度计算
			sum0 += x[i] * x[i];
			sum1 += x[i] * (y[i] - w * x[i] - b);
		}
		sum2 = 0.0;
		for (int i = 0; i < 20; i++)
			sum2 += y[i] - w * x[i];

		float w1 = 2 * (w * sum0 - sum1) / n;
		float b1 = 2 * (b * n - sum2) / n;
		w -= alpha * w1;
		b -= alpha * b1;
		//计算L1的分子
		for (int i = 0; i < 20; i++)
			sum3 += ((w * x[i] + b - y[i]) * (w * x[i] + b - y[i]));
		L1 = sum3 / n;
		//循环结束条件
		if (fabs(L1 - L2) < close)
		{
			break;
		}
		L2 = L1;
	}
	printf("w:%f\nb:%f\nL:%f", w, b, L1);
	return 0;
}