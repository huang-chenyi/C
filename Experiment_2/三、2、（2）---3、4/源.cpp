#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n = 1; //定义变量
	double sum = 0;
	double pi;
	while (1.0 / (n * n) >= 0.0001)//创建循环，界定范围
	{
		sum += 1.0 / (n * n);  //求值
		n++;
	}
	pi = sqrt(sum * 6);  //求Π
	cout << "PI=" << pi << ";" << "n=" << n << endl;
	return 0;
}