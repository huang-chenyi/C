#include<iostream>
using namespace std;
int main(void)
{
    int digits[200] = {0};
    int n;
    cout << "����������������ĸ�����";
    cin >> n;
    for (int i = 0; i < n; i++)
    {                          //��������
        cout << "���������еĵ�" << i+1 << "����:";
        cin >> digits[i];
    }
	cout << "(" << digits[0] << "," << digits[1];
	for (int i = 2; i < n; i++) 
	{
		if (digits[i - 2] > digits[i - 1])
		{                         //�����������
			if (digits[i] > digits[i - 1])  //˳��仯
			{
				cout << "),(" << digits[i - 1] << "," << digits[i];
			}
			else        //δ�仯
			{
				cout << "," << digits[i];
			}
		}
		if (digits[i - 2] < digits[i - 1])
		{                         //�����������
			if (digits[i] > digits[i - 1])  //δ�仯
			{
				cout << "," << digits[i];
			}
			else      //˳��仯
			{
				cout << "),(" << digits[i - 1] << "," << digits[i];
			}
		}
	}
	cout << ")";
	return 0;
}