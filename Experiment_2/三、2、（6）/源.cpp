#include<iostream>
using namespace std;
int main(void)
{
	int line=1;
	for (int i = 1; i <= 11; i++)
	{
		for (int j = 40 - 4 * (i - 1); j >= 1; j--)//�������ǰ�ո�
			cout << ' ';
		for (int j = 1; j <= line; j = j + 2)  //��ӡ��������ǰ����
		{
			if (j >= 10)
				cout << j << ' ' << ' ';  //�������ּ��
			else
				cout << j << ' ' << ' ' << ' ';
		}
		for (int j = line - 2; j >= 1; j = j - 2) //��ӡ�������������
		{
			if (j >= 10)
				cout << j << ' ' << ' ';
			else
				cout << j << ' ' << ' ' << ' ';
		}
		line = line + 2;  //�õ�������������
		cout << endl;  //����
	}
	return 0;
}