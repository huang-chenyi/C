#include<iostream>
using namespace std;
// ��������
int changeNum(char ch[], int length);
// ������
int main(void)
{
    char ch[100] = { 0 }; // �洢�����16�����ַ���
    cout << "����һ��16��������:";
    cin >> ch;
    int num = changeNum(ch, 100); // ���ú���
    cout << "��Ӧ��10������Ϊ: " << num << endl; // ������
    return 0;
}
// ���庯��
int changeNum(char ch[], int length)
{
    int num_10 = 0; // ���ڴ洢ת�����ʮ������
    for (int i = 0; i < length && ch[i] != '\0'; i++)
    {     // ���������16�����ַ����е�ÿ���ַ�
        int number = 0;
        if (ch[i] >= '0' && ch[i] <= '9')
        { // ����ַ���0-9��ֱ��ת��Ϊ��Ӧ��ʮ������ֵ
            number = ch[i] - '0';
        }
        else if (ch[i] >= 'A' && ch[i] <= 'F')
        { // ����ַ���A-F����ת��Ϊ10-15��ʮ����ֵ
            number = 10 + (ch[i] - 'A');
        }
        else if (ch[i] >= 'a' && ch[i] <= 'f')
        { // ����ַ���a-f����ת��Ϊ10-15��ʮ����ֵ
            number = 10 + (ch[i] - 'a');
        }
        num_10 = num_10 * 16 + number;
    }
    return num_10;
}