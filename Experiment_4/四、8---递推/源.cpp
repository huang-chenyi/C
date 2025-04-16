#include <iostream>
using namespace std;
//��������
int H(int n, int x);
// ������
int main()
{
    int n, x;
    cout << "����n��x:";
    cin >> n >> x;
    cout << "H" << n << "(" << x << ")=" << H(n, x) << endl;
    return 0;
}
// ���庯��
int H(int n, int x)
{
    if (n == 0)  //H_0(x) = 1
        return 1;
    else if (n == 1)  //H_1(x) = 2x
        return 2 * x;
    int h0 = 1;
    int h1 = 2 * x;
    for (int i = 2; i <= n; ++i)
    {             //ʹ��ѭ������H_n(x)
        int hn = 2 * x * h1 - 2 * (i - 1) * h0;
        h0 = h1;  //����H_(n-2)(x)��ֵ
        h1 = hn;  //����H_(n-1)(x)��ֵ
    }
    return h1;  //����H_n(x)��ֵ
}