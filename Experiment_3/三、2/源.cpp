#include<iostream>
using namespace std;
int main(void)
{   //34
	char str[] = "Hello, I am Huang Chenyi from NCU.";
	char ch;
	cout << "����������һ���ַ�:";
	cin >> ch;
	bool k = 0;  //��¼�Ƿ����
	int tmp;  //�洢���ڵ�λ��
	for (int i = 0; i < 34; i++)
	{
		if (str[i] == ch)
		{
			k = 1;
			tmp = i;
			break;
		}
	}
	if (k == 1)
	{
		cout << "���ַ��ڸ������ַ����У��ǵ�"
			 << tmp + 1 << "��Ԫ��" << endl;
	}
	else
	{
		cout << "���ַ����ڸ������ַ�����" << endl;
	}
	return 0;
}