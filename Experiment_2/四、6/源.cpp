#include<iostream>
using namespace std;
int main(void)
{
    int sum = 1;
    for (int i = 1; i <= 100; i++)//ѭ��100��
    {
        sum *= 12;  //����12
        if (sum > 10000)  //�������ݴ�С��������3λ����
        {
            sum = sum % 1000;
        }
    }
    cout << "12^100��ĩ��λ��Ϊ:" << sum << endl;
    return 0;
}