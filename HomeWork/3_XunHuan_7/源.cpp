#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
int main()
{
	int n;
	double a, sum = 0, tmp = 0;
	printf("������a��ֵ��\n");
	scanf("%lf", &a);  //����a
	printf("������n��ֵ��\n");
	scanf("%d", &n);  //����n
	for (int i = 0; i < n; i++)  //����ѭ��
	{
		tmp = tmp * 10 + a;   // ����ÿһ��
		sum += tmp;   // �ۼ�ÿһ��
	}
	printf("S%d=%f\n", n, sum);  //������
	return 0;
}