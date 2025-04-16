#include<iostream>
#define line 50
using namespace std;
//声明函数
int Yang(int n);
//主函数
int main(void)
{
	int n;
	cout << "请输入n的值：";
	cin >> n;
	Yang(n);
	return 0;
}
//定义函数
int Yang(int n)
{
	int i, j;
	int m;   //应该有n+1行，2n+1列
	m = 2 * n + 1;
	int digit[line][line] = { {0} };
	digit[0][n] = 1;  //部分数据的初始化
	digit[n][0] = 1;
	for (i = 0; i <= n; i++)
	{    //初始化金字塔两端的数字1
		for (j = 0; j <= m; j++)
		{
			digit[i + 1][j + 1] = digit[i][j] + digit[i][j + 2];
		}
	}
	for (i = 0; i <= n; i++)
	{    //根据杨辉三角的规律得出其它部分的数字
		for (j = 0; j <= m; j++)
		{
			if (digit[i][j] == 0)
			{    //将数组中的1替换为空格输出
				cout << ' ';
			}
			if (digit[i][j] != 0)
			{     //输出数组中非0数字
				cout << digit[i][j];
			}
		}
		cout << endl;  //控制格式 换行
	}
	return 0;
}


