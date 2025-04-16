//编写函数，将一个数据插入有序数组中，要求插入后数组仍然有序。
#include <iostream>
using namespace std;
//声明函数
void digits(int num[], int number);
//主函数
int main(void)
{
	int number;
	int num[11] = { 1,2,5,5,8,9,12,19,23,25 };
	cout << "输入一个整数:";
	cin >> number;
	cout << "原数组为:";
	for (int i = 0; i < 10; i++)
		cout << num[i] << " ";
	cout << endl;
	digits(num, number);
	cout << "插入数据后数组为:";
	for (int i = 0; i < 11; i++)
		cout << num[i] << " ";
	cout << endl;
}
//定义函数
void digits(int num[], int number)
{
	int i;
	for (i = 0; i < 10; i++)
		if (num[i] > number)
			break; // 找到插入位置
	// 将后面的元素向后移动一位
	for (int j = 10; j > i; j--)
		num[j] = num[j - 1];
	num[i] = number;// 插入新元素
}