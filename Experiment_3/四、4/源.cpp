#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int N = 1000;
    bool num[N + 1]; // 标记每个数字是否为素数
    for (int i = 2; i <= N; i++)
    {  // 初始化数组，将除了0和1以外的所有数字都标记为素数
        num[i] = true;
    }
    for (int i = 2; i <= N; i++)
    {    // 筛选法求素数
        if (num[i])
        { // 如果i是素数
            cout << setw(3) << i << " "; // 输出素数
            for (int j = i * 2; j <= N; j += i)
            {       // 标记i的所有倍数为非素数
                num[j] = false;
            }
        }
    }
    return 0;
}
