#include<iostream>
using namespace std;
#define number 20
int main(void)
{
	int digits[number] = { 0 };
	for (int i = 0; i < number; i++)
	{      //�Ӽ����ϻ�ȡ����Ԫ������
		cout << "�������" << i + 1 << "����:";
		cin >> digits[i];
	}
	int max, min, temp;
	int num1 = 0, num2 = 0;
	max = digits[0];
	min = digits[0];
	for (int i = 0; i < number - 1; i++)
	{
		if (digits[i + 1] > max)
		{   //�ж����ֵ
			max = digits[i + 1];
			num1 = i + 2;  //��¼���ֵ��λ��
		}
		if (digits[i + 1] < min)
		{  //�ж���Сֵ
			min = digits[i + 1];
			num2 = i + 2;   //��¼��Сֵ��λ��
		}
	}
	cout << "�����еĳ�ʼԪ��Ϊ:";
	for (int i = 0; i < number; i++)
	{  //���ԭʼ��10��Ԫ��
		cout << digits[i] << " ";
	}
	cout << endl;  //����
	cout << "���ֵ:" << max << " "  //������
		<< "������ĵ�" << num1 << "��Ԫ��" << " "
		<< "��Сֵ:" << min << " "
		<< "������ĵ�" << num2 << "��Ԫ��";
	cout << endl;
	return 0;
}