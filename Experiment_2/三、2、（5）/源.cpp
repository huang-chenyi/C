#include<iostream>
using namespace std;
int main(void)
{
	int i, j = 0, sum = 0, k;
	int digit[11];  //���崢������������
	for (i = 1000; i > 2; i--)//�����ʼ����1000���ڵ�����
	{
		if (i % 2 != 0)  //�ж��Ƿ�Ϊ����
		{
			for (int l = i - 1; l > 1; l--)  
			{
				k = 1;  //��ʼk=1
				if (i % l == 0)  //����Ƿ�Ϊ����
				{
					k = 0;  //������������k=0
					break;
				}
			}
			if (k == 1)  //k=1ʱ����������Ϊ����
			{
				j++;
				digit[j] = i; //�洢������
				sum += i;
				if (j == 10)   //�ﵽ10������ʱ�˳�ѭ��
					break;
			}
		}
	}
	if (j < 10)  //1000���ڲ���10�����������
		cout << "1000������������10��.";
	else
	{
		for (int k = 1; k <= 10; k++)  //����������
		{
			cout << digit[k] << '+';
		}
		cout << "\b" << '=' << sum << endl;
	}
	return 0;
}