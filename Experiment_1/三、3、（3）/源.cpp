#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b;
	int i;
	printf("������a��ֵ��\n");
	scanf("%lf", &a);
	printf("������b��ֵ��\n");
	scanf("%lf", &b);     //����a,b,��ֵ
	double result1 = a * a - b * b;  //������ʽǰ�벿�ֵ�ֵ
	if (result1 < 0)
		result1 = -result1;   //�������ֵ
	double result2 = a - b;    //������ʽ��벿�ֵ�ֵ
	if (result2 >= 0)
	{
		i = result2;    //��ֵ����0ʱֱ��ȡ��
	}
	else 
	{
		int j = result2;
		if (j!=result2)
		{
			i = result2;    //��ֵС��0ʱȡ���ټ�1
			i = i - 1;
		}
		else 
		{
			i = result2;
		}
	}
	double result = result1 + i;   //��ֵ��ӵó�����ֵ
	printf("���Ϊ:%lf\n", result);  //��ӡ���
	return 0;
}