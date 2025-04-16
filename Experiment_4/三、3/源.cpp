#include<iostream>
using namespace std;

int mulNum(int a, int b);

int main() 
{
    int a, b;    //输入两个整数
    cout << "输入两个正整数: ";
    cin >> a >> b;
    int result = mulNum(a, b);//调用函数
    if (result == 1) 
    {   //输出说明
        cout << a << " is multiple of " << b << endl;
    }
    else 
    {
        cout << a << " is not multiple of " << b << endl;
    }
    return 0;
}

int mulNum(int a, int b) 
{  // 定义函数
    if (b == 0) 
    {// 检查b是否为0
        return 0; // 如果b为0，返回0
    }
    if (a % b == 0)
    { // 检查a是否能被b整除
        return 1;
    }
    else 
    {
        return 0;
    }
}
