/*
#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include <stdio.h>
int main(void)
{

	return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main(void)
{



	return 0;
}
*/




#include<stdio.h>
int main ()
{		
	int num = 0;
	for (int i = 100; i < 200; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
			num = num + 1;
		}
		if (num % 10 == 0)
			printf("\n");
	}

}