#include<iostream>
using namespace std;

int primeNum(int num);//声明函数
int main(void)
{
    int num;
    cout << "请输入一个整数:" ;
    cin >> num;
    num = primeNum(num);//用函数判断
    if (num == 0)  //不是素数
        cout << "num is not prime" << endl;
    else     //是素数
        cout << "num is prime" << endl;
	return 0;
}
int primeNum(int num)
{
    if (num < 2)//0和1不是素数
        return 0;
    if (num < 4)//2和3是素数
        return num;
    if (num % 2 == 0 || num % 3 == 0)
        return 0;  //排除可以被2和3整除的数
    for (int i = 5; i * i <= num; i += 6)
    {    //排除可以被其他数整除的数
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }
    return num;//都不符合也是素数
}
