#include<iostream>
using namespace std;
int main(void)
{
    int digit[15] = { 1,6,23,6,4,8,9,24,12,17,9,14,6,9,7 };
    int i, j, k, l;
    for (i = 0; i < 15; i++)
    {    //选择排序法排序
        k = i;
        for (j = i + 1; j < 15; j++)
        {
            if (digit[k] > digit[j])
                k = j;//记录最大数的下标
        }
        if (k != 1)
        {    //使最大数“沉底”
            l = digit[i];
            digit[i] = digit[k];
            digit[k] = l;
        }
    }
    for (int m = 0; m < 15; m++)//输出结果
        cout << digit[m] << ' ';
    return 0;
}