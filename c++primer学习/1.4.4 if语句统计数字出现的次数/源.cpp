#include<iostream>
using namespace std;
int main()
{
	int num = 0, number = 0;
	if (cin >> num)	//读取第一个数，确保有数字可以处理
	{
		int ge_shu = 1;
		while (cin >> number)
		{
			if (number == num)
			{
				++ge_shu;
			}
			else
			{
				cout << num << " occurs " 
					 << ge_shu << " times" << endl;
				num = number;
				ge_shu = 1;
			}
		}   //while语句结束
		    //打印文件中最后一个值的个数
		cout << num << " occurs "
			 << ge_shu << " times" << endl;
	}   //if语句结束
	return 0;
}