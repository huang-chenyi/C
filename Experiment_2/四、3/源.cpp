#include<iostream>
using namespace std;
int main(void)
{
	int digits[5] = { 0 };//数组存储各位数字
	int i, num, j; //i为数值，num临时存储，j为位数
	int tmp;  //tmp用于判断数据是否满足题意
	int l = 0; //l用于控制每行输出数字个数
	for (i = 1; i < 10000; i++)
	{  //对1~10000依次检查
		num = i;  //存储当前次数数值
		j = 0;  //重置数字位数值
		while (num > 0)  //取出数字的各位数字
		{
			digits[j++] = num % 10;
			num = num / 10;
		}
		tmp = 1;  //假定当前数字符合要求
		for (int k = 0; k < j - 1; k++)
		{   //判断每位数字是否是高位小于低位
			if (digits[k + 1] > digits[k])
			{   //不满足题意，令tmp为0
				tmp = 0;
				break;
			}
		}
		if (tmp == 1)
		{  //当tmp为1，即满足题意时输出结果
			cout << i << ' ';
			l++;
			if (l % 20 == 0)
			{   //控制每行输出数字个数
				cout << '\n';
			}
		}

	}
	cout << endl;//换行
	return 0;
}