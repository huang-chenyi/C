#include <iostream>
using namespace std;
//��������
void digits(int num[], int n);
// ������
int main()
{
    int num[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(num) / sizeof(num[0]);
    digits(num, n);
    //������
    cout << "����������:\n ";
    for (int i = 0; i < n; i++)
        cout << num[i] << " ";
    cout << endl;
    return 0;
}
//����ð��������
void digits(int num[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (num[j] < num[j + 1])
            { // ���� num[j] �� num[j + 1]
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
}