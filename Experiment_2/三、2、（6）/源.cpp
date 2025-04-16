#include<iostream>
using namespace std;
int main(void)
{
	int line=1;
	for (int i = 1; i <= 11; i++)
	{
		for (int j = 40 - 4 * (i - 1); j >= 1; j--)//输出数字前空格
			cout << ' ';
		for (int j = 1; j <= line; j = j + 2)  //打印中心数轴前数字
		{
			if (j >= 10)
				cout << j << ' ' << ' ';  //控制数字间距
			else
				cout << j << ' ' << ' ' << ' ';
		}
		for (int j = line - 2; j >= 1; j = j - 2) //打印中心数轴后数字
		{
			if (j >= 10)
				cout << j << ' ' << ' ';
			else
				cout << j << ' ' << ' ' << ' ';
		}
		line = line + 2;  //得到中心数轴数据
		cout << endl;  //换行
	}
	return 0;
}