#include<iostream>
using namespace std;
int main(void)
{
    int digit[15] = { 1,6,23,6,4,8,9,24,12,17,9,14,6,9,7 };
    int i, j, k, l;
    for (i = 0; i < 15; i++)
    {    //ѡ����������
        k = i;
        for (j = i + 1; j < 15; j++)
        {
            if (digit[k] > digit[j])
                k = j;//��¼��������±�
        }
        if (k != 1)
        {    //ʹ����������ס�
            l = digit[i];
            digit[i] = digit[k];
            digit[k] = l;
        }
    }
    for (int m = 0; m < 15; m++)//������
        cout << digit[m] << ' ';
    return 0;
}