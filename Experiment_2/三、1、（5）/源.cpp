#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
	{
		double x, y, z = 0.0;   //�����Ա����������
		printf("������x��y��ֵ\n");
		scanf(" %lf %lf", &x, &y);//�����Ա�����ֵ
		if (x < 0 && y < 0)
		{
			z = exp(x + y);
		}
		else if (x + y >= 1 && x + y < 10)
			z = log(x + y); 
		else
		{
			z = log10(fabs(x + y) + 1);//ͨ��x,y֮��Ĺ�ϵȷ��z�ı��ʽ
		}
		printf("%5.9f",z);   //���z
		return 0;
	}	