#include<iostream>
using namespace std;

int mulNum(int a, int b);

int main() 
{
    int a, b;    //������������
    cout << "��������������: ";
    cin >> a >> b;
    int result = mulNum(a, b);//���ú���
    if (result == 1) 
    {   //���˵��
        cout << a << " is multiple of " << b << endl;
    }
    else 
    {
        cout << a << " is not multiple of " << b << endl;
    }
    return 0;
}

int mulNum(int a, int b) 
{  // ���庯��
    if (b == 0) 
    {// ���b�Ƿ�Ϊ0
        return 0; // ���bΪ0������0
    }
    if (a % b == 0)
    { // ���a�Ƿ��ܱ�b����
        return 1;
    }
    else 
    {
        return 0;
    }
}
