//��д��������һ�����ݲ������������У�Ҫ������������Ȼ����
#include <iostream>
using namespace std;
//��������
void digits(int num[], int number);
//������
int main(void)
{
	int number;
	int num[11] = { 1,2,5,5,8,9,12,19,23,25 };
	cout << "����һ������:";
	cin >> number;
	cout << "ԭ����Ϊ:";
	for (int i = 0; i < 10; i++)
		cout << num[i] << " ";
	cout << endl;
	digits(num, number);
	cout << "�������ݺ�����Ϊ:";
	for (int i = 0; i < 11; i++)
		cout << num[i] << " ";
	cout << endl;
}
//���庯��
void digits(int num[], int number)
{
	int i;
	for (i = 0; i < 10; i++)
		if (num[i] > number)
			break; // �ҵ�����λ��
	// �������Ԫ������ƶ�һλ
	for (int j = 10; j > i; j--)
		num[j] = num[j - 1];
	num[i] = number;// ������Ԫ��
}