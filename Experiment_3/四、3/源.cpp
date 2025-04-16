#include <iostream>
using namespace std;
#define n 6
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() 
{
    int numbers[n] = { 0 };
    cout << "������ " << n << " ������:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> numbers[i]; // ����ÿ������
    }
    int gys = numbers[0]; // ������ӳ�ʼ��Ϊ��һ����
    for (int i = 1; i < n; ++i) 
    {    
        gys = gcd(gys, numbers[i]); // �����������
    }
    int gbs = numbers[0]; // ��С��������ʼ��Ϊ��һ����
    for (int i = 1; i < n; ++i)
    {
        gbs = (gbs / gcd(gbs, numbers[i])) * numbers[i]; // ������С������
    }
    cout << "�������: " << gys << endl;
    cout << "��С������: " << gbs << endl;
    return 0;
}
