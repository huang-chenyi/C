//���д���򣬸����������ݺ��·ݣ��жϸ����ж����졣
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year, month;	      //ȷ�����ͱ���
	printf("��������ݣ�\n");	  //�˻�����
	scanf("%d", &year);	      //�������
	printf("�������·ݣ�\n");	  //�˻�����
	scanf("%d", &month);	  //�����·�

	if (month < 1 || month > 12)    //������ݵ���Ч��
	{
		printf("��������·�����!\n");
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))     //�ж�����Ƿ�Ϊ����
	{
		if (month == 2)
			printf("%d��%d����29��\n", year, month);	    //�ж��·��Ƿ�Ϊ����2��
	}
	else
	{
		if (month == 2)
			printf("%d��%d����28��\n", year, month);		 //�ж��·��Ƿ�Ϊƽ��2��
	}
	switch (month)		 //��������жϳ�2�µ��·�
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("%d��%d����31��\n", year, month); break;
	case 4:
	case 6:
	case 9:
	case 11:printf("%d��%d����30��\n", year, month); break;
	}
	return 0;   //����0ֵ
}