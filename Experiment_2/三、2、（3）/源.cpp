#include<iostream>
using namespace std;
int main()
{
	int i = 1, n;
	cout << "Input:" ;//���뺯��
	cin>> n;
	cout << "Output:";
	while (i <= n)//����ѭ�����綨ѭ����Χ
	{
		if (n % i == 0)//�ж��Ƿ�Ϊ����
		{
			cout << i ;
			if (i < n)
				cout << ',';
		}
		i++;
	}
	cout << endl;
	return 0;
}