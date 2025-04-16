#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main()
{
	int year, month, day, days = 0;
	printf("请输入年份：\n");
	scanf("%d", &year);
	printf("请输入月份：\n");
	scanf("%d", &month);
	printf("请输入日期：\n");
	scanf("%d", &day);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)  //判断是否为闰年
	{
		days = 29;  //赋值闰年2月的天数
	}
	else  //平年的情况
	{
		days = 28;  //赋值平年2月的天数
	}
	switch (month)  //对月份进行开关语句的调用
	{
	case 1:days = 0; break;	   //赋值为0
	case 2:days = 31; break;   //赋值1月的天数
	case 3:days += 31; break;  //加上1月的天数
	case 4:days += 62; break;  //加上1，3月的天数
	case 5:days += 92; break;  //加上1，3，4月的天数
	case 6:days += 123; break; //以下同理
	case 7:days += 153; break;
	case 8:days += 184; break;
	case 9:days += 215; break;
	case 10:days += 245; break;
	case 11:days += 276; break;
	case 12:days += 306; break;
	}
	days = days + day;   //加上输入的日期数，得到总天数
	printf("%d月%d日是%d年的第%d天\n", month, day, year, days);  //输出结果
	return 0;
}