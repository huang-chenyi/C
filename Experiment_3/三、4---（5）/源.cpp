//9 25 11 17 19 21 7 23 3 27 29 15 31 33 5 35 13 37 39 1
#include <iostream>
using namespace std;
int main()
{
    int arr[20] = { 0 };
    int n = 20;    //������Ԫ�ص�����
    int target;        //Ҫ���ҵ���
    int low = 0;
    int high = n - 1;
    int mid;            //������м�λ��
    int found = 0;     //��¼�Ƿ��ҵ�Ŀ��ֵ

    cout << "������20������:";
    for (int i = 0; i < 20; i++)
    {      //�������������
        cin >> arr[i];
    }
    int i, j, k, l;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {   //��¼��������±�
            if (arr[k] > arr[j])
                k = j;
        }
        if (k != 1)
        {   //ʹ����������ס�
            l = arr[i];
            arr[i] = arr[k];
            arr[k] = l;
        }
    }
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