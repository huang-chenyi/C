#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
int main()
{
	int year, month, day, days = 0;
	printf("��������ݣ�\n");
	scanf("%d", &year);
	printf("�������·ݣ�\n");
	scanf("%d", &month);
	printf("���������ڣ�\n");
	scanf("%d", &day);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)  //�ж��Ƿ�Ϊ����
	{
		days = 29;  //��ֵ����2�µ�����
	}
	else  //ƽ������
	{
		days = 28;  //��ֵƽ��2�µ�����
	}
	switch (month)  //���·ݽ��п������ĵ���
	{
	case 1:days = 0; break;	   //��ֵΪ0
	case 2:days = 31; break;   //��ֵ1�µ�����
	case 3:days += 31; break;  //����1�µ�����
	case 4:days += 62; break;  //����1��3�µ�����
	case 5:days += 92; break;  //����1��3��4�µ�����
	case 6:days += 123; break; //����ͬ��
	case 7:days += 153; break;
	case 8:days += 184; break;
	case 9:days += 215; break;
	case 10:days += 245; break;
	case 11:days += 276; break;
	case 12:days += 306; break;
	}
	days = days + day;   //������������������õ�������
	printf("%d��%d����%d��ĵ�%d��\n", month, day, year, days);  //������
	return 0;
}