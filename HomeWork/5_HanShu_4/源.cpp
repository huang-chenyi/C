#include <iostream> 
using namespace std;
// ��������
int str_length(const char array[]);
int str_count(const char main[], const char sub[]);
// ������
int main()
{
    char main[100];
    char sub[100];
    cout << "���������ַ���: "; //�������ַ���
    cin.getline(main, 100);
    cout << "������Ҫͳ�Ƶ����ַ���: ";
    cin.getline(sub, 100);    //��ȡ���ַ���
    int count = str_count(main, sub); //���ú����������ַ������ִ���
    cout << "���ַ��� '" << sub << "' ���ַ����г��ֵĴ���Ϊ: " << count << endl; //������
    return 0;
}
// ���庯��
int str_length(const char array[])
{
    int length = 0;
    while (array[length] != '\0') //�����ַ���ֱ���������ַ�
        length++;
    return length; //�����ַ�������
}
// ���庯��
int str_count(const char main[], const char sub[])
{
    int mainLength = str_length(main);
    int subLength = str_length(sub);
    int count = 0; //��ʼ������Ϊ0
    for (int i = 0; i <= mainLength - subLength; i++)
    {
        bool found = true;
        for (int j = 0; j < subLength; j++) //�������ַ���
        {
            if (main[i + j] != sub[j]) //��ǰ�ַ���ƥ��
            {
                found = false;
                break; //�����ڲ�ѭ��
            }
        }
        if (found) //�ҵ�ƥ��
        {
            count++; //���Ӽ���
            i += subLength - 1; //������ƥ������ַ���
        }
    }
    return count; //�������ַ������ִ���
}