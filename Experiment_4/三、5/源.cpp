#include<iostream>
using namespace std;

int gcd(int a, int b);// ��������
int mul(int a, int b, int gcd_);

int main()
{
    int a, b, gcd_, lcm_;
    cout << "��������������:";
    cin >> a >> b;//������������
    gcd_ = gcd(a, b);//�������Լ��
    cout << a << "��" << b << "�����Լ��Ϊ:" << gcd_ << endl;
    lcm_ = mul(a, b, gcd_);//������С������
    cout << a << "��" << b << "����С������Ϊ:" << lcm_ << endl;
    return 0;
}

int gcd(int a, int b)
{  //�����Լ��
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int mul(int a, int b, int gcd_)
{  //����С������
    return (a / gcd_) * b;
}