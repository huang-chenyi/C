#include <iostream>
using namespace std;
//��������
int H(int n, int x);
//������
int main() 
{
    int n, x;
    cout << "����n��x:";
    cin >> n >> x;
    cout << "H" << n << "(" << x << ")=" << H(n, x) << endl;
    return 0;
}
//���庯��
int H(int n, int x) 
{
    if (n == 0)  //H_0(x) = 1
        return 1;
    else if (n == 1) //H_1(x) = 2x
        return 2 * x;
    else       //H_n(x) = 2xH_(n-1)(x) - 2(n-1)H_(n-2)(x) 
        return 2 * x * H(n - 1, x) - 2 * (n - 1) * H(n - 2, x);
}