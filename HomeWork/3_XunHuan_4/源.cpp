/*����������һ����λ��ȫ��ͬ����λ��X����X������6174ʱ��ִ�У�
1���ѹ�������λ�����ĸ���λ�Ӵ�С���У�����һ��������λ��MAX��
2���ѹ��������λ�����ĸ���λ��С�������У�����һ����С����λ��MIN������Ч��λΪ0ʱ��MIN���ܲ�����λ���ˣ�
3��X��MAX - MIN����X������6174ʱ��ת��1������ִ�У��������޲���X�����ܴﵽ6174*/

#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
int main()
{
	int number;
	printf("������һ����λ��ȫ��ͬ����λ������\n");
	scanf("%d", &number);
	if (number < 1000 || number > 9999)
		printf("������Ĳ�����λ����\n");
	int first = number % 10;
	int second = (number / 10) % 10;
	int third = (number / 100) % 10;
	int fourth = number / 1000;
	if (first == second && first == third && first == fourth && second == third && second == fourth && third == fourth)
		printf("�������������λȫ����ȡ�\n");
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