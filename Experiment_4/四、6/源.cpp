#include<iostream>
#include<string>
using namespace std;
// ��������
string changeNum(int num);
// ������
int main(void)
{
    int num;
    cout << "����һ��10��������:";
    cin >> num;
    string ch = changeNum(num); // ���ú���
    cout << "��Ӧ��16������Ϊ: " << ch << endl; // ������
    return 0;
}
// ���庯��
string changeNum(int num)
{
    if (num == 0)
        return "0"; // ����0���������
    string ch = "";
    while (num > 0)
    {
        int temp = num % 16;
        char ch_;
        if (temp < 10)
        {
            ch_ = '0' + temp; // 0-9
        }
        else
        {
            ch_ = 'A' + (temp - 10); // A-F
        }
        ch = ch_ + ch; // ����ǰλ��ӵ��ַ�����ǰ��
        num = num / 16;
    }
    return ch;
}