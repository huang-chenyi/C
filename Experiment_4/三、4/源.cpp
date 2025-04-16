#include <iostream>
using namespace std;

int combinNum(int m, int n);// ��������
int factorial(int num);

int main() 
{
    int m, n;
    // ������������
    cout << "��������������: ";
    cin >> m >> n;

    if (m == n) 
    {    // ���m��n�Ĺ�ϵ�������ú���
        cout << "m�����Ե���n" << endl;
    }
    else 
    {
        int result = combinNum(m, n);
        cout << "c(" << m << ", " << n << ") = " << result << endl;
    }
    return 0;
}

int combinNum(int m, int n) 
{    // ��������
    if (n == 0 || m == n) 
    {// ���m����n����n����0�������Ϊ1
        return 1;
    }    // ���������
    return factorial(m) / (factorial(n) * factorial(m - n));
}
int factorial(int num)
{// �������������ڼ���׳�
    int result = 1;
    for (int i = 2; i <= num; ++i)
    {
        result *= i;
    }
    return result;
}