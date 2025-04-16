#include <iostream>
void main()
{
	int m, n;
	m = 1000;
	n = 850;

	std::cout << "\n(" << m << ',' << n << ')';
	while (m != n) {
		while (m > n) {
			m = m - n;
			std::cout << '(' << m << ',' << n << ')';
		}
		while (m < n) {
			n = n - m;
			std::cout << '('<< m << ', ' << n << ')';
		}
	}
	std::cout << "\n" << m;
}