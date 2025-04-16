#include<iostream>
using namespace std;
int main()
{
	int i = 1, n;
	cout << "Input:" ;//输入函数
	cin>> n;
	cout << "Output:";
	while (i <= n)//创建循环，界定循环范围
	{
		if (n % i == 0)//判断是否为因子
		{
			cout << i ;
			if (i < n)
				cout << ',';
		}
		i++;
	}
	cout << endl;
	return 0;
}