#include<stdio.h>
int main()
{
	int peach = 1;  //�������ӵ�������ֵ
	for (int i = 1; i <= 9; i++)  //����ѭ��
	{
		peach = 2 * (peach += 1);  //���Ʒ�����ÿ�����ӵ�����
	}
	printf("��һ��һ��ժ��%d������\n", peach);  //��ӡ���
	return 0;
}