#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include <stdio.h>
int main(void)
{   //��ʼ��ԭ����
	int digits[10] = {1, 4, 6, 7, 8, 10, 17, 19, 20, 38 };
	int digits_new[11] = { 0 };
	int num = 0, *Num, *dig, *dig_new;
	Num = &num; //��ʼ��ָ��
	dig = digits;
	dig_new = digits_new;
	printf("������һ������:");
	scanf("%d", Num); //��ȡ�������������
	for (int i = 0; i < 10; i++)
	{//����������ԭ����Ԫ��ʱ����ԭ����Ԫ��ת�Ƶ���Ӧ�������λ����
		if (*(dig + i) < *Num) 
			*(dig_new + i) = *(dig + i);
		else
		{//�����Ƚ��������Ž����������ٷ���ʣ��ԭ��������
			*(dig_new + i) = *Num;
			for (;i < 10;i++)
				*(dig_new + i + 1) = *(dig + i);
			break;
		}
	}
	//������
	printf("ԭʼ��������:");
	for (int i = 0; i < 10; i++, dig++)
		printf("%d ", *dig);
	printf("\n�������ݺ����������:");
	for (int i = 0; i < 11; i++, dig_new++)
		printf("%d ", *dig_new);
	printf("\n");
	return 0;
}
