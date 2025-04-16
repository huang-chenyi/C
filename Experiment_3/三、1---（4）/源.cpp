#include<iostream>
using namespace std;
#define number 20
int main(void)
{
	int digits[number] = { 0 };
	for (int i = 0; i < number; i++)
	{      //从键盘上获取数组元素数据
		cout << "请输入第" << i + 1 << "个数:";
		cin >> digits[i];
	}
	int max, min, temp;
	int num1 = 0, num2 = 0;
	max = digits[0];
	min = digits[0];
	for (int i = 0; i < number - 1; i++)
	{
		if (digits[i + 1] > max)
		{   //判断最大值
			max = digits[i + 1];
			num1 = i + 2;  //记录最大值的位置
		}
		if (digits[i + 1] < min)
		{  //判断最小值
			min = digits[i + 1];
			num2 = i + 2;   //记录最小值的位置
		}
	}
	cout << "数组中的初始元素为:";
	for (int i = 0; i < number; i++)
	{  //输出原始的10个元素
		cout << digits[i] << " ";
	}
	cout << endl;  //换行
	cout << "最大值:" << max << " "  //输出结果
		<< "是数组的第" << num1 << "个元素" << " "
		<< "最小值:" << min << " "
		<< "是数组的第" << num2 << "个元素";
	cout << endl;
	return 0;
}