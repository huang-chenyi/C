#include<iostream>
using namespace std;
int main(void)
{
	int n;
	int digits[11][11] = { 0 };
	cout << "������һ������2��С��10������n:";
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)  //����ԭʼ����
		{ 
			cout << "�������" << i + 1 << "��"
				 << "��" << j + 1 << "�е�����";
			cin >> digits[i][j];
		}
	cout << "ԭʼ���ݣ�n=" << n << endl;
	for (int i = 0; i < n; i++)    //���ԭʼ����
	{
		for (int j = 0; j < n; j++)
		{
			cout << digits[i][j] << " ";
		}
		cout << endl;
	}
	int max, min, line1 = 0, line2 = 0;
	max = digits[0][0];
	min = digits[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (digits[i][j] > max)
			{
				line1 = i;//��¼���ֵ��λ��	
				max = digits[i][j];//�������ֵ
			}
			if (digits[i][j] < min)
			{
				line2 = i;   //��¼��Сֵ��λ��
				min = digits[i][j];//������Сֵ
			}
		}
	int temp;
	for (int i = 0; i < n; i++)
	{//�����������Ԫ�����ڵ��к���СԪ�����ڵ��жԵ�
		temp = digits[line1][i];  
		digits[line1][i] = digits[line2][i];
		digits[line2][i] = temp;
	}
	cout << "ԭʼ���ݣ�" << endl;
	for (int i = 0; i < n; i++)  //����Ե��������
	{
		for (int j = 0; j < n; j++)
		{
			cout << digits[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}