#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
int main()
{
	int n, sum = 0, tmp = 1, tnp = 0, k;  //�������
	printf("����n��ֵ��\n");
	scanf("%d", &n);  //����n��ֵ
	for (int i = 1; i <= n; i++)  //����ѭ��
	{
		tmp *= i;  //��һ����n!��ֵ
		tnp += i;  //�ڶ����֣�1+2+��+n����ֵ
		k = tmp * tnp;  //��ʱ�洢һ���ֵ
		sum += k;  //�����ܺ�
	}
	printf("���ʽ��ֵΪ��%d\n", sum);  //������
	return 0;
}