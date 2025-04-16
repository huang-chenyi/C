#include <iostream>
#include <iomanip>
using namespace std;

// 声明函数
bool primeNum(int num);

// 主函数
int main()
{
    int num;
    cout << "输入一个整数:";
    cin >> num;
    if (!primeNum(num))
        cout << "该数不是素数" << endl;
    else
        cout << "该数是素数" << endl;

    //求出在2000以内的有十个以上的所有连续的非素数组。
    int j = 0; // 连续非素数的计数器
    int l = 0; // 记录数组a的索引
    int start = -1; // 连续非素数的起始位置
    int a[100] = { 0 }; // 记录有十个以上的所有连续的非素数组位置
    int b[2000] = { 0 }; // 记录有十个以上的所有连续的非素数组
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
        {//遇到素数，重置计数器和起始位置
            if (j >= 10)
            {//有连续10个以上的非素数，记录起始位置
                a[l++] = start;
                j = 0;
            }
            else
                j = 0;
            start = -1; // 重置起始位置
        }
    }
    if (j >= 10)
    { // 检查最后一组是否满足条件
        a[l++] = start;
    }
    cout << "2000以内有十个以上的所有连续的非素数组：" << endl;
    int k = 0;
    for (int i = 0; i < l; i++)
    {
        cout << "从" << a[i] << "到" << a[i] + 9 << " ";
        if (k % 5 == 0) cout << endl;
        k++;
    }
    return 0;
}
// 定义函数
bool primeNum(int num)
{
    if (num <= 1)
        return false; // 1不是素数
    if (num == 2)
        return true;  // 2是素数
    if (num % 2 == 0)
        return false; // 排除偶数
    for (int i = 3; i * i <= num; i += 2)
    { // 从3开始只检查奇数
        if (num % i == 0)
        {
            return false; // 如果能被整除则不是素数
        }
    }
    return true; // 如果不能被任何数整除则是素数
}