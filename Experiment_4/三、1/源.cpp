#include<iostream>
using namespace std;

int primeNum(int num);//��������
int main(void)
{
    int num;
    cout << "������һ������:" ;
    cin >> num;
    num = primeNum(num);//�ú����ж�
    if (num == 0)  //��������
        cout << "num is not prime" << endl;
    else     //������
        cout << "num is prime" << endl;
	return 0;
}
int primeNum(int num)
{
    if (num < 2)//0��1��������
        return 0;
    if (num < 4)//2��3������
        return num;
    if (num % 2 == 0 || num % 3 == 0)
        return 0;  //�ų����Ա�2��3��������
    for (int i = 5; i * i <= num; i += 6)
    {    //�ų����Ա���������������
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }
    return num;//��������Ҳ������
}
