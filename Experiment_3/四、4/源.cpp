#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int N = 1000;
    bool num[N + 1]; // ���ÿ�������Ƿ�Ϊ����
    for (int i = 2; i <= N; i++)
    {  // ��ʼ�����飬������0��1������������ֶ����Ϊ����
        num[i] = true;
    }
    for (int i = 2; i <= N; i++)
    {    // ɸѡ��������
        if (num[i])
        { // ���i������
            cout << setw(3) << i << " "; // �������
            for (int j = i * 2; j <= N; j += i)
            {       // ���i�����б���Ϊ������
                num[j] = false;
            }
        }
    }
    return 0;
}
