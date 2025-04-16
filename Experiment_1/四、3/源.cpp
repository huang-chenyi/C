#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main()
{
	int number;
	printf("请输入一个四位整数:\n");  //输入数据
	scanf("%d", &number);
	for (int i = 0; i < 4; i++)  //建立循环
	{
		int num = number % 10;  //读取个位数
		printf("%d ", num);  
		number = number / 10;  //删去当前个位数数值
	}
	return 0;
}