#include<iostream>
using namespace std;
int main()
{
	int num = 0, number = 0;
	if (cin >> num)	//��ȡ��һ������ȷ�������ֿ��Դ���
	{
		int ge_shu = 1;
		while (cin >> number)
		{
			if (number == num)
			{
				++ge_shu;
			}
			else
			{
				cout << num << " occurs " 
					 << ge_shu << " times" << endl;
				num = number;
				ge_shu = 1;
			}
		}   //while������
		    //��ӡ�ļ������һ��ֵ�ĸ���
		cout << num << " occurs "
			 << ge_shu << " times" << endl;
	}   //if������
	return 0;
}