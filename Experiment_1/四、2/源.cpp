#define _CRT_SECURE_NO_WARNINGS    //ȷ��scanf()����������
#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("����������a,b,c��ֵ:\n");
	scanf("%d%d%d", &a, &b, &c);  //��ȡa,b,c
	d = a;
	a = b;
	b = c;
	c = d;
	printf("a=%d\nb=%d\nc=%d\n", a, b, c);  //��ӡ���
	return 0;
}