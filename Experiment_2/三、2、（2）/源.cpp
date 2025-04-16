#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;  //定义变量
	double sum = 0;
	float pi;
	cout << "请输入n的值:";
	cin >> n;
	for (int i = 1; i <= n; i++)  
	{
		sum += 1.0 / (i * i);//循环函数并求和
	}
	pi = sqrt(sum * 6);  //取Π的值
	cout << "PI=" << pi <<endl;
	return 0;
}