#include <iostream>
#include <string>
using namespace std;
// ��������
string changeNum(int num_10, int num_jinzhi);
// ������
int main()
{
    int num_10, num_jinzhi;
    cout << "������һ��ʮ����������";
    cin >> num_10;
    cout << "������Ҫת���ɵĽ�������";
    cin >> num_jinzhi;
    string num_other = changeNum(num_10, num_jinzhi);
    cout << "ת��Ϊ" << num_jinzhi << "������Ϊ��" << num_other << endl;
    return 0;
}
// ���庯��
string changeNum(int num_10, int num_jinzhi)
{
    if (num_10 == 0)
        return "0"; // ����0���������
    string num_other = "";
    bool isNegative = num_10 < 0; // ����Ƿ�Ϊ����
    if (isNegative)
        num_10 = -num_10;
    while (num_10 > 0)
    {// �������9����������Ҫת��Ϊ��ĸ
        int remainder = num_10 % num_jinzhi;
        if (remainder >= 10)
            num_other = char('A' + (remainder - 10)) + num_other;
        else
            num_other = char('0' + remainder) + num_other;
        num_10 /= num_jinzhi;
    }
    if (isNegative)
        num_other = "-" + num_other; // ����Ǹ�������Ӹ���
    return num_other;
}