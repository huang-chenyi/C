#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;  //�������
	double sum = 0;
	float pi;
	cout << "������n��ֵ:";
	cin >> n;
	for (int i = 1; i <= n; i++)  
	{
		sum += 1.0 / (i * i);//ѭ�����������
	}
	pi = sqrt(sum * 6);  //ȡ����ֵ
	cout << "PI=" << pi <<endl;
	return 0;
}