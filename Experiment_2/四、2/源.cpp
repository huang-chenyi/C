#include <iostream>
using namespace std;

int main() 
{
    for (int i = 2; i <= 10; ++i)   //ȷ��i��ֵ
    {
        for (int j = 1; j < i; ++j)   //ȷ��j ��ֵ
        {
            cout << "<" << i << ", " << j << ">" << " ";
        }
        cout << endl;  //i��ֵÿ��һ������һ��
    }
    return 0;
}