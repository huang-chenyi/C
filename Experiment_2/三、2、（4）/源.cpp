#include<iostream>
using namespace std;
int main(void)
{
	char ch;
	int digit = 0;
	int	letters_big = 0, letters_small = 0;
	int space = 0;
	int others = 0;
	cout << "请输入一串字符（以回车键结束）：";
	ch = getchar();		//接受所有输入字符
	while (ch != '\n')
	{		//根据ASCII码判断字符类型
		if (ch >= 48 && ch <= 57)//判断数字
			digit++;
		else if (ch >= 65 && ch <= 90)//判断大写字母
			letters_big++;
		else if (ch >= 97 && ch <= 122)//判断小写字母
			letters_small++;
		else if (ch == ' ')//判断空格
			space++;
		else			//其他字符
			others++;
		ch = getchar();  //按循环依次取出单个输入的字符
	}
	cout << "数字的个数为：" << digit <<endl
		 << "大写字母的个数为：" << letters_big <<endl
		 << "小写字母的个数为：" << letters_small <<endl
		 << "空格的个数为：" << space <<endl
		 << "其他字符的个数为：" << others <<endl;
	return 0;
}