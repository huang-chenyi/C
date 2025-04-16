//9 25 11 17 19 21 7 23 3 27 29 15 31 33 5 35 13 37 39 1
#include <iostream>
using namespace std;
int main()
{
    int arr[20] = { 0 };
    int n = 20;    //数组中元素的数量
    int target;        //要查找的数
    int low = 0;
    int high = n - 1;
    int mid;            //数组的中间位置
    int found = 0;     //记录是否找到目标值

    cout << "请输入20个整数:";
    for (int i = 0; i < 20; i++)
    {      //输入无序的数据
        cin >> arr[i];
    }
    int i, j, k, l;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {   //记录最大数的下标
            if (arr[k] > arr[j])
                k = j;
        }
        if (k != 1)
        {   //使最大数“沉底”
            l = arr[i];
            arr[i] = arr[k];
            arr[k] = l;
        }
    }
    cout << "请输入要查找的数：";
    cin >> target;
    while (low <= high)
    {
        mid = low + (high - low) / 2;//计算中间位置
        if (arr[mid] == target)
        {        //检查中间位置的元素是否是目标值
            found = 1;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // 目标值在右半部分
        }
        else
        {
            high = mid - 1; // 目标值在左半部分
        }
    }
    if (found)
    {
        cout << "该数是数组中的第 "
            << mid + 1 << " 个元素" << endl;
    }
    else
    {
        cout << "无此数" << endl;
    }
    return 0;
}