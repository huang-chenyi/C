#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n = 1; //�������
	double sum = 0;
	double pi;
	while (1.0 / (n * n) >= 0.0001)//����ѭ�����綨��Χ
	{
		sum += 1.0 / (n * n);  //��ֵ
		n++;
	}
	pi = sqrt(sum * 6);  //��
	cout << "PI=" << pi << ";" << "n=" << n << endl;
	return 0;
}