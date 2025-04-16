#include <iostream>

void main()
{
	int a = 1, b = 10;

	do {
		b -= a;
		a++;
	} while (b-- <= 0);
	std::cout << "a = " << a << "b = " << b << std::endl;
}

