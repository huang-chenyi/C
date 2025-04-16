#include<iostream>
using namespace std;
int main()
{
	int sum = 0, value = 0;
	cout<< "Please enter some number " << endl;
	cout<< "( When you want to stop it, "
		<< "please press the 'ctrl' + 'z', "
		<< " and then press the 'enter' )" << endl << ":";
	while (cin >> value)
		sum += value;
	cout << "Sum is:" << sum << endl;
	return 0;
}