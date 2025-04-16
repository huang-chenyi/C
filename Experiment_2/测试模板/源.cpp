

#include <stdio.h>
int main() 
{
	char arr[10]; // 存储输入的字符
	int small = 0; // 小写字母个数
	int digit = 0; // 数字个数
	int other = 0; // 其他字符个数
	//int i;  //删掉
	printf("请输入10个字符：\n");
	for (int i = 0; i < 10; i++) 
	{	// 读取10个字符
		scanf("%c", &arr[i]);
	}
	for (int i = 0; i < 10; i++) 
	{			//根据ASCII码判断字符类型
		if (arr[i] >= 97 && arr[i] <= 122)//判断小写字母
			small++;
		else if (arr[i] >= 48 && arr[i] <= 57)//判断数字
			digit++;
		else  // 其他字符
			other++;
	}
	// 输出结果
	printf("小写字母个数：%d\n", small);
	printf("数字个数：%d\n", digit);
	printf("其他字符个数：%d\n", other);
	return 0;
}





/*
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
	cout << "数字的个数为：" << digit << endl
		<< "大写字母的个数为：" << letters_big << endl
		<< "小写字母的个数为：" << letters_small << endl
		<< "空格的个数为：" << space << endl
		<< "其他字符的个数为：" << others << endl;
	return 0;
}
*/