#include<iostream>
#include<cmath>
using namespace std;
// ��������
double y1(double a, double b, double c);
double y2(double a, double b, double c);
double y3(double a, double b, double c);
// ������
int main(void)
{
    double a, b, c, x1, x2;
    cout << "���뷽����a,b,c��ֵ:";
    cin >> a >> b >> c;
    if (b * b - 4 * a * c > 0)
    {
        x1 = y1(a, b, c);
        x2 = y1(a, b, c);
    }
    else if (b * b - 4 * a * c == 0)
        x1 = y2(a, b, c);
    else
        x1 = y3(a, b, c);
    // ������
    if (b * b - 4 * a * c > 0)
    {
        cout << "��������������ȵ�ʵ����" << x1 << " �� " << x2 << endl;
    }
    else if (b * b - 4 * a * c == 0)
    {
        cout << "������������ȵ�ʵ����" << x1 << endl;
    }
    else
    {
        cout << "����û��ʵ����" << endl;
    }

    return 0;
}
// ���庯��
double y1(double a, double b, double c)
{
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a); 
}
double y2(double a, double b, double c)
{
    return -b / (2 * a);
}
double y3(double a, double b, double c)
{
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a); 
}