#include<iostream>
using namespace std;
int main(void)
{
    int N;
    cout << "������һ��������N:";
    cin >> N;
    cout << N << "=";
    bool tmp = true; //����Ƿ��ǵ�һ������
    while (N % 2 == 0)
    {    // ����2������
        if (!tmp)
        {
            cout << "*";
        }
        cout << "2";
        N /= 2;
        tmp = false; //����˵�һ������
    }
    for (int i = 3; i * i <= N; i += 2)
    {          // ������������
        tmp = true; // ���ñ��
        while (N % i == 0)
        {
            if (!tmp)
            {
                cout << "*";
            }
            cout << i;
            N /= i;
            tmp = false; // ����˵�һ������
        }
    }
    if (N > 2)
    {    // ���N����2����N������һ������
        if (!tmp)
        {
            cout << "*";
        }
        cout << N;
    }
    cout << endl;
    return 0;
}