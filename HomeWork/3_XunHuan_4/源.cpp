/*键盘上输入一个四位不全相同的四位数X，当X不等于6174时，执行：
1）把构成这四位数的四个数位从大到小排列，构成一个最大的四位数MAX；
2）把构成这个四位数的四个数位从小到大排列，构成一个最小的四位数MIN（当有效数位为0时，MIN可能不是四位数了）
3）X＝MAX - MIN；当X不等于6174时，转回1）继续执行，经过有限步后，X最终能达到6174*/

#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main()
{
	int number;
	printf("请输入一个四位不全相同的四位整数：\n");
	scanf("%d", &number);
	if (number < 1000 || number > 9999)
		printf("您输入的不是四位数。\n");
	int first = number % 10;
	int second = (number / 10) % 10;
	int third = (number / 100) % 10;
	int fourth = number / 1000;
	if (first == second && first == third && first == fourth && second == third && second == fourth && third == fourth)
		printf("您输入的数字四位全部相等。\n");
	else
	{
		int arr[4] = { first,second,third,fourth };
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4 - 1 - i; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				}
			}
		}
		int MAX = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
		int MIN = arr[3] * 1000 + arr[2] * 100 + arr[2] * 10 + arr[0];
		int X = MAX - MIN;
	}
	return 0;
}