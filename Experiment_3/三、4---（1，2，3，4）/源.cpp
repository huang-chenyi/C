#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39 };
    int n = 20;    //������Ԫ�ص�����
    int target;        //Ҫ���ҵ���
    int low = 0;        
    int high = n - 1;   
    int mid;            //������м�λ��
    int found = 0;     //��¼�Ƿ��ҵ�Ŀ��ֵ
    cout << "������Ҫ���ҵ�����";
    cin >> target;
    while (low <= high)
    {
        mid = low + (high - low) / 2;//�����м�λ��
        if (arr[mid] == target)
        {        //����м�λ�õ�Ԫ���Ƿ���Ŀ��ֵ
            found = 1;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // Ŀ��ֵ���Ұ벿��
        }
        else
        {
            high = mid - 1; // Ŀ��ֵ����벿��
        }
    }
    if (found)
    {
        cout << "�����������еĵ� "
             << mid + 1 << " ��Ԫ��" << endl;
    }
    else
    {
        cout << "�޴���" << endl;
    }
    return 0;
}