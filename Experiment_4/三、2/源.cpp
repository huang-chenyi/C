#include<iostream>
using namespace std;

int computNum(int num);//��������
int main(void)
{
    int num;
    cout << "����һ��������:";
    cin >> num;
    num = computNum(num);//��������
    cout << "���������ĸ�λ����֮��Ϊ:" << num << endl;
    return 0;
}
int computNum(int num)
{
    int a;
    int b = 0;
    while (num != 0)
    {
        a = num % 10;//ȡ����λ����
        b = b + a;//�ۼӸ�λ����
        num /= 10;//��������
    }
    return b;
}
