//请编写程序，根据输入的年份和月份，判断该月有多少天。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year, month;	      //确认整型变量
	printf("请输入年份：\n");	  //人机交互
	scanf("%d", &year);	      //输入年份
	printf("请输入月份：\n");	  //人机交互
	scanf("%d", &month);	  //输入月份

	if (month < 1 || month > 12)    //检查数据的有效性
	{
		printf("您输入的月份有误!\n");
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))     //判断年份是否为闰年
	{
		if (month == 2)
			printf("%d年%d月有29天\n", year, month);	    //判断月份是否为闰年2月
	}
	else
	{
		if (month == 2)
			printf("%d年%d月有28天\n", year, month);		 //判断月份是否为平年2月
	}
	switch (month)		 //开关语句判断除2月的月份
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("%d年%d月有31天\n", year, month); break;
	case 4:
	case 6:
	case 9:
	case 11:printf("%d年%d月有30天\n", year, month); break;
	}
	return 0;   //返回0值
}