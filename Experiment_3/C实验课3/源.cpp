#include<iostream>
using namespace std;

int main(void)
{
    int n;
    int digits[11][11] = { 0 };
    cout << "请输入一个大于2且小于10的整数n:";
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)  //输入原始数据
        {
            cout << "请输入第" << i + 1 << "行"
                << "第" << j + 1 << "列的数字";
            cin >> digits[i][j];
        }
    cout << "原始数据：n=" << n << endl;
    for (int i = 0; i < n; i++)    //输出原始数据
    {
        for (int j = 0; j < n; j++)
        {
            cout << digits[i][j] << " ";
        }
        cout << endl;
    }
    int max, min, line1 = 0, line2 = 0, col1 = 0, col2 = 0;
    max = digits[0][0];
    min = digits[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (digits[i][j] > max)
            {
                line1 = i; //记录最大值的行位置
                col1 = j; //记录最大值的列位置
                max = digits[i][j]; //更新最大值
            }
            if (digits[i][j] < min)
            {
                line2 = i; //记录最小值的行位置
                col2 = j; //记录最小值的列位置
                min = digits[i][j]; //更新最小值
            }
        }

    // 检查最大值和最小值是否在同一行
    if (line1 == line2)
    {
        cout << "最大值和最小值出现在一行上，无法通过交换行来对调它们。" << endl;
    }
    else
    {
        int temp;
        for (int i = 0; i < n; i++)
        {
            //将矩阵中最大元素所在的行和最小元素所在的行对调
            temp = digits[line1][i];
            digits[line1][i] = digits[line2][i];
            digits[line2][i] = temp;
        }
        cout << "对调后的数据：" << endl;
        for (int i = 0; i < n; i++)  //输出对调后的数据
        {
            for (int j = 0; j < n; j++)
            {
                cout << digits[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}