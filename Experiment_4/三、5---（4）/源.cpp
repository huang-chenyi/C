#include<iostream>
using namespace std;

int gcd_; // �洢���Լ��
int lcm_; // �洢��С������

int gcd(int a, int b); // ��������
void mul(int a, int b, int gcd_); // ��������

int main()
{
    int a, b;
    cout << "��������������:";
    cin >> a >> b; // ������������
    gcd(a, b); // �������Լ��
    cout << a << "��" << b << "�����Լ��Ϊ:" << gcd_ << endl;
    mul(a, b, gcd_); // ������С������
    cout << a << "��" << b << "����С������Ϊ:" << lcm_ << endl;
    return 0;
}

int gcd(int a, int b)
{   //�����Լ��
    if (b == 0)
        return (gcd_ = a); //���ؽ��
    else
        return gcd(b, a % b);
}
void mul(int a, int b, int gcd_)
{ // ����С������
    lcm_ = (a / gcd_) * b; //���ؽ��
}