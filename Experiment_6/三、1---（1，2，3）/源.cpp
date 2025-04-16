#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#define tt struct Time
int main(void)
{   //声明结构类型
	tt
	{
		int year;
		int month;
		int day;
		int sum_day;
	}s1 = { 0 };
	printf("输入今天的日期:");
	scanf("%d %d %d", &s1.year, &s1.month, &s1.day);
	s1.sum_day = s1.day;
	if (s1.month >= 2)
	{
		if ((s1.year % 4 == 0 && s1.year % 100 != 0) || (s1.year % 400 == 0))
			s1.sum_day += 28;
		else
			s1.sum_day += 27;
	}
	int num = s1.month - 1;
	while (num)
	{
		switch (num)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:s1.sum_day += 31; break;
		case 4:
		case 6:
		case 9:
		case 11:s1.sum_day += 30; break;
		default:break;
		}
		num--;
	}
	printf("The day is the %d day\n", s1.sum_day);
	return 0;
}