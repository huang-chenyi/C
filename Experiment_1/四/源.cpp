#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
#define PI 3.14
int main()
{
	double r  ,c ;
	printf("������Բ�İ뾶:\n");
	scanf("%lf", &r);   //����뾶
	c = 2 * PI * r;    //����Բ���ܳ�
	printf("Բ���ܳ�Ϊ%lf:\nԲ�����Ϊ%lf:\n", c, r);  //��ӡ���
	return 0;
}