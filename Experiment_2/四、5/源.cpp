#include<iostream>
using namespace std;
int main(void)
{
    int digits[200] = {0};
    int n;
    cout << "请输入该数列中数的个数：";
    cin >> n;
    for (int i = 0; i < n; i++)
    {                          //输入数据
        cout << "请输入数列的第" << i+1 << "个数:";
        cin >> digits[i];
    }
	cout << "(" << digits[0] << "," << digits[1];
	for (int i = 2; i < n; i++) 
	{
		if (digits[i - 2] > digits[i - 1])
		{                         //正序数列情况
			if (digits[i] > digits[i - 1])  //顺序变化
			{
				cout << "),(" << digits[i - 1] << "," << digits[i];
			}
			else        //未变化
			{
				cout << "," << digits[i];
			}
		}
		if (digits[i - 2] < digits[i - 1])
		{                         //正序数列情况
			if (digits[i] > digits[i - 1])  //未变化
			{
				cout << "," << digits[i];
			}
			else      //顺序变化
			{
				cout << "),(" << digits[i - 1] << "," << digits[i];
			}
		}
	}
	cout << ")";
	return 0;
}