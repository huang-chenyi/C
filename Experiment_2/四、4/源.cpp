#include<iostream>
using namespace std;
int main(void)
{
    int N;
    cout << "请输入一个正整数N:";
    cin >> N;
    cout << N << "=";
    bool tmp = true; //标记是否是第一个因子
    while (N % 2 == 0)
    {    // 处理2的因子
        if (!tmp)
        {
            cout << "*";
        }
        cout << "2";
        N /= 2;
        tmp = false; //输出了第一个因子
    }
    for (int i = 3; i * i <= N; i += 2)
    {          // 处理奇数因子
        tmp = true; // 重置标记
        while (N % i == 0)
        {
            if (!tmp)
            {
                cout << "*";
            }
            cout << i;
            N /= i;
            tmp = false; // 输出了第一个因子
        }
    }
    if (N > 2)
    {    // 如果N大于2，则N本身是一个素数
        if (!tmp)
        {
            cout << "*";
        }
        cout << N;
    }
    cout << endl;
    return 0;
}