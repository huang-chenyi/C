#include <iostream>
using namespace std;
//声明函数
int H(int n, int x);
// 主函数
int main()
{
    int n, x;
    cout << "输入n和x:";
    cin >> n >> x;
    cout << "H" << n << "(" << x << ")=" << H(n, x) << endl;
    return 0;
}
// 定义函数
int H(int n, int x)
{
    if (n == 0)  //H_0(x) = 1
        return 1;
    else if (n == 1)  //H_1(x) = 2x
        return 2 * x;
    int h0 = 1;
    int h1 = 2 * x;
    for (int i = 2; i <= n; ++i)
    {             //使用循环计算H_n(x)
        int hn = 2 * x * h1 - 2 * (i - 1) * h0;
        h0 = h1;  //更新H_(n-2)(x)的值
        h1 = hn;  //更新H_(n-1)(x)的值
    }
    return h1;  //返回H_n(x)的值
}