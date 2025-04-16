#include <iostream>
#include <iomanip>
using namespace std;

// ��������
bool primeNum(int num);

// ������
int main()
{
    int num;
    cout << "����һ������:";
    cin >> num;
    if (!primeNum(num))
        cout << "������������" << endl;
    else
        cout << "����������" << endl;

    //�����2000���ڵ���ʮ�����ϵ����������ķ������顣
    int j = 0; // �����������ļ�����
    int l = 0; // ��¼����a������
    int start = -1; // ��������������ʼλ��
    int a[100] = { 0 }; // ��¼��ʮ�����ϵ����������ķ�������λ��
    int b[2000] = { 0 }; // ��¼��ʮ�����ϵ����������ķ�������
    for (int i = 1; i < 2000; i++)
    {
        bool isPrime = primeNum(i);
        if (!isPrime)
        {
            if (j < 10)
                j++;
            else if (j == 10)
                start = i - 9;
            else
                b[i] = 1;
        }
        else
        {//�������������ü���������ʼλ��
            if (j >= 10)
            {//������10�����ϵķ���������¼��ʼλ��
                a[l++] = start;
                j = 0;
            }
            else
                j = 0;
            start = -1; // ������ʼλ��
        }
    }
    if (j >= 10)
    { // ������һ���Ƿ���������
        a[l++] = start;
    }
    cout << "2000������ʮ�����ϵ����������ķ������飺" << endl;
    int k = 0;
    for (int i = 0; i < l; i++)
    {
        cout << "��" << a[i] << "��" << a[i] + 9 << " ";
        if (k % 5 == 0) cout << endl;
        k++;
    }
    return 0;
}
// ���庯��
bool primeNum(int num)
{
    if (num <= 1)
        return false; // 1��������
    if (num == 2)
        return true;  // 2������
    if (num % 2 == 0)
        return false; // �ų�ż��
    for (int i = 3; i * i <= num; i += 2)
    { // ��3��ʼֻ�������
        if (num % i == 0)
        {
            return false; // ����ܱ�������������
        }
    }
    return true; // ������ܱ��κ���������������
}