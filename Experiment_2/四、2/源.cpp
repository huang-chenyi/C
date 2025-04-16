#include <iostream>
using namespace std;

int main() 
{
    for (int i = 2; i <= 10; ++i)   //确定i的值
    {
        for (int j = 1; j < i; ++j)   //确定j 的值
        {
            cout << "<" << i << ", " << j << ">" << " ";
        }
        cout << endl;  //i的值每加一，则换行一次
    }
    return 0;
}