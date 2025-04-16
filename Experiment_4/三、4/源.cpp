#include <iostream>
using namespace std;

int combinNum(int m, int n);// 函数声明
int factorial(int num);

int main() 
{
    int m, n;
    // 输入两个整数
    cout << "输入两个正整数: ";
    cin >> m >> n;

    if (m == n) 
    {    // 检查m和n的关系，并调用函数
        cout << "m不可以等于n" << endl;
    }
    else 
    {
        int result = combinNum(m, n);
        cout << "c(" << m << ", " << n << ") = " << result << endl;
    }
    return 0;
}

int combinNum(int m, int n) 
{    // 函数定义
    if (n == 0 || m == n) 
    {// 如果m等于n或者n等于0，组合数为1
        return 1;
    }    // 计算组合数
    return factorial(m) / (factorial(n) * factorial(m - n));
}
int factorial(int num)
{// 辅助函数，用于计算阶乘
    int result = 1;
    for (int i = 2; i <= num; ++i)
    {
        result *= i;
    }
    return result;
}