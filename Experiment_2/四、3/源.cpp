#include<iostream>
using namespace std;
int main(void)
{
	int digits[5] = { 0 };//����洢��λ����
	int i, num, j; //iΪ��ֵ��num��ʱ�洢��jΪλ��
	int tmp;  //tmp�����ж������Ƿ���������
	int l = 0; //l���ڿ���ÿ��������ָ���
	for (i = 1; i < 10000; i++)
	{  //��1~10000���μ��
		num = i;  //�洢��ǰ������ֵ
		j = 0;  //��������λ��ֵ
		while (num > 0)  //ȡ�����ֵĸ�λ����
		{
			digits[j++] = num % 10;
			num = num / 10;
		}
		tmp = 1;  //�ٶ���ǰ���ַ���Ҫ��
		for (int k = 0; k < j - 1; k++)
		{   //�ж�ÿλ�����Ƿ��Ǹ�λС�ڵ�λ
			if (digits[k + 1] > digits[k])
			{   //���������⣬��tmpΪ0
				tmp = 0;
				break;
			}
		}
		if (tmp == 1)
		{  //��tmpΪ1������������ʱ������
			cout << i << ' ';
			l++;
			if (l % 20 == 0)
			{   //����ÿ��������ָ���
				cout << '\n';
			}
		}

	}
	cout << endl;//����
	return 0;
}