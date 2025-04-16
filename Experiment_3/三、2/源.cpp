#include<iostream>
using namespace std;
int main(void)
{   //34
	char str[] = "Hello, I am Huang Chenyi from NCU.";
	char ch;
	cout << "请输入任意一个字符:";
	cin >> ch;
	bool k = 0;  //记录是否存在
	int tmp;  //存储所在的位置
	for (int i = 0; i < 34; i++)
	{
		if (str[i] == ch)
		{
			k = 1;
			tmp = i;
			break;
		}
	}
	if (k == 1)
	{
		cout << "该字符在给定的字符串中，是第"
			 << tmp + 1 << "个元素" << endl;
	}
	else
	{
		cout << "该字符不在给定的字符串中" << endl;
	}
	return 0;
}