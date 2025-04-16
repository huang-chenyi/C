#include<iostream>
using namespace std;

int gcd(int a, int b); // 函数声明
int mul(int a, int b, int gcd_); // 函数声明

int main()
{
    int a, b, gcd_, lcm_;
    cout << "请输入两个整数:";
    cin >> a >> b; // 输入两个整数
    gcd_ = gcd(a, b); // 计算最大公约数
    cout << a << "和" << b << "的最大公约数为:" << gcd_ << endl;
    lcm_ = mul(a, b, gcd_); // 计算最小公倍数
    cout << a << "和" << b << "的最小公倍数为:" << lcm_ << endl;
    return 0;
}

int gcd(int a, int b)
{ // 求最大公约数，使用递归
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int mul(int a, int b, int gcd_)
{ // 求最小公倍数
    return (a / gcd_) * b; 
}