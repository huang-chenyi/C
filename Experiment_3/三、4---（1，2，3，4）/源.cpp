#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39 };
    int n = 20;    //数组中元素的数量
    int target;        //要查找的数
    int low = 0;        
    int high = n - 1;   
    int mid;            //数组的中间位置
    int found = 0;     //记录是否找到目标值
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