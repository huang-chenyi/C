#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, sum = 0;
		//for(i = 1; i <= 100; sum+=i++,i++)
	for (i = 1; i <= 100; i++)
		//int i=1---for(;i<=100;i++)---sum+=i++
		sum = sum + i;
		//for(i=1;i<=100;)---sum=sum+i;i++;»òÕßsum+=i++;
	printf("sum=%d", sum);

	return 0;
}
