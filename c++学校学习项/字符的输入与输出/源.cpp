#include <stdio.h><iostream>
int main()
{

	char c1 , c2;

	c1 = getchar();

	printf("c1=%c\n", c1);
	//�������ڼ���������һ�ַ��󣬰��س���������Ļ��������ַ�
	c2 = getchar();
	getchar();
	printf("c2=%c\n", c2);
	//����ֱ������һ���ַ���ͻس���Ӧ����ȫ����Ӧ����ģ������ַ������ٻس�
	
	//�����Ƕ��Ϸ�����Ľ��������������ֱ������һ���ַ���ͻس����ٽ�����һ���ַ�������
	char b1, b2;

	b1 = getchar();

	getchar();

	printf("b1=%c\n", b1);
	
	b2 = getchar();

	getchar();

	printf("b2=%c\n", b2);
	
	
	
	return 0;

}