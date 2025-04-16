#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include <stdio.h>
int main(void)
{
	int k = 0;
	while (k < 10)
	{
		if (k < 1)
			continue;
		if (k == 5)
			break;
		k++;
	}
	printf("%d", k);
	return 0;
}


#include<iostream>
using namespace std;
int main(void)
{



	return 0;
}


