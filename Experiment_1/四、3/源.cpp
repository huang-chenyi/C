#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
int main()
{
	int number;
	printf("������һ����λ����:\n");  //��������
	scanf("%d", &number);
	for (int i = 0; i < 4; i++)  //����ѭ��
	{
		int num = number % 10;  //��ȡ��λ��
		printf("%d ", num);  
		number = number / 10;  //ɾȥ��ǰ��λ����ֵ
	}
	return 0;
}