#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
int main(void)
{
	float a[10] = { 0 };
	float *b;
	b = a; //����ָ�����
	printf("������10������:\n");
	for (b = a + 9; b >= a; b--)
		scanf("%f", b); //����10������
	float sum = 0;
	for (b = a + 9; b >= a; b--)
		sum += *b;  //����10�������ܺ�
	float aver;
	aver = sum / 10;//����ƽ��ֵ
	printf("ƽ��ֵΪ:%.2f\n", aver);
	return 0;
}
