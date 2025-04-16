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
    cout << "请输入 " << n << " 个整数:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> numbers[i]; // 输入每个整数
    }
    int gys = numbers[0]; // 最大公因子初始化为第一个数
    for (int i = 1; i < n; ++i) 
    {    
        gys = gcd(gys, numbers[i]); // 更新最大公因子
    }
    int gbs = numbers[0]; // 最小公倍数初始化为第一个数
    for (int i = 1; i < n; ++i)
    {
        gbs = (gbs / gcd(gbs, numbers[i])) * numbers[i]; // 更新最小公倍数
    }
    cout << "最大公因子: " << gys << endl;
    cout << "最小公倍数: " << gbs << endl;
    return 0;
}
