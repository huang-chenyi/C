#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
int main(void)
{
	int num = 0, tmp, x, sum = 0, tnp, y = 1;
	printf("������һ��������5λ����������\n");
	scanf("%d", &num);
	if (num > 0 && num < 100000)
	{
		tmp = num;
		int i = 0;
		while (tmp != 0)
		{
			x = tmp % 10;
			tmp /= 10;
			i++;
		}
		printf("������Ϊ%dλ����\n", i);
		tmp = num;
		while (tmp != 0)
		{
			x = tmp % 10;
			tnp = x * y;
			sum += tnp;
			y *= 10;
			tmp /= 10;
			i++;
		}
		printf("%d\n", sum);
		tmp = num;
		while (tmp != 0)
		{
			int i = 0;
			x = tmp % 10;
			printf("%d", x);
			tmp /= 10;
			i++;
		}
	}
	else
		printf("�������ֵ����\n");
	return 0;
}